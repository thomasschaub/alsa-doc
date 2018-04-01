#include <array>
#include <chrono>
#include <iostream>
#include <sstream>
#include <utility>

#include <boost/lexical_cast.hpp>

#include <dlfcn.h>

#include <alsa/asoundlib.h>

#include "trace_event_writer.h"

// Tracing

static Tracer tracer(1024);

namespace fns
{

// ALSA Interface description

struct snd_pcm_open
{
  const char* name = "snd_pcm_open";
  const std::vector<const char*> args = {"pcm", "name", "stream", "mode"};
  using type = int(*)(snd_pcm_t **pcm, const char *name, snd_pcm_stream_t stream, int mode);
};

struct snd_pcm_writei
{
  const char* name = "snd_pcm_writei";
  const std::vector<const char*> args = {"pcm", "buffer", "size"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *pcm, const void *buffer, snd_pcm_uframes_t size);
};

// Accessors

template <typename Fn>
static typename Fn::type load()
{
  // Open libasound.so
  static void* handle = nullptr;
  if (handle == nullptr)
  {
    handle = dlopen("libasound.so", RTLD_LAZY);
    if (handle == nullptr)
    {
      std::cout << "Error: could not open libasound.so" << std::endl;
      return nullptr;
    }
  }

  // Get function address
  Fn fn;
  auto addr = reinterpret_cast<typename Fn::type>(dlsym(handle, fn.name));
  if (addr == nullptr)
  {
    std::cout << "Error: could not find " << fn.name << std::endl;
  }
  return addr;
}

template <typename... Args>
struct ArgCollector
{
  template <size_t... Is>
  std::vector<std::pair<std::string, std::string>> collect(std::index_sequence<Is...>, const char* const* names, Args... args)
  {
    return {std::make_pair(names[Is], boost::lexical_cast<std::string>(args))...};
  }
};


template <typename... Args>
std::vector<std::pair<std::string, std::string>> collectArgs(const char* const* names, Args... args)
{
  ArgCollector<Args...> argCollector;
  return argCollector.collect(std::index_sequence_for<Args...>(), names, args...);
}

template <typename Fn, typename... Args>
auto call(Args... args)
{
  Fn fn;
  auto f = load<Fn>();

  const auto t0 = std::chrono::high_resolution_clock::now();
  const auto ret = f(std::forward<Args>(args)...);
  const auto t1 = std::chrono::high_resolution_clock::now();

  tracer.trace(fn.name, t0, t1, collectArgs(fn.args.data(), args...));

  return ret;
}

}

// Public interface

extern "C"
{

int snd_pcm_open(snd_pcm_t **pcm, const char *name, 
		 snd_pcm_stream_t stream, int mode)
{
  return fns::call<fns::snd_pcm_open>(pcm, name, stream, mode);
}

snd_pcm_sframes_t snd_pcm_writei(snd_pcm_t *pcm, const void *buffer, snd_pcm_uframes_t size)
{
  return fns::call<fns::snd_pcm_writei>(pcm, buffer, size);
}

#if 0

// TODO

snd_pcm_info_sizeof
snd_pcm_info
snd_pcm_format_description
snd_pcm_hw_params_sizeof@plt
snd_pcm_hw_params_any@plt
snd_pcm_hw_params_set_access@plt
snd_pcm_hw_params_set_format@plt
snd_pcm_hw_params_set_channels@plt
snd_pcm_hw_params_set_rate_near@plt
snd_pcm_hw_params_get_buffer_time_max@plt
snd_pcm_hw_params_set_period_time_near@plt
snd_pcm_hw_params_set_buffer_time_near@plt
snd_pcm_hw_params_is_monotonic@plt
snd_pcm_hw_params_can_pause@plt
snd_pcm_hw_params@plt
snd_pcm_hw_params_get_period_size@plt
snd_pcm_hw_params_get_buffer_size@plt
snd_pcm_sw_params_current@plt
snd_pcm_sw_params_set_avail_min@plt
snd_pcm_sw_params_set_stop_threshold@plt
snd_pcm_sw_params@plt
snd_pcm_format_physical_width@plt
snd_pcm_format_width@plt
snd_pcm_status_sizeof@plt
snd_pcm_status@plt
snd_pcm_status_get_state@plt
snd_pcm_status_get_trigger_htstamp@plt
snd_pcm_prepare@plt

#endif

}
