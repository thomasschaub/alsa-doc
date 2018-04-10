#include <iostream>
#include <string>
#include <utility>
#include <vector>

#include <boost/lexical_cast.hpp>

#include <dlfcn.h>

#include "trace_event_writer.h"

static Tracer tracer(1024);

namespace fns
{

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

template <typename T>
std::string to_string(T&& t)
{
  return boost::lexical_cast<std::string>(std::forward<T>(t));
}

std::string to_string(const char* cs)
{
  if (cs == nullptr)
  {
    return "<nullptr>";
  }
  return cs;
}

template <typename... Args>
struct ArgCollector
{
  template <size_t... Is>
  std::vector<std::pair<std::string, std::string>> collect(std::index_sequence<Is...>, const char* const* names, Args... args)
  {
    return {std::make_pair(names[Is], to_string(args))...};
  }
};


template <typename... Args>
std::vector<std::pair<std::string, std::string>> collectArgs(const char* const* names, Args... args)
{
  ArgCollector<Args...> argCollector;
  return argCollector.collect(std::index_sequence_for<Args...>(), names, args...);
}

template <typename Fn, typename... Args>
auto call_void(Args... args)
{
  Fn fn;
  auto f = load<Fn>();

  const auto t0 = std::chrono::high_resolution_clock::now();
  f(std::forward<Args>(args)...);
  const auto t1 = std::chrono::high_resolution_clock::now();

  tracer.trace(fn.name, t0, t1, collectArgs(fn.args.data(), args...));
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
