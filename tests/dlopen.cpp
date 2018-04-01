#include <iostream>

#include <dlfcn.h>

#include <alsa/asoundlib.h>

namespace ptr
{

using snd_pcm_open = int(*)(snd_pcm_t **pcm, const char *name, snd_pcm_stream_t stream, int mode);

}

int main()
{
  void* handle = dlopen("libasound.so", RTLD_LAZY);
  if (handle == nullptr)
  {
    std::cout << "Error: could not open shared object" << std::endl;
    throw 0;
  }

  auto snd_pcm_open = reinterpret_cast<ptr::snd_pcm_open>(dlsym(handle, "snd_pcm_open"));
  if (snd_pcm_open == nullptr)
  {
    std::cout << "Error: could not get snd_pcm_open" << std::endl;
    throw 0;
  }

  if (int errorCode = dlclose(handle) != 0)
  {
    std::cout << "Error: dlclose failed " << errorCode << std::endl;
    throw 0;
  }
}
