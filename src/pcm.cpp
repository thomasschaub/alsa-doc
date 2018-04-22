#include <alsa/asoundlib.h>

#include "tracer.h"

namespace fns
{

struct snd_asoundlib_version
{
  const char* name = "snd_asoundlib_version";
  const std::vector<const char*> args = {};
  using type = const char *(*)();
};

}

extern "C" const char * snd_asoundlib_version()
{
  return fns::call<fns::snd_asoundlib_version>();
}

// Skipping snd_dlopen

namespace fns
{

using snd_dlsym_arg0_t = void *;
using snd_dlsym_arg1_t = const char *;
using snd_dlsym_arg2_t = const char *;
struct snd_dlsym
{
  const char* name = "snd_dlsym";
  const std::vector<const char*> args = {"handle", "name", "version"};
  using type = void *(*)(void *, const char *, const char *);
};

}

extern "C" void * snd_dlsym(fns::snd_dlsym_arg0_t handle, fns::snd_dlsym_arg1_t name, fns::snd_dlsym_arg2_t version)
{
  return fns::call<fns::snd_dlsym>(handle, name, version);
}

namespace fns
{

using snd_dlclose_arg0_t = void *;
struct snd_dlclose
{
  const char* name = "snd_dlclose";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(void *);
};

}

extern "C" int snd_dlclose(fns::snd_dlclose_arg0_t handle)
{
  return fns::call<fns::snd_dlclose>(handle);
}

namespace fns
{

using snd_async_add_handler_arg0_t = snd_async_handler_t **;
using snd_async_add_handler_arg1_t = int;
using snd_async_add_handler_arg2_t = snd_async_callback_t;
using snd_async_add_handler_arg3_t = void *;
struct snd_async_add_handler
{
  const char* name = "snd_async_add_handler";
  const std::vector<const char*> args = {"handler", "fd", "callback", "private_data"};
  using type = int(*)(snd_async_handler_t **, int, snd_async_callback_t, void *);
};

}

extern "C" int snd_async_add_handler(fns::snd_async_add_handler_arg0_t handler, fns::snd_async_add_handler_arg1_t fd, fns::snd_async_add_handler_arg2_t callback, fns::snd_async_add_handler_arg3_t private_data)
{
  return fns::call<fns::snd_async_add_handler>(handler, fd, callback, private_data);
}

namespace fns
{

using snd_async_del_handler_arg0_t = snd_async_handler_t *;
struct snd_async_del_handler
{
  const char* name = "snd_async_del_handler";
  const std::vector<const char*> args = {"handler"};
  using type = int(*)(snd_async_handler_t *);
};

}

extern "C" int snd_async_del_handler(fns::snd_async_del_handler_arg0_t handler)
{
  return fns::call<fns::snd_async_del_handler>(handler);
}

namespace fns
{

using snd_async_handler_get_fd_arg0_t = snd_async_handler_t *;
struct snd_async_handler_get_fd
{
  const char* name = "snd_async_handler_get_fd";
  const std::vector<const char*> args = {"handler"};
  using type = int(*)(snd_async_handler_t *);
};

}

extern "C" int snd_async_handler_get_fd(fns::snd_async_handler_get_fd_arg0_t handler)
{
  return fns::call<fns::snd_async_handler_get_fd>(handler);
}

namespace fns
{

using snd_async_handler_get_signo_arg0_t = snd_async_handler_t *;
struct snd_async_handler_get_signo
{
  const char* name = "snd_async_handler_get_signo";
  const std::vector<const char*> args = {"handler"};
  using type = int(*)(snd_async_handler_t *);
};

}

extern "C" int snd_async_handler_get_signo(fns::snd_async_handler_get_signo_arg0_t handler)
{
  return fns::call<fns::snd_async_handler_get_signo>(handler);
}

namespace fns
{

using snd_async_handler_get_callback_private_arg0_t = snd_async_handler_t *;
struct snd_async_handler_get_callback_private
{
  const char* name = "snd_async_handler_get_callback_private";
  const std::vector<const char*> args = {"handler"};
  using type = void *(*)(snd_async_handler_t *);
};

}

extern "C" void * snd_async_handler_get_callback_private(fns::snd_async_handler_get_callback_private_arg0_t handler)
{
  return fns::call<fns::snd_async_handler_get_callback_private>(handler);
}

namespace fns
{

using snd_shm_area_create_arg0_t = int;
using snd_shm_area_create_arg1_t = void *;
struct snd_shm_area_create
{
  const char* name = "snd_shm_area_create";
  const std::vector<const char*> args = {"shmid", "ptr"};
  using type = struct snd_shm_area *(*)(int, void *);
};

}

extern "C" struct snd_shm_area * snd_shm_area_create(fns::snd_shm_area_create_arg0_t shmid, fns::snd_shm_area_create_arg1_t ptr)
{
  return fns::call<fns::snd_shm_area_create>(shmid, ptr);
}

namespace fns
{

using snd_shm_area_share_arg0_t = struct snd_shm_area *;
struct snd_shm_area_share
{
  const char* name = "snd_shm_area_share";
  const std::vector<const char*> args = {"area"};
  using type = struct snd_shm_area *(*)(struct snd_shm_area *);
};

}

extern "C" struct snd_shm_area * snd_shm_area_share(fns::snd_shm_area_share_arg0_t area)
{
  return fns::call<fns::snd_shm_area_share>(area);
}

namespace fns
{

using snd_shm_area_destroy_arg0_t = struct snd_shm_area *;
struct snd_shm_area_destroy
{
  const char* name = "snd_shm_area_destroy";
  const std::vector<const char*> args = {"area"};
  using type = int(*)(struct snd_shm_area *);
};

}

extern "C" int snd_shm_area_destroy(fns::snd_shm_area_destroy_arg0_t area)
{
  return fns::call<fns::snd_shm_area_destroy>(area);
}

namespace fns
{

using snd_user_file_arg0_t = const char *;
using snd_user_file_arg1_t = char **;
struct snd_user_file
{
  const char* name = "snd_user_file";
  const std::vector<const char*> args = {"file", "result"};
  using type = int(*)(const char *, char **);
};

}

extern "C" int snd_user_file(fns::snd_user_file_arg0_t file, fns::snd_user_file_arg1_t result)
{
  return fns::call<fns::snd_user_file>(file, result);
}

namespace fns
{

using snd_input_stdio_open_arg0_t = snd_input_t **;
using snd_input_stdio_open_arg1_t = const char *;
using snd_input_stdio_open_arg2_t = const char *;
struct snd_input_stdio_open
{
  const char* name = "snd_input_stdio_open";
  const std::vector<const char*> args = {"inputp", "file", "mode"};
  using type = int(*)(snd_input_t **, const char *, const char *);
};

}

extern "C" int snd_input_stdio_open(fns::snd_input_stdio_open_arg0_t inputp, fns::snd_input_stdio_open_arg1_t file, fns::snd_input_stdio_open_arg2_t mode)
{
  return fns::call<fns::snd_input_stdio_open>(inputp, file, mode);
}

namespace fns
{

using snd_input_stdio_attach_arg0_t = snd_input_t **;
using snd_input_stdio_attach_arg1_t = FILE *;
using snd_input_stdio_attach_arg2_t = int;
struct snd_input_stdio_attach
{
  const char* name = "snd_input_stdio_attach";
  const std::vector<const char*> args = {"inputp", "fp", "_close"};
  using type = int(*)(snd_input_t **, FILE *, int);
};

}

extern "C" int snd_input_stdio_attach(fns::snd_input_stdio_attach_arg0_t inputp, fns::snd_input_stdio_attach_arg1_t fp, fns::snd_input_stdio_attach_arg2_t _close)
{
  return fns::call<fns::snd_input_stdio_attach>(inputp, fp, _close);
}

namespace fns
{

using snd_input_buffer_open_arg0_t = snd_input_t **;
using snd_input_buffer_open_arg1_t = const char *;
using snd_input_buffer_open_arg2_t = ssize_t;
struct snd_input_buffer_open
{
  const char* name = "snd_input_buffer_open";
  const std::vector<const char*> args = {"inputp", "buffer", "size"};
  using type = int(*)(snd_input_t **, const char *, ssize_t);
};

}

extern "C" int snd_input_buffer_open(fns::snd_input_buffer_open_arg0_t inputp, fns::snd_input_buffer_open_arg1_t buffer, fns::snd_input_buffer_open_arg2_t size)
{
  return fns::call<fns::snd_input_buffer_open>(inputp, buffer, size);
}

namespace fns
{

using snd_input_close_arg0_t = snd_input_t *;
struct snd_input_close
{
  const char* name = "snd_input_close";
  const std::vector<const char*> args = {"input"};
  using type = int(*)(snd_input_t *);
};

}

extern "C" int snd_input_close(fns::snd_input_close_arg0_t input)
{
  return fns::call<fns::snd_input_close>(input);
}

// Skipping snd_input_scanf because it is variadic

namespace fns
{

using snd_input_gets_arg0_t = snd_input_t *;
using snd_input_gets_arg1_t = char *;
using snd_input_gets_arg2_t = size_t;
struct snd_input_gets
{
  const char* name = "snd_input_gets";
  const std::vector<const char*> args = {"input", "str", "size"};
  using type = char *(*)(snd_input_t *, char *, size_t);
};

}

extern "C" char * snd_input_gets(fns::snd_input_gets_arg0_t input, fns::snd_input_gets_arg1_t str, fns::snd_input_gets_arg2_t size)
{
  return fns::call<fns::snd_input_gets>(input, str, size);
}

namespace fns
{

using snd_input_getc_arg0_t = snd_input_t *;
struct snd_input_getc
{
  const char* name = "snd_input_getc";
  const std::vector<const char*> args = {"input"};
  using type = int(*)(snd_input_t *);
};

}

extern "C" int snd_input_getc(fns::snd_input_getc_arg0_t input)
{
  return fns::call<fns::snd_input_getc>(input);
}

namespace fns
{

using snd_input_ungetc_arg0_t = snd_input_t *;
using snd_input_ungetc_arg1_t = int;
struct snd_input_ungetc
{
  const char* name = "snd_input_ungetc";
  const std::vector<const char*> args = {"input", "c"};
  using type = int(*)(snd_input_t *, int);
};

}

extern "C" int snd_input_ungetc(fns::snd_input_ungetc_arg0_t input, fns::snd_input_ungetc_arg1_t c)
{
  return fns::call<fns::snd_input_ungetc>(input, c);
}

namespace fns
{

using snd_output_stdio_open_arg0_t = snd_output_t **;
using snd_output_stdio_open_arg1_t = const char *;
using snd_output_stdio_open_arg2_t = const char *;
struct snd_output_stdio_open
{
  const char* name = "snd_output_stdio_open";
  const std::vector<const char*> args = {"outputp", "file", "mode"};
  using type = int(*)(snd_output_t **, const char *, const char *);
};

}

extern "C" int snd_output_stdio_open(fns::snd_output_stdio_open_arg0_t outputp, fns::snd_output_stdio_open_arg1_t file, fns::snd_output_stdio_open_arg2_t mode)
{
  return fns::call<fns::snd_output_stdio_open>(outputp, file, mode);
}

namespace fns
{

using snd_output_stdio_attach_arg0_t = snd_output_t **;
using snd_output_stdio_attach_arg1_t = FILE *;
using snd_output_stdio_attach_arg2_t = int;
struct snd_output_stdio_attach
{
  const char* name = "snd_output_stdio_attach";
  const std::vector<const char*> args = {"outputp", "fp", "_close"};
  using type = int(*)(snd_output_t **, FILE *, int);
};

}

extern "C" int snd_output_stdio_attach(fns::snd_output_stdio_attach_arg0_t outputp, fns::snd_output_stdio_attach_arg1_t fp, fns::snd_output_stdio_attach_arg2_t _close)
{
  return fns::call<fns::snd_output_stdio_attach>(outputp, fp, _close);
}

namespace fns
{

using snd_output_buffer_open_arg0_t = snd_output_t **;
struct snd_output_buffer_open
{
  const char* name = "snd_output_buffer_open";
  const std::vector<const char*> args = {"outputp"};
  using type = int(*)(snd_output_t **);
};

}

extern "C" int snd_output_buffer_open(fns::snd_output_buffer_open_arg0_t outputp)
{
  return fns::call<fns::snd_output_buffer_open>(outputp);
}

namespace fns
{

using snd_output_buffer_string_arg0_t = snd_output_t *;
using snd_output_buffer_string_arg1_t = char **;
struct snd_output_buffer_string
{
  const char* name = "snd_output_buffer_string";
  const std::vector<const char*> args = {"output", "buf"};
  using type = size_t(*)(snd_output_t *, char **);
};

}

extern "C" size_t snd_output_buffer_string(fns::snd_output_buffer_string_arg0_t output, fns::snd_output_buffer_string_arg1_t buf)
{
  return fns::call<fns::snd_output_buffer_string>(output, buf);
}

namespace fns
{

using snd_output_close_arg0_t = snd_output_t *;
struct snd_output_close
{
  const char* name = "snd_output_close";
  const std::vector<const char*> args = {"output"};
  using type = int(*)(snd_output_t *);
};

}

extern "C" int snd_output_close(fns::snd_output_close_arg0_t output)
{
  return fns::call<fns::snd_output_close>(output);
}

// Skipping snd_output_printf because it is variadic

namespace fns
{

using snd_output_vprintf_arg0_t = snd_output_t *;
using snd_output_vprintf_arg1_t = const char *;
using snd_output_vprintf_arg2_t = va_list;
struct snd_output_vprintf
{
  const char* name = "snd_output_vprintf";
  const std::vector<const char*> args = {"output", "format", "args"};
  using type = int(*)(snd_output_t *, const char *, va_list);
};

}

extern "C" int snd_output_vprintf(fns::snd_output_vprintf_arg0_t output, fns::snd_output_vprintf_arg1_t format, fns::snd_output_vprintf_arg2_t args)
{
  return fns::call<fns::snd_output_vprintf>(output, format, args);
}

namespace fns
{

using snd_output_puts_arg0_t = snd_output_t *;
using snd_output_puts_arg1_t = const char *;
struct snd_output_puts
{
  const char* name = "snd_output_puts";
  const std::vector<const char*> args = {"output", "str"};
  using type = int(*)(snd_output_t *, const char *);
};

}

extern "C" int snd_output_puts(fns::snd_output_puts_arg0_t output, fns::snd_output_puts_arg1_t str)
{
  return fns::call<fns::snd_output_puts>(output, str);
}

namespace fns
{

using snd_output_putc_arg0_t = snd_output_t *;
using snd_output_putc_arg1_t = int;
struct snd_output_putc
{
  const char* name = "snd_output_putc";
  const std::vector<const char*> args = {"output", "c"};
  using type = int(*)(snd_output_t *, int);
};

}

extern "C" int snd_output_putc(fns::snd_output_putc_arg0_t output, fns::snd_output_putc_arg1_t c)
{
  return fns::call<fns::snd_output_putc>(output, c);
}

namespace fns
{

using snd_output_flush_arg0_t = snd_output_t *;
struct snd_output_flush
{
  const char* name = "snd_output_flush";
  const std::vector<const char*> args = {"output"};
  using type = int(*)(snd_output_t *);
};

}

extern "C" int snd_output_flush(fns::snd_output_flush_arg0_t output)
{
  return fns::call<fns::snd_output_flush>(output);
}

namespace fns
{

using snd_strerror_arg0_t = int;
struct snd_strerror
{
  const char* name = "snd_strerror";
  const std::vector<const char*> args = {"errnum"};
  using type = const char *(*)(int);
};

}

extern "C" const char * snd_strerror(fns::snd_strerror_arg0_t errnum)
{
  return fns::call<fns::snd_strerror>(errnum);
}

namespace fns
{

using snd_lib_error_set_handler_arg0_t = snd_lib_error_handler_t;
struct snd_lib_error_set_handler
{
  const char* name = "snd_lib_error_set_handler";
  const std::vector<const char*> args = {"handler"};
  using type = int(*)(snd_lib_error_handler_t);
};

}

extern "C" int snd_lib_error_set_handler(fns::snd_lib_error_set_handler_arg0_t handler)
{
  return fns::call<fns::snd_lib_error_set_handler>(handler);
}

namespace fns
{

using snd_lib_error_set_local_arg0_t = snd_local_error_handler_t;
struct snd_lib_error_set_local
{
  const char* name = "snd_lib_error_set_local";
  const std::vector<const char*> args = {"func"};
  using type = snd_local_error_handler_t(*)(snd_local_error_handler_t);
};

}

 snd_local_error_handler_t snd_lib_error_set_local(fns::snd_lib_error_set_local_arg0_t func)
{
  return fns::call<fns::snd_lib_error_set_local>(func);
}

namespace fns
{

using snd_config_top_arg0_t = snd_config_t **;
struct snd_config_top
{
  const char* name = "snd_config_top";
  const std::vector<const char*> args = {"config"};
  using type = int(*)(snd_config_t **);
};

}

extern "C" int snd_config_top(fns::snd_config_top_arg0_t config)
{
  return fns::call<fns::snd_config_top>(config);
}

namespace fns
{

using snd_config_load_arg0_t = snd_config_t *;
using snd_config_load_arg1_t = snd_input_t *;
struct snd_config_load
{
  const char* name = "snd_config_load";
  const std::vector<const char*> args = {"config", "in"};
  using type = int(*)(snd_config_t *, snd_input_t *);
};

}

extern "C" int snd_config_load(fns::snd_config_load_arg0_t config, fns::snd_config_load_arg1_t in)
{
  return fns::call<fns::snd_config_load>(config, in);
}

namespace fns
{

using snd_config_load_override_arg0_t = snd_config_t *;
using snd_config_load_override_arg1_t = snd_input_t *;
struct snd_config_load_override
{
  const char* name = "snd_config_load_override";
  const std::vector<const char*> args = {"config", "in"};
  using type = int(*)(snd_config_t *, snd_input_t *);
};

}

extern "C" int snd_config_load_override(fns::snd_config_load_override_arg0_t config, fns::snd_config_load_override_arg1_t in)
{
  return fns::call<fns::snd_config_load_override>(config, in);
}

namespace fns
{

using snd_config_save_arg0_t = snd_config_t *;
using snd_config_save_arg1_t = snd_output_t *;
struct snd_config_save
{
  const char* name = "snd_config_save";
  const std::vector<const char*> args = {"config", "out"};
  using type = int(*)(snd_config_t *, snd_output_t *);
};

}

extern "C" int snd_config_save(fns::snd_config_save_arg0_t config, fns::snd_config_save_arg1_t out)
{
  return fns::call<fns::snd_config_save>(config, out);
}

namespace fns
{

struct snd_config_update
{
  const char* name = "snd_config_update";
  const std::vector<const char*> args = {};
  using type = int(*)();
};

}

extern "C" int snd_config_update()
{
  return fns::call<fns::snd_config_update>();
}

namespace fns
{

using snd_config_update_r_arg0_t = snd_config_t **;
using snd_config_update_r_arg1_t = snd_config_update_t **;
using snd_config_update_r_arg2_t = const char *;
struct snd_config_update_r
{
  const char* name = "snd_config_update_r";
  const std::vector<const char*> args = {"top", "update", "path"};
  using type = int(*)(snd_config_t **, snd_config_update_t **, const char *);
};

}

extern "C" int snd_config_update_r(fns::snd_config_update_r_arg0_t top, fns::snd_config_update_r_arg1_t update, fns::snd_config_update_r_arg2_t path)
{
  return fns::call<fns::snd_config_update_r>(top, update, path);
}

namespace fns
{

using snd_config_update_free_arg0_t = snd_config_update_t *;
struct snd_config_update_free
{
  const char* name = "snd_config_update_free";
  const std::vector<const char*> args = {"update"};
  using type = int(*)(snd_config_update_t *);
};

}

extern "C" int snd_config_update_free(fns::snd_config_update_free_arg0_t update)
{
  return fns::call<fns::snd_config_update_free>(update);
}

namespace fns
{

struct snd_config_update_free_global
{
  const char* name = "snd_config_update_free_global";
  const std::vector<const char*> args = {};
  using type = int(*)();
};

}

extern "C" int snd_config_update_free_global()
{
  return fns::call<fns::snd_config_update_free_global>();
}

namespace fns
{

using snd_config_search_arg0_t = snd_config_t *;
using snd_config_search_arg1_t = const char *;
using snd_config_search_arg2_t = snd_config_t **;
struct snd_config_search
{
  const char* name = "snd_config_search";
  const std::vector<const char*> args = {"config", "key", "result"};
  using type = int(*)(snd_config_t *, const char *, snd_config_t **);
};

}

extern "C" int snd_config_search(fns::snd_config_search_arg0_t config, fns::snd_config_search_arg1_t key, fns::snd_config_search_arg2_t result)
{
  return fns::call<fns::snd_config_search>(config, key, result);
}

// Skipping snd_config_searchv because it is variadic

namespace fns
{

using snd_config_search_definition_arg0_t = snd_config_t *;
using snd_config_search_definition_arg1_t = const char *;
using snd_config_search_definition_arg2_t = const char *;
using snd_config_search_definition_arg3_t = snd_config_t **;
struct snd_config_search_definition
{
  const char* name = "snd_config_search_definition";
  const std::vector<const char*> args = {"config", "base", "key", "result"};
  using type = int(*)(snd_config_t *, const char *, const char *, snd_config_t **);
};

}

extern "C" int snd_config_search_definition(fns::snd_config_search_definition_arg0_t config, fns::snd_config_search_definition_arg1_t base, fns::snd_config_search_definition_arg2_t key, fns::snd_config_search_definition_arg3_t result)
{
  return fns::call<fns::snd_config_search_definition>(config, base, key, result);
}

namespace fns
{

using snd_config_expand_arg0_t = snd_config_t *;
using snd_config_expand_arg1_t = snd_config_t *;
using snd_config_expand_arg2_t = const char *;
using snd_config_expand_arg3_t = snd_config_t *;
using snd_config_expand_arg4_t = snd_config_t **;
struct snd_config_expand
{
  const char* name = "snd_config_expand";
  const std::vector<const char*> args = {"config", "root", "args", "private_data", "result"};
  using type = int(*)(snd_config_t *, snd_config_t *, const char *, snd_config_t *, snd_config_t **);
};

}

extern "C" int snd_config_expand(fns::snd_config_expand_arg0_t config, fns::snd_config_expand_arg1_t root, fns::snd_config_expand_arg2_t args, fns::snd_config_expand_arg3_t private_data, fns::snd_config_expand_arg4_t result)
{
  return fns::call<fns::snd_config_expand>(config, root, args, private_data, result);
}

namespace fns
{

using snd_config_evaluate_arg0_t = snd_config_t *;
using snd_config_evaluate_arg1_t = snd_config_t *;
using snd_config_evaluate_arg2_t = snd_config_t *;
using snd_config_evaluate_arg3_t = snd_config_t **;
struct snd_config_evaluate
{
  const char* name = "snd_config_evaluate";
  const std::vector<const char*> args = {"config", "root", "private_data", "result"};
  using type = int(*)(snd_config_t *, snd_config_t *, snd_config_t *, snd_config_t **);
};

}

extern "C" int snd_config_evaluate(fns::snd_config_evaluate_arg0_t config, fns::snd_config_evaluate_arg1_t root, fns::snd_config_evaluate_arg2_t private_data, fns::snd_config_evaluate_arg3_t result)
{
  return fns::call<fns::snd_config_evaluate>(config, root, private_data, result);
}

namespace fns
{

using snd_config_add_arg0_t = snd_config_t *;
using snd_config_add_arg1_t = snd_config_t *;
struct snd_config_add
{
  const char* name = "snd_config_add";
  const std::vector<const char*> args = {"config", "leaf"};
  using type = int(*)(snd_config_t *, snd_config_t *);
};

}

extern "C" int snd_config_add(fns::snd_config_add_arg0_t config, fns::snd_config_add_arg1_t leaf)
{
  return fns::call<fns::snd_config_add>(config, leaf);
}

namespace fns
{

using snd_config_delete_arg0_t = snd_config_t *;
struct snd_config_delete
{
  const char* name = "snd_config_delete";
  const std::vector<const char*> args = {"config"};
  using type = int(*)(snd_config_t *);
};

}

extern "C" int snd_config_delete(fns::snd_config_delete_arg0_t config)
{
  return fns::call<fns::snd_config_delete>(config);
}

namespace fns
{

using snd_config_delete_compound_members_arg0_t = const snd_config_t *;
struct snd_config_delete_compound_members
{
  const char* name = "snd_config_delete_compound_members";
  const std::vector<const char*> args = {"config"};
  using type = int(*)(const snd_config_t *);
};

}

extern "C" int snd_config_delete_compound_members(fns::snd_config_delete_compound_members_arg0_t config)
{
  return fns::call<fns::snd_config_delete_compound_members>(config);
}

namespace fns
{

using snd_config_copy_arg0_t = snd_config_t **;
using snd_config_copy_arg1_t = snd_config_t *;
struct snd_config_copy
{
  const char* name = "snd_config_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = int(*)(snd_config_t **, snd_config_t *);
};

}

extern "C" int snd_config_copy(fns::snd_config_copy_arg0_t dst, fns::snd_config_copy_arg1_t src)
{
  return fns::call<fns::snd_config_copy>(dst, src);
}

namespace fns
{

using snd_config_make_arg0_t = snd_config_t **;
using snd_config_make_arg1_t = const char *;
using snd_config_make_arg2_t = snd_config_type_t;
struct snd_config_make
{
  const char* name = "snd_config_make";
  const std::vector<const char*> args = {"config", "key", "type"};
  using type = int(*)(snd_config_t **, const char *, snd_config_type_t);
};

}

extern "C" int snd_config_make(fns::snd_config_make_arg0_t config, fns::snd_config_make_arg1_t key, fns::snd_config_make_arg2_t type)
{
  return fns::call<fns::snd_config_make>(config, key, type);
}

namespace fns
{

using snd_config_make_integer_arg0_t = snd_config_t **;
using snd_config_make_integer_arg1_t = const char *;
struct snd_config_make_integer
{
  const char* name = "snd_config_make_integer";
  const std::vector<const char*> args = {"config", "key"};
  using type = int(*)(snd_config_t **, const char *);
};

}

extern "C" int snd_config_make_integer(fns::snd_config_make_integer_arg0_t config, fns::snd_config_make_integer_arg1_t key)
{
  return fns::call<fns::snd_config_make_integer>(config, key);
}

namespace fns
{

using snd_config_make_integer64_arg0_t = snd_config_t **;
using snd_config_make_integer64_arg1_t = const char *;
struct snd_config_make_integer64
{
  const char* name = "snd_config_make_integer64";
  const std::vector<const char*> args = {"config", "key"};
  using type = int(*)(snd_config_t **, const char *);
};

}

extern "C" int snd_config_make_integer64(fns::snd_config_make_integer64_arg0_t config, fns::snd_config_make_integer64_arg1_t key)
{
  return fns::call<fns::snd_config_make_integer64>(config, key);
}

namespace fns
{

using snd_config_make_real_arg0_t = snd_config_t **;
using snd_config_make_real_arg1_t = const char *;
struct snd_config_make_real
{
  const char* name = "snd_config_make_real";
  const std::vector<const char*> args = {"config", "key"};
  using type = int(*)(snd_config_t **, const char *);
};

}

extern "C" int snd_config_make_real(fns::snd_config_make_real_arg0_t config, fns::snd_config_make_real_arg1_t key)
{
  return fns::call<fns::snd_config_make_real>(config, key);
}

namespace fns
{

using snd_config_make_string_arg0_t = snd_config_t **;
using snd_config_make_string_arg1_t = const char *;
struct snd_config_make_string
{
  const char* name = "snd_config_make_string";
  const std::vector<const char*> args = {"config", "key"};
  using type = int(*)(snd_config_t **, const char *);
};

}

extern "C" int snd_config_make_string(fns::snd_config_make_string_arg0_t config, fns::snd_config_make_string_arg1_t key)
{
  return fns::call<fns::snd_config_make_string>(config, key);
}

namespace fns
{

using snd_config_make_pointer_arg0_t = snd_config_t **;
using snd_config_make_pointer_arg1_t = const char *;
struct snd_config_make_pointer
{
  const char* name = "snd_config_make_pointer";
  const std::vector<const char*> args = {"config", "key"};
  using type = int(*)(snd_config_t **, const char *);
};

}

extern "C" int snd_config_make_pointer(fns::snd_config_make_pointer_arg0_t config, fns::snd_config_make_pointer_arg1_t key)
{
  return fns::call<fns::snd_config_make_pointer>(config, key);
}

namespace fns
{

using snd_config_make_compound_arg0_t = snd_config_t **;
using snd_config_make_compound_arg1_t = const char *;
using snd_config_make_compound_arg2_t = int;
struct snd_config_make_compound
{
  const char* name = "snd_config_make_compound";
  const std::vector<const char*> args = {"config", "key", "join"};
  using type = int(*)(snd_config_t **, const char *, int);
};

}

extern "C" int snd_config_make_compound(fns::snd_config_make_compound_arg0_t config, fns::snd_config_make_compound_arg1_t key, fns::snd_config_make_compound_arg2_t join)
{
  return fns::call<fns::snd_config_make_compound>(config, key, join);
}

namespace fns
{

using snd_config_imake_integer_arg0_t = snd_config_t **;
using snd_config_imake_integer_arg1_t = const char *;
using snd_config_imake_integer_arg2_t = const long;
struct snd_config_imake_integer
{
  const char* name = "snd_config_imake_integer";
  const std::vector<const char*> args = {"config", "key", "value"};
  using type = int(*)(snd_config_t **, const char *, const long);
};

}

extern "C" int snd_config_imake_integer(fns::snd_config_imake_integer_arg0_t config, fns::snd_config_imake_integer_arg1_t key, fns::snd_config_imake_integer_arg2_t value)
{
  return fns::call<fns::snd_config_imake_integer>(config, key, value);
}

namespace fns
{

using snd_config_imake_integer64_arg0_t = snd_config_t **;
using snd_config_imake_integer64_arg1_t = const char *;
using snd_config_imake_integer64_arg2_t = const long long;
struct snd_config_imake_integer64
{
  const char* name = "snd_config_imake_integer64";
  const std::vector<const char*> args = {"config", "key", "value"};
  using type = int(*)(snd_config_t **, const char *, const long long);
};

}

extern "C" int snd_config_imake_integer64(fns::snd_config_imake_integer64_arg0_t config, fns::snd_config_imake_integer64_arg1_t key, fns::snd_config_imake_integer64_arg2_t value)
{
  return fns::call<fns::snd_config_imake_integer64>(config, key, value);
}

namespace fns
{

using snd_config_imake_real_arg0_t = snd_config_t **;
using snd_config_imake_real_arg1_t = const char *;
using snd_config_imake_real_arg2_t = const double;
struct snd_config_imake_real
{
  const char* name = "snd_config_imake_real";
  const std::vector<const char*> args = {"config", "key", "value"};
  using type = int(*)(snd_config_t **, const char *, const double);
};

}

extern "C" int snd_config_imake_real(fns::snd_config_imake_real_arg0_t config, fns::snd_config_imake_real_arg1_t key, fns::snd_config_imake_real_arg2_t value)
{
  return fns::call<fns::snd_config_imake_real>(config, key, value);
}

namespace fns
{

using snd_config_imake_string_arg0_t = snd_config_t **;
using snd_config_imake_string_arg1_t = const char *;
using snd_config_imake_string_arg2_t = const char *;
struct snd_config_imake_string
{
  const char* name = "snd_config_imake_string";
  const std::vector<const char*> args = {"config", "key", "ascii"};
  using type = int(*)(snd_config_t **, const char *, const char *);
};

}

extern "C" int snd_config_imake_string(fns::snd_config_imake_string_arg0_t config, fns::snd_config_imake_string_arg1_t key, fns::snd_config_imake_string_arg2_t ascii)
{
  return fns::call<fns::snd_config_imake_string>(config, key, ascii);
}

namespace fns
{

using snd_config_imake_safe_string_arg0_t = snd_config_t **;
using snd_config_imake_safe_string_arg1_t = const char *;
using snd_config_imake_safe_string_arg2_t = const char *;
struct snd_config_imake_safe_string
{
  const char* name = "snd_config_imake_safe_string";
  const std::vector<const char*> args = {"config", "key", "ascii"};
  using type = int(*)(snd_config_t **, const char *, const char *);
};

}

extern "C" int snd_config_imake_safe_string(fns::snd_config_imake_safe_string_arg0_t config, fns::snd_config_imake_safe_string_arg1_t key, fns::snd_config_imake_safe_string_arg2_t ascii)
{
  return fns::call<fns::snd_config_imake_safe_string>(config, key, ascii);
}

namespace fns
{

using snd_config_imake_pointer_arg0_t = snd_config_t **;
using snd_config_imake_pointer_arg1_t = const char *;
using snd_config_imake_pointer_arg2_t = const void *;
struct snd_config_imake_pointer
{
  const char* name = "snd_config_imake_pointer";
  const std::vector<const char*> args = {"config", "key", "ptr"};
  using type = int(*)(snd_config_t **, const char *, const void *);
};

}

extern "C" int snd_config_imake_pointer(fns::snd_config_imake_pointer_arg0_t config, fns::snd_config_imake_pointer_arg1_t key, fns::snd_config_imake_pointer_arg2_t ptr)
{
  return fns::call<fns::snd_config_imake_pointer>(config, key, ptr);
}

namespace fns
{

using snd_config_get_type_arg0_t = const snd_config_t *;
struct snd_config_get_type
{
  const char* name = "snd_config_get_type";
  const std::vector<const char*> args = {"config"};
  using type = snd_config_type_t(*)(const snd_config_t *);
};

}

extern "C" snd_config_type_t snd_config_get_type(fns::snd_config_get_type_arg0_t config)
{
  return fns::call<fns::snd_config_get_type>(config);
}

namespace fns
{

using snd_config_set_id_arg0_t = snd_config_t *;
using snd_config_set_id_arg1_t = const char *;
struct snd_config_set_id
{
  const char* name = "snd_config_set_id";
  const std::vector<const char*> args = {"config", "id"};
  using type = int(*)(snd_config_t *, const char *);
};

}

extern "C" int snd_config_set_id(fns::snd_config_set_id_arg0_t config, fns::snd_config_set_id_arg1_t id)
{
  return fns::call<fns::snd_config_set_id>(config, id);
}

namespace fns
{

using snd_config_set_integer_arg0_t = snd_config_t *;
using snd_config_set_integer_arg1_t = long;
struct snd_config_set_integer
{
  const char* name = "snd_config_set_integer";
  const std::vector<const char*> args = {"config", "value"};
  using type = int(*)(snd_config_t *, long);
};

}

extern "C" int snd_config_set_integer(fns::snd_config_set_integer_arg0_t config, fns::snd_config_set_integer_arg1_t value)
{
  return fns::call<fns::snd_config_set_integer>(config, value);
}

namespace fns
{

using snd_config_set_integer64_arg0_t = snd_config_t *;
using snd_config_set_integer64_arg1_t = long long;
struct snd_config_set_integer64
{
  const char* name = "snd_config_set_integer64";
  const std::vector<const char*> args = {"config", "value"};
  using type = int(*)(snd_config_t *, long long);
};

}

extern "C" int snd_config_set_integer64(fns::snd_config_set_integer64_arg0_t config, fns::snd_config_set_integer64_arg1_t value)
{
  return fns::call<fns::snd_config_set_integer64>(config, value);
}

namespace fns
{

using snd_config_set_real_arg0_t = snd_config_t *;
using snd_config_set_real_arg1_t = double;
struct snd_config_set_real
{
  const char* name = "snd_config_set_real";
  const std::vector<const char*> args = {"config", "value"};
  using type = int(*)(snd_config_t *, double);
};

}

extern "C" int snd_config_set_real(fns::snd_config_set_real_arg0_t config, fns::snd_config_set_real_arg1_t value)
{
  return fns::call<fns::snd_config_set_real>(config, value);
}

namespace fns
{

using snd_config_set_string_arg0_t = snd_config_t *;
using snd_config_set_string_arg1_t = const char *;
struct snd_config_set_string
{
  const char* name = "snd_config_set_string";
  const std::vector<const char*> args = {"config", "value"};
  using type = int(*)(snd_config_t *, const char *);
};

}

extern "C" int snd_config_set_string(fns::snd_config_set_string_arg0_t config, fns::snd_config_set_string_arg1_t value)
{
  return fns::call<fns::snd_config_set_string>(config, value);
}

namespace fns
{

using snd_config_set_ascii_arg0_t = snd_config_t *;
using snd_config_set_ascii_arg1_t = const char *;
struct snd_config_set_ascii
{
  const char* name = "snd_config_set_ascii";
  const std::vector<const char*> args = {"config", "ascii"};
  using type = int(*)(snd_config_t *, const char *);
};

}

extern "C" int snd_config_set_ascii(fns::snd_config_set_ascii_arg0_t config, fns::snd_config_set_ascii_arg1_t ascii)
{
  return fns::call<fns::snd_config_set_ascii>(config, ascii);
}

namespace fns
{

using snd_config_set_pointer_arg0_t = snd_config_t *;
using snd_config_set_pointer_arg1_t = const void *;
struct snd_config_set_pointer
{
  const char* name = "snd_config_set_pointer";
  const std::vector<const char*> args = {"config", "ptr"};
  using type = int(*)(snd_config_t *, const void *);
};

}

extern "C" int snd_config_set_pointer(fns::snd_config_set_pointer_arg0_t config, fns::snd_config_set_pointer_arg1_t ptr)
{
  return fns::call<fns::snd_config_set_pointer>(config, ptr);
}

namespace fns
{

using snd_config_get_id_arg0_t = const snd_config_t *;
using snd_config_get_id_arg1_t = const char **;
struct snd_config_get_id
{
  const char* name = "snd_config_get_id";
  const std::vector<const char*> args = {"config", "value"};
  using type = int(*)(const snd_config_t *, const char **);
};

}

extern "C" int snd_config_get_id(fns::snd_config_get_id_arg0_t config, fns::snd_config_get_id_arg1_t value)
{
  return fns::call<fns::snd_config_get_id>(config, value);
}

namespace fns
{

using snd_config_get_integer_arg0_t = const snd_config_t *;
using snd_config_get_integer_arg1_t = long *;
struct snd_config_get_integer
{
  const char* name = "snd_config_get_integer";
  const std::vector<const char*> args = {"config", "value"};
  using type = int(*)(const snd_config_t *, long *);
};

}

extern "C" int snd_config_get_integer(fns::snd_config_get_integer_arg0_t config, fns::snd_config_get_integer_arg1_t value)
{
  return fns::call<fns::snd_config_get_integer>(config, value);
}

namespace fns
{

using snd_config_get_integer64_arg0_t = const snd_config_t *;
using snd_config_get_integer64_arg1_t = long long *;
struct snd_config_get_integer64
{
  const char* name = "snd_config_get_integer64";
  const std::vector<const char*> args = {"config", "value"};
  using type = int(*)(const snd_config_t *, long long *);
};

}

extern "C" int snd_config_get_integer64(fns::snd_config_get_integer64_arg0_t config, fns::snd_config_get_integer64_arg1_t value)
{
  return fns::call<fns::snd_config_get_integer64>(config, value);
}

namespace fns
{

using snd_config_get_real_arg0_t = const snd_config_t *;
using snd_config_get_real_arg1_t = double *;
struct snd_config_get_real
{
  const char* name = "snd_config_get_real";
  const std::vector<const char*> args = {"config", "value"};
  using type = int(*)(const snd_config_t *, double *);
};

}

extern "C" int snd_config_get_real(fns::snd_config_get_real_arg0_t config, fns::snd_config_get_real_arg1_t value)
{
  return fns::call<fns::snd_config_get_real>(config, value);
}

namespace fns
{

using snd_config_get_ireal_arg0_t = const snd_config_t *;
using snd_config_get_ireal_arg1_t = double *;
struct snd_config_get_ireal
{
  const char* name = "snd_config_get_ireal";
  const std::vector<const char*> args = {"config", "value"};
  using type = int(*)(const snd_config_t *, double *);
};

}

extern "C" int snd_config_get_ireal(fns::snd_config_get_ireal_arg0_t config, fns::snd_config_get_ireal_arg1_t value)
{
  return fns::call<fns::snd_config_get_ireal>(config, value);
}

namespace fns
{

using snd_config_get_string_arg0_t = const snd_config_t *;
using snd_config_get_string_arg1_t = const char **;
struct snd_config_get_string
{
  const char* name = "snd_config_get_string";
  const std::vector<const char*> args = {"config", "value"};
  using type = int(*)(const snd_config_t *, const char **);
};

}

extern "C" int snd_config_get_string(fns::snd_config_get_string_arg0_t config, fns::snd_config_get_string_arg1_t value)
{
  return fns::call<fns::snd_config_get_string>(config, value);
}

namespace fns
{

using snd_config_get_ascii_arg0_t = const snd_config_t *;
using snd_config_get_ascii_arg1_t = char **;
struct snd_config_get_ascii
{
  const char* name = "snd_config_get_ascii";
  const std::vector<const char*> args = {"config", "value"};
  using type = int(*)(const snd_config_t *, char **);
};

}

extern "C" int snd_config_get_ascii(fns::snd_config_get_ascii_arg0_t config, fns::snd_config_get_ascii_arg1_t value)
{
  return fns::call<fns::snd_config_get_ascii>(config, value);
}

namespace fns
{

using snd_config_get_pointer_arg0_t = const snd_config_t *;
using snd_config_get_pointer_arg1_t = const void **;
struct snd_config_get_pointer
{
  const char* name = "snd_config_get_pointer";
  const std::vector<const char*> args = {"config", "value"};
  using type = int(*)(const snd_config_t *, const void **);
};

}

extern "C" int snd_config_get_pointer(fns::snd_config_get_pointer_arg0_t config, fns::snd_config_get_pointer_arg1_t value)
{
  return fns::call<fns::snd_config_get_pointer>(config, value);
}

namespace fns
{

using snd_config_test_id_arg0_t = const snd_config_t *;
using snd_config_test_id_arg1_t = const char *;
struct snd_config_test_id
{
  const char* name = "snd_config_test_id";
  const std::vector<const char*> args = {"config", "id"};
  using type = int(*)(const snd_config_t *, const char *);
};

}

extern "C" int snd_config_test_id(fns::snd_config_test_id_arg0_t config, fns::snd_config_test_id_arg1_t id)
{
  return fns::call<fns::snd_config_test_id>(config, id);
}

namespace fns
{

using snd_config_iterator_first_arg0_t = const snd_config_t *;
struct snd_config_iterator_first
{
  const char* name = "snd_config_iterator_first";
  const std::vector<const char*> args = {"node"};
  using type = snd_config_iterator_t(*)(const snd_config_t *);
};

}

extern "C" snd_config_iterator_t snd_config_iterator_first(fns::snd_config_iterator_first_arg0_t node)
{
  return fns::call<fns::snd_config_iterator_first>(node);
}

namespace fns
{

using snd_config_iterator_next_arg0_t = const snd_config_iterator_t;
struct snd_config_iterator_next
{
  const char* name = "snd_config_iterator_next";
  const std::vector<const char*> args = {"iterator"};
  using type = snd_config_iterator_t(*)(const snd_config_iterator_t);
};

}

extern "C" snd_config_iterator_t snd_config_iterator_next(fns::snd_config_iterator_next_arg0_t iterator)
{
  return fns::call<fns::snd_config_iterator_next>(iterator);
}

namespace fns
{

using snd_config_iterator_end_arg0_t = const snd_config_t *;
struct snd_config_iterator_end
{
  const char* name = "snd_config_iterator_end";
  const std::vector<const char*> args = {"node"};
  using type = snd_config_iterator_t(*)(const snd_config_t *);
};

}

extern "C" snd_config_iterator_t snd_config_iterator_end(fns::snd_config_iterator_end_arg0_t node)
{
  return fns::call<fns::snd_config_iterator_end>(node);
}

namespace fns
{

using snd_config_iterator_entry_arg0_t = const snd_config_iterator_t;
struct snd_config_iterator_entry
{
  const char* name = "snd_config_iterator_entry";
  const std::vector<const char*> args = {"iterator"};
  using type = snd_config_t *(*)(const snd_config_iterator_t);
};

}

extern "C" snd_config_t * snd_config_iterator_entry(fns::snd_config_iterator_entry_arg0_t iterator)
{
  return fns::call<fns::snd_config_iterator_entry>(iterator);
}

namespace fns
{

using snd_config_get_bool_ascii_arg0_t = const char *;
struct snd_config_get_bool_ascii
{
  const char* name = "snd_config_get_bool_ascii";
  const std::vector<const char*> args = {"ascii"};
  using type = int(*)(const char *);
};

}

extern "C" int snd_config_get_bool_ascii(fns::snd_config_get_bool_ascii_arg0_t ascii)
{
  return fns::call<fns::snd_config_get_bool_ascii>(ascii);
}

namespace fns
{

using snd_config_get_bool_arg0_t = const snd_config_t *;
struct snd_config_get_bool
{
  const char* name = "snd_config_get_bool";
  const std::vector<const char*> args = {"conf"};
  using type = int(*)(const snd_config_t *);
};

}

extern "C" int snd_config_get_bool(fns::snd_config_get_bool_arg0_t conf)
{
  return fns::call<fns::snd_config_get_bool>(conf);
}

namespace fns
{

using snd_config_get_ctl_iface_ascii_arg0_t = const char *;
struct snd_config_get_ctl_iface_ascii
{
  const char* name = "snd_config_get_ctl_iface_ascii";
  const std::vector<const char*> args = {"ascii"};
  using type = int(*)(const char *);
};

}

extern "C" int snd_config_get_ctl_iface_ascii(fns::snd_config_get_ctl_iface_ascii_arg0_t ascii)
{
  return fns::call<fns::snd_config_get_ctl_iface_ascii>(ascii);
}

namespace fns
{

using snd_config_get_ctl_iface_arg0_t = const snd_config_t *;
struct snd_config_get_ctl_iface
{
  const char* name = "snd_config_get_ctl_iface";
  const std::vector<const char*> args = {"conf"};
  using type = int(*)(const snd_config_t *);
};

}

extern "C" int snd_config_get_ctl_iface(fns::snd_config_get_ctl_iface_arg0_t conf)
{
  return fns::call<fns::snd_config_get_ctl_iface>(conf);
}

namespace fns
{

using snd_names_list_arg0_t = const char *;
using snd_names_list_arg1_t = snd_devname_t **;
struct snd_names_list
{
  const char* name = "snd_names_list";
  const std::vector<const char*> args = {"iface", "list"};
  using type = int(*)(const char *, snd_devname_t **);
};

}

extern "C" int snd_names_list(fns::snd_names_list_arg0_t iface, fns::snd_names_list_arg1_t list)
{
  return fns::call<fns::snd_names_list>(iface, list);
}

namespace fns
{

using snd_names_list_free_arg0_t = snd_devname_t *;
struct snd_names_list_free
{
  const char* name = "snd_names_list_free";
  const std::vector<const char*> args = {"list"};
  using type = void(*)(snd_devname_t *);
};

}

extern "C" void snd_names_list_free(fns::snd_names_list_free_arg0_t list)
{
  return fns::call_void<fns::snd_names_list_free>(list);
}

namespace fns
{

using snd_pcm_open_arg0_t = snd_pcm_t **;
using snd_pcm_open_arg1_t = const char *;
using snd_pcm_open_arg2_t = snd_pcm_stream_t;
using snd_pcm_open_arg3_t = int;
struct snd_pcm_open
{
  const char* name = "snd_pcm_open";
  const std::vector<const char*> args = {"pcm", "name", "stream", "mode"};
  using type = int(*)(snd_pcm_t **, const char *, snd_pcm_stream_t, int);
};

}

extern "C" int snd_pcm_open(fns::snd_pcm_open_arg0_t pcm, fns::snd_pcm_open_arg1_t name, fns::snd_pcm_open_arg2_t stream, fns::snd_pcm_open_arg3_t mode)
{
  return fns::call<fns::snd_pcm_open>(pcm, name, stream, mode);
}

namespace fns
{

using snd_pcm_open_lconf_arg0_t = snd_pcm_t **;
using snd_pcm_open_lconf_arg1_t = const char *;
using snd_pcm_open_lconf_arg2_t = snd_pcm_stream_t;
using snd_pcm_open_lconf_arg3_t = int;
using snd_pcm_open_lconf_arg4_t = snd_config_t *;
struct snd_pcm_open_lconf
{
  const char* name = "snd_pcm_open_lconf";
  const std::vector<const char*> args = {"pcm", "name", "stream", "mode", "lconf"};
  using type = int(*)(snd_pcm_t **, const char *, snd_pcm_stream_t, int, snd_config_t *);
};

}

extern "C" int snd_pcm_open_lconf(fns::snd_pcm_open_lconf_arg0_t pcm, fns::snd_pcm_open_lconf_arg1_t name, fns::snd_pcm_open_lconf_arg2_t stream, fns::snd_pcm_open_lconf_arg3_t mode, fns::snd_pcm_open_lconf_arg4_t lconf)
{
  return fns::call<fns::snd_pcm_open_lconf>(pcm, name, stream, mode, lconf);
}

namespace fns
{

using snd_pcm_open_fallback_arg0_t = snd_pcm_t **;
using snd_pcm_open_fallback_arg1_t = snd_config_t *;
using snd_pcm_open_fallback_arg2_t = const char *;
using snd_pcm_open_fallback_arg3_t = const char *;
using snd_pcm_open_fallback_arg4_t = snd_pcm_stream_t;
using snd_pcm_open_fallback_arg5_t = int;
struct snd_pcm_open_fallback
{
  const char* name = "snd_pcm_open_fallback";
  const std::vector<const char*> args = {"pcm", "root", "name", "orig_name", "stream", "mode"};
  using type = int(*)(snd_pcm_t **, snd_config_t *, const char *, const char *, snd_pcm_stream_t, int);
};

}

extern "C" int snd_pcm_open_fallback(fns::snd_pcm_open_fallback_arg0_t pcm, fns::snd_pcm_open_fallback_arg1_t root, fns::snd_pcm_open_fallback_arg2_t name, fns::snd_pcm_open_fallback_arg3_t orig_name, fns::snd_pcm_open_fallback_arg4_t stream, fns::snd_pcm_open_fallback_arg5_t mode)
{
  return fns::call<fns::snd_pcm_open_fallback>(pcm, root, name, orig_name, stream, mode);
}

namespace fns
{

using snd_pcm_close_arg0_t = snd_pcm_t *;
struct snd_pcm_close
{
  const char* name = "snd_pcm_close";
  const std::vector<const char*> args = {"pcm"};
  using type = int(*)(snd_pcm_t *);
};

}

extern "C" int snd_pcm_close(fns::snd_pcm_close_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_close>(pcm);
}

namespace fns
{

using snd_pcm_name_arg0_t = snd_pcm_t *;
struct snd_pcm_name
{
  const char* name = "snd_pcm_name";
  const std::vector<const char*> args = {"pcm"};
  using type = const char *(*)(snd_pcm_t *);
};

}

extern "C" const char * snd_pcm_name(fns::snd_pcm_name_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_name>(pcm);
}

namespace fns
{

using snd_pcm_type_arg0_t = snd_pcm_t *;
struct snd_pcm_type
{
  const char* name = "snd_pcm_type";
  const std::vector<const char*> args = {"pcm"};
  using type = snd_pcm_type_t(*)(snd_pcm_t *);
};

}

extern "C" snd_pcm_type_t snd_pcm_type(fns::snd_pcm_type_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_type>(pcm);
}

namespace fns
{

using snd_pcm_stream_arg0_t = snd_pcm_t *;
struct snd_pcm_stream
{
  const char* name = "snd_pcm_stream";
  const std::vector<const char*> args = {"pcm"};
  using type = snd_pcm_stream_t(*)(snd_pcm_t *);
};

}

extern "C" snd_pcm_stream_t snd_pcm_stream(fns::snd_pcm_stream_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_stream>(pcm);
}

namespace fns
{

using snd_pcm_poll_descriptors_count_arg0_t = snd_pcm_t *;
struct snd_pcm_poll_descriptors_count
{
  const char* name = "snd_pcm_poll_descriptors_count";
  const std::vector<const char*> args = {"pcm"};
  using type = int(*)(snd_pcm_t *);
};

}

extern "C" int snd_pcm_poll_descriptors_count(fns::snd_pcm_poll_descriptors_count_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_poll_descriptors_count>(pcm);
}

namespace fns
{

using snd_pcm_poll_descriptors_arg0_t = snd_pcm_t *;
using snd_pcm_poll_descriptors_arg1_t = struct pollfd *;
using snd_pcm_poll_descriptors_arg2_t = unsigned int;
struct snd_pcm_poll_descriptors
{
  const char* name = "snd_pcm_poll_descriptors";
  const std::vector<const char*> args = {"pcm", "pfds", "space"};
  using type = int(*)(snd_pcm_t *, struct pollfd *, unsigned int);
};

}

extern "C" int snd_pcm_poll_descriptors(fns::snd_pcm_poll_descriptors_arg0_t pcm, fns::snd_pcm_poll_descriptors_arg1_t pfds, fns::snd_pcm_poll_descriptors_arg2_t space)
{
  return fns::call<fns::snd_pcm_poll_descriptors>(pcm, pfds, space);
}

namespace fns
{

using snd_pcm_poll_descriptors_revents_arg0_t = snd_pcm_t *;
using snd_pcm_poll_descriptors_revents_arg1_t = struct pollfd *;
using snd_pcm_poll_descriptors_revents_arg2_t = unsigned int;
using snd_pcm_poll_descriptors_revents_arg3_t = unsigned short *;
struct snd_pcm_poll_descriptors_revents
{
  const char* name = "snd_pcm_poll_descriptors_revents";
  const std::vector<const char*> args = {"pcm", "pfds", "nfds", "revents"};
  using type = int(*)(snd_pcm_t *, struct pollfd *, unsigned int, unsigned short *);
};

}

extern "C" int snd_pcm_poll_descriptors_revents(fns::snd_pcm_poll_descriptors_revents_arg0_t pcm, fns::snd_pcm_poll_descriptors_revents_arg1_t pfds, fns::snd_pcm_poll_descriptors_revents_arg2_t nfds, fns::snd_pcm_poll_descriptors_revents_arg3_t revents)
{
  return fns::call<fns::snd_pcm_poll_descriptors_revents>(pcm, pfds, nfds, revents);
}

namespace fns
{

using snd_pcm_nonblock_arg0_t = snd_pcm_t *;
using snd_pcm_nonblock_arg1_t = int;
struct snd_pcm_nonblock
{
  const char* name = "snd_pcm_nonblock";
  const std::vector<const char*> args = {"pcm", "nonblock"};
  using type = int(*)(snd_pcm_t *, int);
};

}

extern "C" int snd_pcm_nonblock(fns::snd_pcm_nonblock_arg0_t pcm, fns::snd_pcm_nonblock_arg1_t nonblock)
{
  return fns::call<fns::snd_pcm_nonblock>(pcm, nonblock);
}

// Skipping snd_pcm_abort because it is defined

namespace fns
{

using snd_async_add_pcm_handler_arg0_t = snd_async_handler_t **;
using snd_async_add_pcm_handler_arg1_t = snd_pcm_t *;
using snd_async_add_pcm_handler_arg2_t = snd_async_callback_t;
using snd_async_add_pcm_handler_arg3_t = void *;
struct snd_async_add_pcm_handler
{
  const char* name = "snd_async_add_pcm_handler";
  const std::vector<const char*> args = {"handler", "pcm", "callback", "private_data"};
  using type = int(*)(snd_async_handler_t **, snd_pcm_t *, snd_async_callback_t, void *);
};

}

extern "C" int snd_async_add_pcm_handler(fns::snd_async_add_pcm_handler_arg0_t handler, fns::snd_async_add_pcm_handler_arg1_t pcm, fns::snd_async_add_pcm_handler_arg2_t callback, fns::snd_async_add_pcm_handler_arg3_t private_data)
{
  return fns::call<fns::snd_async_add_pcm_handler>(handler, pcm, callback, private_data);
}

namespace fns
{

using snd_async_handler_get_pcm_arg0_t = snd_async_handler_t *;
struct snd_async_handler_get_pcm
{
  const char* name = "snd_async_handler_get_pcm";
  const std::vector<const char*> args = {"handler"};
  using type = snd_pcm_t *(*)(snd_async_handler_t *);
};

}

extern "C" snd_pcm_t * snd_async_handler_get_pcm(fns::snd_async_handler_get_pcm_arg0_t handler)
{
  return fns::call<fns::snd_async_handler_get_pcm>(handler);
}

namespace fns
{

using snd_pcm_info_arg0_t = snd_pcm_t *;
using snd_pcm_info_arg1_t = snd_pcm_info_t *;
struct snd_pcm_info
{
  const char* name = "snd_pcm_info";
  const std::vector<const char*> args = {"pcm", "info"};
  using type = int(*)(snd_pcm_t *, snd_pcm_info_t *);
};

}

extern "C" int snd_pcm_info(fns::snd_pcm_info_arg0_t pcm, fns::snd_pcm_info_arg1_t info)
{
  return fns::call<fns::snd_pcm_info>(pcm, info);
}

namespace fns
{

using snd_pcm_hw_params_current_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_current_arg1_t = snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_current
{
  const char* name = "snd_pcm_hw_params_current";
  const std::vector<const char*> args = {"pcm", "params"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_current(fns::snd_pcm_hw_params_current_arg0_t pcm, fns::snd_pcm_hw_params_current_arg1_t params)
{
  return fns::call<fns::snd_pcm_hw_params_current>(pcm, params);
}

namespace fns
{

using snd_pcm_hw_params_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_arg1_t = snd_pcm_hw_params_t *;
struct snd_pcm_hw_params
{
  const char* name = "snd_pcm_hw_params";
  const std::vector<const char*> args = {"pcm", "params"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params(fns::snd_pcm_hw_params_arg0_t pcm, fns::snd_pcm_hw_params_arg1_t params)
{
  return fns::call<fns::snd_pcm_hw_params>(pcm, params);
}

namespace fns
{

using snd_pcm_hw_free_arg0_t = snd_pcm_t *;
struct snd_pcm_hw_free
{
  const char* name = "snd_pcm_hw_free";
  const std::vector<const char*> args = {"pcm"};
  using type = int(*)(snd_pcm_t *);
};

}

extern "C" int snd_pcm_hw_free(fns::snd_pcm_hw_free_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_hw_free>(pcm);
}

namespace fns
{

using snd_pcm_sw_params_current_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_current_arg1_t = snd_pcm_sw_params_t *;
struct snd_pcm_sw_params_current
{
  const char* name = "snd_pcm_sw_params_current";
  const std::vector<const char*> args = {"pcm", "params"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *);
};

}

extern "C" int snd_pcm_sw_params_current(fns::snd_pcm_sw_params_current_arg0_t pcm, fns::snd_pcm_sw_params_current_arg1_t params)
{
  return fns::call<fns::snd_pcm_sw_params_current>(pcm, params);
}

namespace fns
{

using snd_pcm_sw_params_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_arg1_t = snd_pcm_sw_params_t *;
struct snd_pcm_sw_params
{
  const char* name = "snd_pcm_sw_params";
  const std::vector<const char*> args = {"pcm", "params"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *);
};

}

extern "C" int snd_pcm_sw_params(fns::snd_pcm_sw_params_arg0_t pcm, fns::snd_pcm_sw_params_arg1_t params)
{
  return fns::call<fns::snd_pcm_sw_params>(pcm, params);
}

namespace fns
{

using snd_pcm_prepare_arg0_t = snd_pcm_t *;
struct snd_pcm_prepare
{
  const char* name = "snd_pcm_prepare";
  const std::vector<const char*> args = {"pcm"};
  using type = int(*)(snd_pcm_t *);
};

}

extern "C" int snd_pcm_prepare(fns::snd_pcm_prepare_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_prepare>(pcm);
}

namespace fns
{

using snd_pcm_reset_arg0_t = snd_pcm_t *;
struct snd_pcm_reset
{
  const char* name = "snd_pcm_reset";
  const std::vector<const char*> args = {"pcm"};
  using type = int(*)(snd_pcm_t *);
};

}

extern "C" int snd_pcm_reset(fns::snd_pcm_reset_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_reset>(pcm);
}

namespace fns
{

using snd_pcm_status_arg0_t = snd_pcm_t *;
using snd_pcm_status_arg1_t = snd_pcm_status_t *;
struct snd_pcm_status
{
  const char* name = "snd_pcm_status";
  const std::vector<const char*> args = {"pcm", "status"};
  using type = int(*)(snd_pcm_t *, snd_pcm_status_t *);
};

}

extern "C" int snd_pcm_status(fns::snd_pcm_status_arg0_t pcm, fns::snd_pcm_status_arg1_t status)
{
  return fns::call<fns::snd_pcm_status>(pcm, status);
}

namespace fns
{

using snd_pcm_start_arg0_t = snd_pcm_t *;
struct snd_pcm_start
{
  const char* name = "snd_pcm_start";
  const std::vector<const char*> args = {"pcm"};
  using type = int(*)(snd_pcm_t *);
};

}

extern "C" int snd_pcm_start(fns::snd_pcm_start_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_start>(pcm);
}

namespace fns
{

using snd_pcm_drop_arg0_t = snd_pcm_t *;
struct snd_pcm_drop
{
  const char* name = "snd_pcm_drop";
  const std::vector<const char*> args = {"pcm"};
  using type = int(*)(snd_pcm_t *);
};

}

extern "C" int snd_pcm_drop(fns::snd_pcm_drop_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_drop>(pcm);
}

namespace fns
{

using snd_pcm_drain_arg0_t = snd_pcm_t *;
struct snd_pcm_drain
{
  const char* name = "snd_pcm_drain";
  const std::vector<const char*> args = {"pcm"};
  using type = int(*)(snd_pcm_t *);
};

}

extern "C" int snd_pcm_drain(fns::snd_pcm_drain_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_drain>(pcm);
}

namespace fns
{

using snd_pcm_pause_arg0_t = snd_pcm_t *;
using snd_pcm_pause_arg1_t = int;
struct snd_pcm_pause
{
  const char* name = "snd_pcm_pause";
  const std::vector<const char*> args = {"pcm", "enable"};
  using type = int(*)(snd_pcm_t *, int);
};

}

extern "C" int snd_pcm_pause(fns::snd_pcm_pause_arg0_t pcm, fns::snd_pcm_pause_arg1_t enable)
{
  return fns::call<fns::snd_pcm_pause>(pcm, enable);
}

namespace fns
{

using snd_pcm_state_arg0_t = snd_pcm_t *;
struct snd_pcm_state
{
  const char* name = "snd_pcm_state";
  const std::vector<const char*> args = {"pcm"};
  using type = snd_pcm_state_t(*)(snd_pcm_t *);
};

}

extern "C" snd_pcm_state_t snd_pcm_state(fns::snd_pcm_state_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_state>(pcm);
}

namespace fns
{

using snd_pcm_hwsync_arg0_t = snd_pcm_t *;
struct snd_pcm_hwsync
{
  const char* name = "snd_pcm_hwsync";
  const std::vector<const char*> args = {"pcm"};
  using type = int(*)(snd_pcm_t *);
};

}

extern "C" int snd_pcm_hwsync(fns::snd_pcm_hwsync_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_hwsync>(pcm);
}

namespace fns
{

using snd_pcm_delay_arg0_t = snd_pcm_t *;
using snd_pcm_delay_arg1_t = snd_pcm_sframes_t *;
struct snd_pcm_delay
{
  const char* name = "snd_pcm_delay";
  const std::vector<const char*> args = {"pcm", "delayp"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sframes_t *);
};

}

extern "C" int snd_pcm_delay(fns::snd_pcm_delay_arg0_t pcm, fns::snd_pcm_delay_arg1_t delayp)
{
  return fns::call<fns::snd_pcm_delay>(pcm, delayp);
}

namespace fns
{

using snd_pcm_resume_arg0_t = snd_pcm_t *;
struct snd_pcm_resume
{
  const char* name = "snd_pcm_resume";
  const std::vector<const char*> args = {"pcm"};
  using type = int(*)(snd_pcm_t *);
};

}

extern "C" int snd_pcm_resume(fns::snd_pcm_resume_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_resume>(pcm);
}

namespace fns
{

using snd_pcm_htimestamp_arg0_t = snd_pcm_t *;
using snd_pcm_htimestamp_arg1_t = snd_pcm_uframes_t *;
using snd_pcm_htimestamp_arg2_t = snd_htimestamp_t *;
struct snd_pcm_htimestamp
{
  const char* name = "snd_pcm_htimestamp";
  const std::vector<const char*> args = {"pcm", "avail", "tstamp"};
  using type = int(*)(snd_pcm_t *, snd_pcm_uframes_t *, snd_htimestamp_t *);
};

}

extern "C" int snd_pcm_htimestamp(fns::snd_pcm_htimestamp_arg0_t pcm, fns::snd_pcm_htimestamp_arg1_t avail, fns::snd_pcm_htimestamp_arg2_t tstamp)
{
  return fns::call<fns::snd_pcm_htimestamp>(pcm, avail, tstamp);
}

namespace fns
{

using snd_pcm_avail_arg0_t = snd_pcm_t *;
struct snd_pcm_avail
{
  const char* name = "snd_pcm_avail";
  const std::vector<const char*> args = {"pcm"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_avail(fns::snd_pcm_avail_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_avail>(pcm);
}

namespace fns
{

using snd_pcm_avail_update_arg0_t = snd_pcm_t *;
struct snd_pcm_avail_update
{
  const char* name = "snd_pcm_avail_update";
  const std::vector<const char*> args = {"pcm"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_avail_update(fns::snd_pcm_avail_update_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_avail_update>(pcm);
}

namespace fns
{

using snd_pcm_avail_delay_arg0_t = snd_pcm_t *;
using snd_pcm_avail_delay_arg1_t = snd_pcm_sframes_t *;
using snd_pcm_avail_delay_arg2_t = snd_pcm_sframes_t *;
struct snd_pcm_avail_delay
{
  const char* name = "snd_pcm_avail_delay";
  const std::vector<const char*> args = {"pcm", "availp", "delayp"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sframes_t *, snd_pcm_sframes_t *);
};

}

extern "C" int snd_pcm_avail_delay(fns::snd_pcm_avail_delay_arg0_t pcm, fns::snd_pcm_avail_delay_arg1_t availp, fns::snd_pcm_avail_delay_arg2_t delayp)
{
  return fns::call<fns::snd_pcm_avail_delay>(pcm, availp, delayp);
}

namespace fns
{

using snd_pcm_rewindable_arg0_t = snd_pcm_t *;
struct snd_pcm_rewindable
{
  const char* name = "snd_pcm_rewindable";
  const std::vector<const char*> args = {"pcm"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_rewindable(fns::snd_pcm_rewindable_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_rewindable>(pcm);
}

namespace fns
{

using snd_pcm_rewind_arg0_t = snd_pcm_t *;
using snd_pcm_rewind_arg1_t = snd_pcm_uframes_t;
struct snd_pcm_rewind
{
  const char* name = "snd_pcm_rewind";
  const std::vector<const char*> args = {"pcm", "frames"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *, snd_pcm_uframes_t);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_rewind(fns::snd_pcm_rewind_arg0_t pcm, fns::snd_pcm_rewind_arg1_t frames)
{
  return fns::call<fns::snd_pcm_rewind>(pcm, frames);
}

namespace fns
{

using snd_pcm_forwardable_arg0_t = snd_pcm_t *;
struct snd_pcm_forwardable
{
  const char* name = "snd_pcm_forwardable";
  const std::vector<const char*> args = {"pcm"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_forwardable(fns::snd_pcm_forwardable_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_forwardable>(pcm);
}

namespace fns
{

using snd_pcm_forward_arg0_t = snd_pcm_t *;
using snd_pcm_forward_arg1_t = snd_pcm_uframes_t;
struct snd_pcm_forward
{
  const char* name = "snd_pcm_forward";
  const std::vector<const char*> args = {"pcm", "frames"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *, snd_pcm_uframes_t);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_forward(fns::snd_pcm_forward_arg0_t pcm, fns::snd_pcm_forward_arg1_t frames)
{
  return fns::call<fns::snd_pcm_forward>(pcm, frames);
}

namespace fns
{

using snd_pcm_writei_arg0_t = snd_pcm_t *;
using snd_pcm_writei_arg1_t = const void *;
using snd_pcm_writei_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_writei
{
  const char* name = "snd_pcm_writei";
  const std::vector<const char*> args = {"pcm", "buffer", "size"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *, const void *, snd_pcm_uframes_t);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_writei(fns::snd_pcm_writei_arg0_t pcm, fns::snd_pcm_writei_arg1_t buffer, fns::snd_pcm_writei_arg2_t size)
{
  return fns::call<fns::snd_pcm_writei>(pcm, buffer, size);
}

namespace fns
{

using snd_pcm_readi_arg0_t = snd_pcm_t *;
using snd_pcm_readi_arg1_t = void *;
using snd_pcm_readi_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_readi
{
  const char* name = "snd_pcm_readi";
  const std::vector<const char*> args = {"pcm", "buffer", "size"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *, void *, snd_pcm_uframes_t);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_readi(fns::snd_pcm_readi_arg0_t pcm, fns::snd_pcm_readi_arg1_t buffer, fns::snd_pcm_readi_arg2_t size)
{
  return fns::call<fns::snd_pcm_readi>(pcm, buffer, size);
}

namespace fns
{

using snd_pcm_writen_arg0_t = snd_pcm_t *;
using snd_pcm_writen_arg1_t = void **;
using snd_pcm_writen_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_writen
{
  const char* name = "snd_pcm_writen";
  const std::vector<const char*> args = {"pcm", "bufs", "size"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *, void **, snd_pcm_uframes_t);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_writen(fns::snd_pcm_writen_arg0_t pcm, fns::snd_pcm_writen_arg1_t bufs, fns::snd_pcm_writen_arg2_t size)
{
  return fns::call<fns::snd_pcm_writen>(pcm, bufs, size);
}

namespace fns
{

using snd_pcm_readn_arg0_t = snd_pcm_t *;
using snd_pcm_readn_arg1_t = void **;
using snd_pcm_readn_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_readn
{
  const char* name = "snd_pcm_readn";
  const std::vector<const char*> args = {"pcm", "bufs", "size"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *, void **, snd_pcm_uframes_t);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_readn(fns::snd_pcm_readn_arg0_t pcm, fns::snd_pcm_readn_arg1_t bufs, fns::snd_pcm_readn_arg2_t size)
{
  return fns::call<fns::snd_pcm_readn>(pcm, bufs, size);
}

namespace fns
{

using snd_pcm_wait_arg0_t = snd_pcm_t *;
using snd_pcm_wait_arg1_t = int;
struct snd_pcm_wait
{
  const char* name = "snd_pcm_wait";
  const std::vector<const char*> args = {"pcm", "timeout"};
  using type = int(*)(snd_pcm_t *, int);
};

}

extern "C" int snd_pcm_wait(fns::snd_pcm_wait_arg0_t pcm, fns::snd_pcm_wait_arg1_t timeout)
{
  return fns::call<fns::snd_pcm_wait>(pcm, timeout);
}

namespace fns
{

using snd_pcm_link_arg0_t = snd_pcm_t *;
using snd_pcm_link_arg1_t = snd_pcm_t *;
struct snd_pcm_link
{
  const char* name = "snd_pcm_link";
  const std::vector<const char*> args = {"pcm1", "pcm2"};
  using type = int(*)(snd_pcm_t *, snd_pcm_t *);
};

}

extern "C" int snd_pcm_link(fns::snd_pcm_link_arg0_t pcm1, fns::snd_pcm_link_arg1_t pcm2)
{
  return fns::call<fns::snd_pcm_link>(pcm1, pcm2);
}

namespace fns
{

using snd_pcm_unlink_arg0_t = snd_pcm_t *;
struct snd_pcm_unlink
{
  const char* name = "snd_pcm_unlink";
  const std::vector<const char*> args = {"pcm"};
  using type = int(*)(snd_pcm_t *);
};

}

extern "C" int snd_pcm_unlink(fns::snd_pcm_unlink_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_unlink>(pcm);
}

namespace fns
{

using snd_pcm_query_chmaps_arg0_t = snd_pcm_t *;
struct snd_pcm_query_chmaps
{
  const char* name = "snd_pcm_query_chmaps";
  const std::vector<const char*> args = {"pcm"};
  using type = snd_pcm_chmap_query_t **(*)(snd_pcm_t *);
};

}

extern "C" snd_pcm_chmap_query_t ** snd_pcm_query_chmaps(fns::snd_pcm_query_chmaps_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_query_chmaps>(pcm);
}

namespace fns
{

using snd_pcm_query_chmaps_from_hw_arg0_t = int;
using snd_pcm_query_chmaps_from_hw_arg1_t = int;
using snd_pcm_query_chmaps_from_hw_arg2_t = int;
using snd_pcm_query_chmaps_from_hw_arg3_t = snd_pcm_stream_t;
struct snd_pcm_query_chmaps_from_hw
{
  const char* name = "snd_pcm_query_chmaps_from_hw";
  const std::vector<const char*> args = {"card", "dev", "subdev", "stream"};
  using type = snd_pcm_chmap_query_t **(*)(int, int, int, snd_pcm_stream_t);
};

}

extern "C" snd_pcm_chmap_query_t ** snd_pcm_query_chmaps_from_hw(fns::snd_pcm_query_chmaps_from_hw_arg0_t card, fns::snd_pcm_query_chmaps_from_hw_arg1_t dev, fns::snd_pcm_query_chmaps_from_hw_arg2_t subdev, fns::snd_pcm_query_chmaps_from_hw_arg3_t stream)
{
  return fns::call<fns::snd_pcm_query_chmaps_from_hw>(card, dev, subdev, stream);
}

namespace fns
{

using snd_pcm_free_chmaps_arg0_t = snd_pcm_chmap_query_t **;
struct snd_pcm_free_chmaps
{
  const char* name = "snd_pcm_free_chmaps";
  const std::vector<const char*> args = {"maps"};
  using type = void(*)(snd_pcm_chmap_query_t **);
};

}

extern "C" void snd_pcm_free_chmaps(fns::snd_pcm_free_chmaps_arg0_t maps)
{
  return fns::call_void<fns::snd_pcm_free_chmaps>(maps);
}

namespace fns
{

using snd_pcm_get_chmap_arg0_t = snd_pcm_t *;
struct snd_pcm_get_chmap
{
  const char* name = "snd_pcm_get_chmap";
  const std::vector<const char*> args = {"pcm"};
  using type = snd_pcm_chmap_t *(*)(snd_pcm_t *);
};

}

extern "C" snd_pcm_chmap_t * snd_pcm_get_chmap(fns::snd_pcm_get_chmap_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_get_chmap>(pcm);
}

namespace fns
{

using snd_pcm_set_chmap_arg0_t = snd_pcm_t *;
using snd_pcm_set_chmap_arg1_t = const snd_pcm_chmap_t *;
struct snd_pcm_set_chmap
{
  const char* name = "snd_pcm_set_chmap";
  const std::vector<const char*> args = {"pcm", "map"};
  using type = int(*)(snd_pcm_t *, const snd_pcm_chmap_t *);
};

}

extern "C" int snd_pcm_set_chmap(fns::snd_pcm_set_chmap_arg0_t pcm, fns::snd_pcm_set_chmap_arg1_t map)
{
  return fns::call<fns::snd_pcm_set_chmap>(pcm, map);
}

namespace fns
{

using snd_pcm_chmap_type_name_arg0_t = enum snd_pcm_chmap_type;
struct snd_pcm_chmap_type_name
{
  const char* name = "snd_pcm_chmap_type_name";
  const std::vector<const char*> args = {"val"};
  using type = const char *(*)(enum snd_pcm_chmap_type);
};

}

extern "C" const char * snd_pcm_chmap_type_name(fns::snd_pcm_chmap_type_name_arg0_t val)
{
  return fns::call<fns::snd_pcm_chmap_type_name>(val);
}

namespace fns
{

using snd_pcm_chmap_name_arg0_t = enum snd_pcm_chmap_position;
struct snd_pcm_chmap_name
{
  const char* name = "snd_pcm_chmap_name";
  const std::vector<const char*> args = {"val"};
  using type = const char *(*)(enum snd_pcm_chmap_position);
};

}

extern "C" const char * snd_pcm_chmap_name(fns::snd_pcm_chmap_name_arg0_t val)
{
  return fns::call<fns::snd_pcm_chmap_name>(val);
}

namespace fns
{

using snd_pcm_chmap_long_name_arg0_t = enum snd_pcm_chmap_position;
struct snd_pcm_chmap_long_name
{
  const char* name = "snd_pcm_chmap_long_name";
  const std::vector<const char*> args = {"val"};
  using type = const char *(*)(enum snd_pcm_chmap_position);
};

}

extern "C" const char * snd_pcm_chmap_long_name(fns::snd_pcm_chmap_long_name_arg0_t val)
{
  return fns::call<fns::snd_pcm_chmap_long_name>(val);
}

namespace fns
{

using snd_pcm_chmap_print_arg0_t = const snd_pcm_chmap_t *;
using snd_pcm_chmap_print_arg1_t = size_t;
using snd_pcm_chmap_print_arg2_t = char *;
struct snd_pcm_chmap_print
{
  const char* name = "snd_pcm_chmap_print";
  const std::vector<const char*> args = {"map", "maxlen", "buf"};
  using type = int(*)(const snd_pcm_chmap_t *, size_t, char *);
};

}

extern "C" int snd_pcm_chmap_print(fns::snd_pcm_chmap_print_arg0_t map, fns::snd_pcm_chmap_print_arg1_t maxlen, fns::snd_pcm_chmap_print_arg2_t buf)
{
  return fns::call<fns::snd_pcm_chmap_print>(map, maxlen, buf);
}

namespace fns
{

using snd_pcm_chmap_from_string_arg0_t = const char *;
struct snd_pcm_chmap_from_string
{
  const char* name = "snd_pcm_chmap_from_string";
  const std::vector<const char*> args = {"str"};
  using type = unsigned int(*)(const char *);
};

}

extern "C" unsigned int snd_pcm_chmap_from_string(fns::snd_pcm_chmap_from_string_arg0_t str)
{
  return fns::call<fns::snd_pcm_chmap_from_string>(str);
}

namespace fns
{

using snd_pcm_chmap_parse_string_arg0_t = const char *;
struct snd_pcm_chmap_parse_string
{
  const char* name = "snd_pcm_chmap_parse_string";
  const std::vector<const char*> args = {"str"};
  using type = snd_pcm_chmap_t *(*)(const char *);
};

}

extern "C" snd_pcm_chmap_t * snd_pcm_chmap_parse_string(fns::snd_pcm_chmap_parse_string_arg0_t str)
{
  return fns::call<fns::snd_pcm_chmap_parse_string>(str);
}

namespace fns
{

using snd_pcm_recover_arg0_t = snd_pcm_t *;
using snd_pcm_recover_arg1_t = int;
using snd_pcm_recover_arg2_t = int;
struct snd_pcm_recover
{
  const char* name = "snd_pcm_recover";
  const std::vector<const char*> args = {"pcm", "err", "silent"};
  using type = int(*)(snd_pcm_t *, int, int);
};

}

extern "C" int snd_pcm_recover(fns::snd_pcm_recover_arg0_t pcm, fns::snd_pcm_recover_arg1_t err, fns::snd_pcm_recover_arg2_t silent)
{
  return fns::call<fns::snd_pcm_recover>(pcm, err, silent);
}

namespace fns
{

using snd_pcm_set_params_arg0_t = snd_pcm_t *;
using snd_pcm_set_params_arg1_t = snd_pcm_format_t;
using snd_pcm_set_params_arg2_t = snd_pcm_access_t;
using snd_pcm_set_params_arg3_t = unsigned int;
using snd_pcm_set_params_arg4_t = unsigned int;
using snd_pcm_set_params_arg5_t = int;
using snd_pcm_set_params_arg6_t = unsigned int;
struct snd_pcm_set_params
{
  const char* name = "snd_pcm_set_params";
  const std::vector<const char*> args = {"pcm", "format", "access", "channels", "rate", "soft_resample", "latency"};
  using type = int(*)(snd_pcm_t *, snd_pcm_format_t, snd_pcm_access_t, unsigned int, unsigned int, int, unsigned int);
};

}

extern "C" int snd_pcm_set_params(fns::snd_pcm_set_params_arg0_t pcm, fns::snd_pcm_set_params_arg1_t format, fns::snd_pcm_set_params_arg2_t access, fns::snd_pcm_set_params_arg3_t channels, fns::snd_pcm_set_params_arg4_t rate, fns::snd_pcm_set_params_arg5_t soft_resample, fns::snd_pcm_set_params_arg6_t latency)
{
  return fns::call<fns::snd_pcm_set_params>(pcm, format, access, channels, rate, soft_resample, latency);
}

namespace fns
{

using snd_pcm_get_params_arg0_t = snd_pcm_t *;
using snd_pcm_get_params_arg1_t = snd_pcm_uframes_t *;
using snd_pcm_get_params_arg2_t = snd_pcm_uframes_t *;
struct snd_pcm_get_params
{
  const char* name = "snd_pcm_get_params";
  const std::vector<const char*> args = {"pcm", "buffer_size", "period_size"};
  using type = int(*)(snd_pcm_t *, snd_pcm_uframes_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_get_params(fns::snd_pcm_get_params_arg0_t pcm, fns::snd_pcm_get_params_arg1_t buffer_size, fns::snd_pcm_get_params_arg2_t period_size)
{
  return fns::call<fns::snd_pcm_get_params>(pcm, buffer_size, period_size);
}

namespace fns
{

struct snd_pcm_info_sizeof
{
  const char* name = "snd_pcm_info_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_pcm_info_sizeof()
{
  return fns::call<fns::snd_pcm_info_sizeof>();
}

namespace fns
{

using snd_pcm_info_malloc_arg0_t = snd_pcm_info_t **;
struct snd_pcm_info_malloc
{
  const char* name = "snd_pcm_info_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_pcm_info_t **);
};

}

extern "C" int snd_pcm_info_malloc(fns::snd_pcm_info_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_pcm_info_malloc>(ptr);
}

namespace fns
{

using snd_pcm_info_free_arg0_t = snd_pcm_info_t *;
struct snd_pcm_info_free
{
  const char* name = "snd_pcm_info_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_pcm_info_t *);
};

}

extern "C" void snd_pcm_info_free(fns::snd_pcm_info_free_arg0_t obj)
{
  return fns::call_void<fns::snd_pcm_info_free>(obj);
}

namespace fns
{

using snd_pcm_info_copy_arg0_t = snd_pcm_info_t *;
using snd_pcm_info_copy_arg1_t = const snd_pcm_info_t *;
struct snd_pcm_info_copy
{
  const char* name = "snd_pcm_info_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_pcm_info_t *, const snd_pcm_info_t *);
};

}

extern "C" void snd_pcm_info_copy(fns::snd_pcm_info_copy_arg0_t dst, fns::snd_pcm_info_copy_arg1_t src)
{
  return fns::call_void<fns::snd_pcm_info_copy>(dst, src);
}

namespace fns
{

using snd_pcm_info_get_device_arg0_t = const snd_pcm_info_t *;
struct snd_pcm_info_get_device
{
  const char* name = "snd_pcm_info_get_device";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_pcm_info_t *);
};

}

extern "C" unsigned int snd_pcm_info_get_device(fns::snd_pcm_info_get_device_arg0_t obj)
{
  return fns::call<fns::snd_pcm_info_get_device>(obj);
}

namespace fns
{

using snd_pcm_info_get_subdevice_arg0_t = const snd_pcm_info_t *;
struct snd_pcm_info_get_subdevice
{
  const char* name = "snd_pcm_info_get_subdevice";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_pcm_info_t *);
};

}

extern "C" unsigned int snd_pcm_info_get_subdevice(fns::snd_pcm_info_get_subdevice_arg0_t obj)
{
  return fns::call<fns::snd_pcm_info_get_subdevice>(obj);
}

namespace fns
{

using snd_pcm_info_get_stream_arg0_t = const snd_pcm_info_t *;
struct snd_pcm_info_get_stream
{
  const char* name = "snd_pcm_info_get_stream";
  const std::vector<const char*> args = {"obj"};
  using type = snd_pcm_stream_t(*)(const snd_pcm_info_t *);
};

}

extern "C" snd_pcm_stream_t snd_pcm_info_get_stream(fns::snd_pcm_info_get_stream_arg0_t obj)
{
  return fns::call<fns::snd_pcm_info_get_stream>(obj);
}

namespace fns
{

using snd_pcm_info_get_card_arg0_t = const snd_pcm_info_t *;
struct snd_pcm_info_get_card
{
  const char* name = "snd_pcm_info_get_card";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_pcm_info_t *);
};

}

extern "C" int snd_pcm_info_get_card(fns::snd_pcm_info_get_card_arg0_t obj)
{
  return fns::call<fns::snd_pcm_info_get_card>(obj);
}

namespace fns
{

using snd_pcm_info_get_id_arg0_t = const snd_pcm_info_t *;
struct snd_pcm_info_get_id
{
  const char* name = "snd_pcm_info_get_id";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_pcm_info_t *);
};

}

extern "C" const char * snd_pcm_info_get_id(fns::snd_pcm_info_get_id_arg0_t obj)
{
  return fns::call<fns::snd_pcm_info_get_id>(obj);
}

namespace fns
{

using snd_pcm_info_get_name_arg0_t = const snd_pcm_info_t *;
struct snd_pcm_info_get_name
{
  const char* name = "snd_pcm_info_get_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_pcm_info_t *);
};

}

extern "C" const char * snd_pcm_info_get_name(fns::snd_pcm_info_get_name_arg0_t obj)
{
  return fns::call<fns::snd_pcm_info_get_name>(obj);
}

namespace fns
{

using snd_pcm_info_get_subdevice_name_arg0_t = const snd_pcm_info_t *;
struct snd_pcm_info_get_subdevice_name
{
  const char* name = "snd_pcm_info_get_subdevice_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_pcm_info_t *);
};

}

extern "C" const char * snd_pcm_info_get_subdevice_name(fns::snd_pcm_info_get_subdevice_name_arg0_t obj)
{
  return fns::call<fns::snd_pcm_info_get_subdevice_name>(obj);
}

namespace fns
{

using snd_pcm_info_get_class_arg0_t = const snd_pcm_info_t *;
struct snd_pcm_info_get_class
{
  const char* name = "snd_pcm_info_get_class";
  const std::vector<const char*> args = {"obj"};
  using type = snd_pcm_class_t(*)(const snd_pcm_info_t *);
};

}

extern "C" snd_pcm_class_t snd_pcm_info_get_class(fns::snd_pcm_info_get_class_arg0_t obj)
{
  return fns::call<fns::snd_pcm_info_get_class>(obj);
}

namespace fns
{

using snd_pcm_info_get_subclass_arg0_t = const snd_pcm_info_t *;
struct snd_pcm_info_get_subclass
{
  const char* name = "snd_pcm_info_get_subclass";
  const std::vector<const char*> args = {"obj"};
  using type = snd_pcm_subclass_t(*)(const snd_pcm_info_t *);
};

}

extern "C" snd_pcm_subclass_t snd_pcm_info_get_subclass(fns::snd_pcm_info_get_subclass_arg0_t obj)
{
  return fns::call<fns::snd_pcm_info_get_subclass>(obj);
}

namespace fns
{

using snd_pcm_info_get_subdevices_count_arg0_t = const snd_pcm_info_t *;
struct snd_pcm_info_get_subdevices_count
{
  const char* name = "snd_pcm_info_get_subdevices_count";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_pcm_info_t *);
};

}

extern "C" unsigned int snd_pcm_info_get_subdevices_count(fns::snd_pcm_info_get_subdevices_count_arg0_t obj)
{
  return fns::call<fns::snd_pcm_info_get_subdevices_count>(obj);
}

namespace fns
{

using snd_pcm_info_get_subdevices_avail_arg0_t = const snd_pcm_info_t *;
struct snd_pcm_info_get_subdevices_avail
{
  const char* name = "snd_pcm_info_get_subdevices_avail";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_pcm_info_t *);
};

}

extern "C" unsigned int snd_pcm_info_get_subdevices_avail(fns::snd_pcm_info_get_subdevices_avail_arg0_t obj)
{
  return fns::call<fns::snd_pcm_info_get_subdevices_avail>(obj);
}

namespace fns
{

using snd_pcm_info_get_sync_arg0_t = const snd_pcm_info_t *;
struct snd_pcm_info_get_sync
{
  const char* name = "snd_pcm_info_get_sync";
  const std::vector<const char*> args = {"obj"};
  using type = snd_pcm_sync_id_t(*)(const snd_pcm_info_t *);
};

}

extern "C" snd_pcm_sync_id_t snd_pcm_info_get_sync(fns::snd_pcm_info_get_sync_arg0_t obj)
{
  return fns::call<fns::snd_pcm_info_get_sync>(obj);
}

namespace fns
{

using snd_pcm_info_set_device_arg0_t = snd_pcm_info_t *;
using snd_pcm_info_set_device_arg1_t = unsigned int;
struct snd_pcm_info_set_device
{
  const char* name = "snd_pcm_info_set_device";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_pcm_info_t *, unsigned int);
};

}

extern "C" void snd_pcm_info_set_device(fns::snd_pcm_info_set_device_arg0_t obj, fns::snd_pcm_info_set_device_arg1_t val)
{
  return fns::call_void<fns::snd_pcm_info_set_device>(obj, val);
}

namespace fns
{

using snd_pcm_info_set_subdevice_arg0_t = snd_pcm_info_t *;
using snd_pcm_info_set_subdevice_arg1_t = unsigned int;
struct snd_pcm_info_set_subdevice
{
  const char* name = "snd_pcm_info_set_subdevice";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_pcm_info_t *, unsigned int);
};

}

extern "C" void snd_pcm_info_set_subdevice(fns::snd_pcm_info_set_subdevice_arg0_t obj, fns::snd_pcm_info_set_subdevice_arg1_t val)
{
  return fns::call_void<fns::snd_pcm_info_set_subdevice>(obj, val);
}

namespace fns
{

using snd_pcm_info_set_stream_arg0_t = snd_pcm_info_t *;
using snd_pcm_info_set_stream_arg1_t = snd_pcm_stream_t;
struct snd_pcm_info_set_stream
{
  const char* name = "snd_pcm_info_set_stream";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_pcm_info_t *, snd_pcm_stream_t);
};

}

extern "C" void snd_pcm_info_set_stream(fns::snd_pcm_info_set_stream_arg0_t obj, fns::snd_pcm_info_set_stream_arg1_t val)
{
  return fns::call_void<fns::snd_pcm_info_set_stream>(obj, val);
}

namespace fns
{

using snd_pcm_hw_params_any_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_any_arg1_t = snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_any
{
  const char* name = "snd_pcm_hw_params_any";
  const std::vector<const char*> args = {"pcm", "params"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_any(fns::snd_pcm_hw_params_any_arg0_t pcm, fns::snd_pcm_hw_params_any_arg1_t params)
{
  return fns::call<fns::snd_pcm_hw_params_any>(pcm, params);
}

namespace fns
{

using snd_pcm_hw_params_can_mmap_sample_resolution_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_can_mmap_sample_resolution
{
  const char* name = "snd_pcm_hw_params_can_mmap_sample_resolution";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_can_mmap_sample_resolution(fns::snd_pcm_hw_params_can_mmap_sample_resolution_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_can_mmap_sample_resolution>(params);
}

namespace fns
{

using snd_pcm_hw_params_is_double_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_is_double
{
  const char* name = "snd_pcm_hw_params_is_double";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_is_double(fns::snd_pcm_hw_params_is_double_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_is_double>(params);
}

namespace fns
{

using snd_pcm_hw_params_is_batch_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_is_batch
{
  const char* name = "snd_pcm_hw_params_is_batch";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_is_batch(fns::snd_pcm_hw_params_is_batch_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_is_batch>(params);
}

namespace fns
{

using snd_pcm_hw_params_is_block_transfer_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_is_block_transfer
{
  const char* name = "snd_pcm_hw_params_is_block_transfer";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_is_block_transfer(fns::snd_pcm_hw_params_is_block_transfer_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_is_block_transfer>(params);
}

namespace fns
{

using snd_pcm_hw_params_is_monotonic_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_is_monotonic
{
  const char* name = "snd_pcm_hw_params_is_monotonic";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_is_monotonic(fns::snd_pcm_hw_params_is_monotonic_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_is_monotonic>(params);
}

namespace fns
{

using snd_pcm_hw_params_can_overrange_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_can_overrange
{
  const char* name = "snd_pcm_hw_params_can_overrange";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_can_overrange(fns::snd_pcm_hw_params_can_overrange_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_can_overrange>(params);
}

namespace fns
{

using snd_pcm_hw_params_can_pause_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_can_pause
{
  const char* name = "snd_pcm_hw_params_can_pause";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_can_pause(fns::snd_pcm_hw_params_can_pause_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_can_pause>(params);
}

namespace fns
{

using snd_pcm_hw_params_can_resume_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_can_resume
{
  const char* name = "snd_pcm_hw_params_can_resume";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_can_resume(fns::snd_pcm_hw_params_can_resume_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_can_resume>(params);
}

namespace fns
{

using snd_pcm_hw_params_is_half_duplex_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_is_half_duplex
{
  const char* name = "snd_pcm_hw_params_is_half_duplex";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_is_half_duplex(fns::snd_pcm_hw_params_is_half_duplex_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_is_half_duplex>(params);
}

namespace fns
{

using snd_pcm_hw_params_is_joint_duplex_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_is_joint_duplex
{
  const char* name = "snd_pcm_hw_params_is_joint_duplex";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_is_joint_duplex(fns::snd_pcm_hw_params_is_joint_duplex_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_is_joint_duplex>(params);
}

namespace fns
{

using snd_pcm_hw_params_can_sync_start_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_can_sync_start
{
  const char* name = "snd_pcm_hw_params_can_sync_start";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_can_sync_start(fns::snd_pcm_hw_params_can_sync_start_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_can_sync_start>(params);
}

namespace fns
{

using snd_pcm_hw_params_can_disable_period_wakeup_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_can_disable_period_wakeup
{
  const char* name = "snd_pcm_hw_params_can_disable_period_wakeup";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_can_disable_period_wakeup(fns::snd_pcm_hw_params_can_disable_period_wakeup_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_can_disable_period_wakeup>(params);
}

namespace fns
{

using snd_pcm_hw_params_supports_audio_wallclock_ts_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_supports_audio_wallclock_ts
{
  const char* name = "snd_pcm_hw_params_supports_audio_wallclock_ts";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_supports_audio_wallclock_ts(fns::snd_pcm_hw_params_supports_audio_wallclock_ts_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_supports_audio_wallclock_ts>(params);
}

namespace fns
{

using snd_pcm_hw_params_supports_audio_ts_type_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_supports_audio_ts_type_arg1_t = int;
struct snd_pcm_hw_params_supports_audio_ts_type
{
  const char* name = "snd_pcm_hw_params_supports_audio_ts_type";
  const std::vector<const char*> args = {"params", "type"};
  using type = int(*)(const snd_pcm_hw_params_t *, int);
};

}

extern "C" int snd_pcm_hw_params_supports_audio_ts_type(fns::snd_pcm_hw_params_supports_audio_ts_type_arg0_t params, fns::snd_pcm_hw_params_supports_audio_ts_type_arg1_t type)
{
  return fns::call<fns::snd_pcm_hw_params_supports_audio_ts_type>(params, type);
}

namespace fns
{

using snd_pcm_hw_params_get_rate_numden_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_rate_numden_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_rate_numden_arg2_t = unsigned int *;
struct snd_pcm_hw_params_get_rate_numden
{
  const char* name = "snd_pcm_hw_params_get_rate_numden";
  const std::vector<const char*> args = {"params", "rate_num", "rate_den"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_get_rate_numden(fns::snd_pcm_hw_params_get_rate_numden_arg0_t params, fns::snd_pcm_hw_params_get_rate_numden_arg1_t rate_num, fns::snd_pcm_hw_params_get_rate_numden_arg2_t rate_den)
{
  return fns::call<fns::snd_pcm_hw_params_get_rate_numden>(params, rate_num, rate_den);
}

namespace fns
{

using snd_pcm_hw_params_get_sbits_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_get_sbits
{
  const char* name = "snd_pcm_hw_params_get_sbits";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_get_sbits(fns::snd_pcm_hw_params_get_sbits_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_get_sbits>(params);
}

namespace fns
{

using snd_pcm_hw_params_get_fifo_size_arg0_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_get_fifo_size
{
  const char* name = "snd_pcm_hw_params_get_fifo_size";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_get_fifo_size(fns::snd_pcm_hw_params_get_fifo_size_arg0_t params)
{
  return fns::call<fns::snd_pcm_hw_params_get_fifo_size>(params);
}

namespace fns
{

struct snd_pcm_hw_params_sizeof
{
  const char* name = "snd_pcm_hw_params_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_pcm_hw_params_sizeof()
{
  return fns::call<fns::snd_pcm_hw_params_sizeof>();
}

namespace fns
{

using snd_pcm_hw_params_malloc_arg0_t = snd_pcm_hw_params_t **;
struct snd_pcm_hw_params_malloc
{
  const char* name = "snd_pcm_hw_params_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_pcm_hw_params_t **);
};

}

extern "C" int snd_pcm_hw_params_malloc(fns::snd_pcm_hw_params_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_pcm_hw_params_malloc>(ptr);
}

namespace fns
{

using snd_pcm_hw_params_free_arg0_t = snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_free
{
  const char* name = "snd_pcm_hw_params_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_pcm_hw_params_t *);
};

}

extern "C" void snd_pcm_hw_params_free(fns::snd_pcm_hw_params_free_arg0_t obj)
{
  return fns::call_void<fns::snd_pcm_hw_params_free>(obj);
}

namespace fns
{

using snd_pcm_hw_params_copy_arg0_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_copy_arg1_t = const snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_copy
{
  const char* name = "snd_pcm_hw_params_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_pcm_hw_params_t *, const snd_pcm_hw_params_t *);
};

}

extern "C" void snd_pcm_hw_params_copy(fns::snd_pcm_hw_params_copy_arg0_t dst, fns::snd_pcm_hw_params_copy_arg1_t src)
{
  return fns::call_void<fns::snd_pcm_hw_params_copy>(dst, src);
}

namespace fns
{

using snd_pcm_hw_params_get_access_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_access_arg1_t = snd_pcm_access_t *;
struct snd_pcm_hw_params_get_access
{
  const char* name = "snd_pcm_hw_params_get_access";
  const std::vector<const char*> args = {"params", "_access"};
  using type = int(*)(const snd_pcm_hw_params_t *, snd_pcm_access_t *);
};

}

extern "C" int snd_pcm_hw_params_get_access(fns::snd_pcm_hw_params_get_access_arg0_t params, fns::snd_pcm_hw_params_get_access_arg1_t _access)
{
  return fns::call<fns::snd_pcm_hw_params_get_access>(params, _access);
}

namespace fns
{

using snd_pcm_hw_params_test_access_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_test_access_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_test_access_arg2_t = snd_pcm_access_t;
struct snd_pcm_hw_params_test_access
{
  const char* name = "snd_pcm_hw_params_test_access";
  const std::vector<const char*> args = {"pcm", "params", "_access"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_access_t);
};

}

extern "C" int snd_pcm_hw_params_test_access(fns::snd_pcm_hw_params_test_access_arg0_t pcm, fns::snd_pcm_hw_params_test_access_arg1_t params, fns::snd_pcm_hw_params_test_access_arg2_t _access)
{
  return fns::call<fns::snd_pcm_hw_params_test_access>(pcm, params, _access);
}

namespace fns
{

using snd_pcm_hw_params_set_access_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_access_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_access_arg2_t = snd_pcm_access_t;
struct snd_pcm_hw_params_set_access
{
  const char* name = "snd_pcm_hw_params_set_access";
  const std::vector<const char*> args = {"pcm", "params", "_access"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_access_t);
};

}

extern "C" int snd_pcm_hw_params_set_access(fns::snd_pcm_hw_params_set_access_arg0_t pcm, fns::snd_pcm_hw_params_set_access_arg1_t params, fns::snd_pcm_hw_params_set_access_arg2_t _access)
{
  return fns::call<fns::snd_pcm_hw_params_set_access>(pcm, params, _access);
}

namespace fns
{

using snd_pcm_hw_params_set_access_first_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_access_first_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_access_first_arg2_t = snd_pcm_access_t *;
struct snd_pcm_hw_params_set_access_first
{
  const char* name = "snd_pcm_hw_params_set_access_first";
  const std::vector<const char*> args = {"pcm", "params", "_access"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_access_t *);
};

}

extern "C" int snd_pcm_hw_params_set_access_first(fns::snd_pcm_hw_params_set_access_first_arg0_t pcm, fns::snd_pcm_hw_params_set_access_first_arg1_t params, fns::snd_pcm_hw_params_set_access_first_arg2_t _access)
{
  return fns::call<fns::snd_pcm_hw_params_set_access_first>(pcm, params, _access);
}

namespace fns
{

using snd_pcm_hw_params_set_access_last_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_access_last_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_access_last_arg2_t = snd_pcm_access_t *;
struct snd_pcm_hw_params_set_access_last
{
  const char* name = "snd_pcm_hw_params_set_access_last";
  const std::vector<const char*> args = {"pcm", "params", "_access"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_access_t *);
};

}

extern "C" int snd_pcm_hw_params_set_access_last(fns::snd_pcm_hw_params_set_access_last_arg0_t pcm, fns::snd_pcm_hw_params_set_access_last_arg1_t params, fns::snd_pcm_hw_params_set_access_last_arg2_t _access)
{
  return fns::call<fns::snd_pcm_hw_params_set_access_last>(pcm, params, _access);
}

namespace fns
{

using snd_pcm_hw_params_set_access_mask_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_access_mask_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_access_mask_arg2_t = snd_pcm_access_mask_t *;
struct snd_pcm_hw_params_set_access_mask
{
  const char* name = "snd_pcm_hw_params_set_access_mask";
  const std::vector<const char*> args = {"pcm", "params", "mask"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_access_mask_t *);
};

}

extern "C" int snd_pcm_hw_params_set_access_mask(fns::snd_pcm_hw_params_set_access_mask_arg0_t pcm, fns::snd_pcm_hw_params_set_access_mask_arg1_t params, fns::snd_pcm_hw_params_set_access_mask_arg2_t mask)
{
  return fns::call<fns::snd_pcm_hw_params_set_access_mask>(pcm, params, mask);
}

namespace fns
{

using snd_pcm_hw_params_get_access_mask_arg0_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_access_mask_arg1_t = snd_pcm_access_mask_t *;
struct snd_pcm_hw_params_get_access_mask
{
  const char* name = "snd_pcm_hw_params_get_access_mask";
  const std::vector<const char*> args = {"params", "mask"};
  using type = int(*)(snd_pcm_hw_params_t *, snd_pcm_access_mask_t *);
};

}

extern "C" int snd_pcm_hw_params_get_access_mask(fns::snd_pcm_hw_params_get_access_mask_arg0_t params, fns::snd_pcm_hw_params_get_access_mask_arg1_t mask)
{
  return fns::call<fns::snd_pcm_hw_params_get_access_mask>(params, mask);
}

namespace fns
{

using snd_pcm_hw_params_get_format_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_format_arg1_t = snd_pcm_format_t *;
struct snd_pcm_hw_params_get_format
{
  const char* name = "snd_pcm_hw_params_get_format";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_hw_params_t *, snd_pcm_format_t *);
};

}

extern "C" int snd_pcm_hw_params_get_format(fns::snd_pcm_hw_params_get_format_arg0_t params, fns::snd_pcm_hw_params_get_format_arg1_t val)
{
  return fns::call<fns::snd_pcm_hw_params_get_format>(params, val);
}

namespace fns
{

using snd_pcm_hw_params_test_format_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_test_format_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_test_format_arg2_t = snd_pcm_format_t;
struct snd_pcm_hw_params_test_format
{
  const char* name = "snd_pcm_hw_params_test_format";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_format_t);
};

}

extern "C" int snd_pcm_hw_params_test_format(fns::snd_pcm_hw_params_test_format_arg0_t pcm, fns::snd_pcm_hw_params_test_format_arg1_t params, fns::snd_pcm_hw_params_test_format_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_test_format>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_format_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_format_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_format_arg2_t = snd_pcm_format_t;
struct snd_pcm_hw_params_set_format
{
  const char* name = "snd_pcm_hw_params_set_format";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_format_t);
};

}

extern "C" int snd_pcm_hw_params_set_format(fns::snd_pcm_hw_params_set_format_arg0_t pcm, fns::snd_pcm_hw_params_set_format_arg1_t params, fns::snd_pcm_hw_params_set_format_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_format>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_format_first_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_format_first_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_format_first_arg2_t = snd_pcm_format_t *;
struct snd_pcm_hw_params_set_format_first
{
  const char* name = "snd_pcm_hw_params_set_format_first";
  const std::vector<const char*> args = {"pcm", "params", "format"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_format_t *);
};

}

extern "C" int snd_pcm_hw_params_set_format_first(fns::snd_pcm_hw_params_set_format_first_arg0_t pcm, fns::snd_pcm_hw_params_set_format_first_arg1_t params, fns::snd_pcm_hw_params_set_format_first_arg2_t format)
{
  return fns::call<fns::snd_pcm_hw_params_set_format_first>(pcm, params, format);
}

namespace fns
{

using snd_pcm_hw_params_set_format_last_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_format_last_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_format_last_arg2_t = snd_pcm_format_t *;
struct snd_pcm_hw_params_set_format_last
{
  const char* name = "snd_pcm_hw_params_set_format_last";
  const std::vector<const char*> args = {"pcm", "params", "format"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_format_t *);
};

}

extern "C" int snd_pcm_hw_params_set_format_last(fns::snd_pcm_hw_params_set_format_last_arg0_t pcm, fns::snd_pcm_hw_params_set_format_last_arg1_t params, fns::snd_pcm_hw_params_set_format_last_arg2_t format)
{
  return fns::call<fns::snd_pcm_hw_params_set_format_last>(pcm, params, format);
}

namespace fns
{

using snd_pcm_hw_params_set_format_mask_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_format_mask_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_format_mask_arg2_t = snd_pcm_format_mask_t *;
struct snd_pcm_hw_params_set_format_mask
{
  const char* name = "snd_pcm_hw_params_set_format_mask";
  const std::vector<const char*> args = {"pcm", "params", "mask"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_format_mask_t *);
};

}

extern "C" int snd_pcm_hw_params_set_format_mask(fns::snd_pcm_hw_params_set_format_mask_arg0_t pcm, fns::snd_pcm_hw_params_set_format_mask_arg1_t params, fns::snd_pcm_hw_params_set_format_mask_arg2_t mask)
{
  return fns::call<fns::snd_pcm_hw_params_set_format_mask>(pcm, params, mask);
}

namespace fns
{

using snd_pcm_hw_params_get_format_mask_arg0_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_format_mask_arg1_t = snd_pcm_format_mask_t *;
struct snd_pcm_hw_params_get_format_mask
{
  const char* name = "snd_pcm_hw_params_get_format_mask";
  const std::vector<const char*> args = {"params", "mask"};
  using type = void(*)(snd_pcm_hw_params_t *, snd_pcm_format_mask_t *);
};

}

extern "C" void snd_pcm_hw_params_get_format_mask(fns::snd_pcm_hw_params_get_format_mask_arg0_t params, fns::snd_pcm_hw_params_get_format_mask_arg1_t mask)
{
  return fns::call_void<fns::snd_pcm_hw_params_get_format_mask>(params, mask);
}

namespace fns
{

using snd_pcm_hw_params_get_subformat_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_subformat_arg1_t = snd_pcm_subformat_t *;
struct snd_pcm_hw_params_get_subformat
{
  const char* name = "snd_pcm_hw_params_get_subformat";
  const std::vector<const char*> args = {"params", "subformat"};
  using type = int(*)(const snd_pcm_hw_params_t *, snd_pcm_subformat_t *);
};

}

extern "C" int snd_pcm_hw_params_get_subformat(fns::snd_pcm_hw_params_get_subformat_arg0_t params, fns::snd_pcm_hw_params_get_subformat_arg1_t subformat)
{
  return fns::call<fns::snd_pcm_hw_params_get_subformat>(params, subformat);
}

namespace fns
{

using snd_pcm_hw_params_test_subformat_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_test_subformat_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_test_subformat_arg2_t = snd_pcm_subformat_t;
struct snd_pcm_hw_params_test_subformat
{
  const char* name = "snd_pcm_hw_params_test_subformat";
  const std::vector<const char*> args = {"pcm", "params", "subformat"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_subformat_t);
};

}

extern "C" int snd_pcm_hw_params_test_subformat(fns::snd_pcm_hw_params_test_subformat_arg0_t pcm, fns::snd_pcm_hw_params_test_subformat_arg1_t params, fns::snd_pcm_hw_params_test_subformat_arg2_t subformat)
{
  return fns::call<fns::snd_pcm_hw_params_test_subformat>(pcm, params, subformat);
}

namespace fns
{

using snd_pcm_hw_params_set_subformat_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_subformat_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_subformat_arg2_t = snd_pcm_subformat_t;
struct snd_pcm_hw_params_set_subformat
{
  const char* name = "snd_pcm_hw_params_set_subformat";
  const std::vector<const char*> args = {"pcm", "params", "subformat"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_subformat_t);
};

}

extern "C" int snd_pcm_hw_params_set_subformat(fns::snd_pcm_hw_params_set_subformat_arg0_t pcm, fns::snd_pcm_hw_params_set_subformat_arg1_t params, fns::snd_pcm_hw_params_set_subformat_arg2_t subformat)
{
  return fns::call<fns::snd_pcm_hw_params_set_subformat>(pcm, params, subformat);
}

namespace fns
{

using snd_pcm_hw_params_set_subformat_first_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_subformat_first_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_subformat_first_arg2_t = snd_pcm_subformat_t *;
struct snd_pcm_hw_params_set_subformat_first
{
  const char* name = "snd_pcm_hw_params_set_subformat_first";
  const std::vector<const char*> args = {"pcm", "params", "subformat"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_subformat_t *);
};

}

extern "C" int snd_pcm_hw_params_set_subformat_first(fns::snd_pcm_hw_params_set_subformat_first_arg0_t pcm, fns::snd_pcm_hw_params_set_subformat_first_arg1_t params, fns::snd_pcm_hw_params_set_subformat_first_arg2_t subformat)
{
  return fns::call<fns::snd_pcm_hw_params_set_subformat_first>(pcm, params, subformat);
}

namespace fns
{

using snd_pcm_hw_params_set_subformat_last_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_subformat_last_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_subformat_last_arg2_t = snd_pcm_subformat_t *;
struct snd_pcm_hw_params_set_subformat_last
{
  const char* name = "snd_pcm_hw_params_set_subformat_last";
  const std::vector<const char*> args = {"pcm", "params", "subformat"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_subformat_t *);
};

}

extern "C" int snd_pcm_hw_params_set_subformat_last(fns::snd_pcm_hw_params_set_subformat_last_arg0_t pcm, fns::snd_pcm_hw_params_set_subformat_last_arg1_t params, fns::snd_pcm_hw_params_set_subformat_last_arg2_t subformat)
{
  return fns::call<fns::snd_pcm_hw_params_set_subformat_last>(pcm, params, subformat);
}

namespace fns
{

using snd_pcm_hw_params_set_subformat_mask_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_subformat_mask_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_subformat_mask_arg2_t = snd_pcm_subformat_mask_t *;
struct snd_pcm_hw_params_set_subformat_mask
{
  const char* name = "snd_pcm_hw_params_set_subformat_mask";
  const std::vector<const char*> args = {"pcm", "params", "mask"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_subformat_mask_t *);
};

}

extern "C" int snd_pcm_hw_params_set_subformat_mask(fns::snd_pcm_hw_params_set_subformat_mask_arg0_t pcm, fns::snd_pcm_hw_params_set_subformat_mask_arg1_t params, fns::snd_pcm_hw_params_set_subformat_mask_arg2_t mask)
{
  return fns::call<fns::snd_pcm_hw_params_set_subformat_mask>(pcm, params, mask);
}

namespace fns
{

using snd_pcm_hw_params_get_subformat_mask_arg0_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_subformat_mask_arg1_t = snd_pcm_subformat_mask_t *;
struct snd_pcm_hw_params_get_subformat_mask
{
  const char* name = "snd_pcm_hw_params_get_subformat_mask";
  const std::vector<const char*> args = {"params", "mask"};
  using type = void(*)(snd_pcm_hw_params_t *, snd_pcm_subformat_mask_t *);
};

}

extern "C" void snd_pcm_hw_params_get_subformat_mask(fns::snd_pcm_hw_params_get_subformat_mask_arg0_t params, fns::snd_pcm_hw_params_get_subformat_mask_arg1_t mask)
{
  return fns::call_void<fns::snd_pcm_hw_params_get_subformat_mask>(params, mask);
}

namespace fns
{

using snd_pcm_hw_params_get_channels_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_channels_arg1_t = unsigned int *;
struct snd_pcm_hw_params_get_channels
{
  const char* name = "snd_pcm_hw_params_get_channels";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_get_channels(fns::snd_pcm_hw_params_get_channels_arg0_t params, fns::snd_pcm_hw_params_get_channels_arg1_t val)
{
  return fns::call<fns::snd_pcm_hw_params_get_channels>(params, val);
}

namespace fns
{

using snd_pcm_hw_params_get_channels_min_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_channels_min_arg1_t = unsigned int *;
struct snd_pcm_hw_params_get_channels_min
{
  const char* name = "snd_pcm_hw_params_get_channels_min";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_get_channels_min(fns::snd_pcm_hw_params_get_channels_min_arg0_t params, fns::snd_pcm_hw_params_get_channels_min_arg1_t val)
{
  return fns::call<fns::snd_pcm_hw_params_get_channels_min>(params, val);
}

namespace fns
{

using snd_pcm_hw_params_get_channels_max_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_channels_max_arg1_t = unsigned int *;
struct snd_pcm_hw_params_get_channels_max
{
  const char* name = "snd_pcm_hw_params_get_channels_max";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_get_channels_max(fns::snd_pcm_hw_params_get_channels_max_arg0_t params, fns::snd_pcm_hw_params_get_channels_max_arg1_t val)
{
  return fns::call<fns::snd_pcm_hw_params_get_channels_max>(params, val);
}

namespace fns
{

using snd_pcm_hw_params_test_channels_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_test_channels_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_test_channels_arg2_t = unsigned int;
struct snd_pcm_hw_params_test_channels
{
  const char* name = "snd_pcm_hw_params_test_channels";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int);
};

}

extern "C" int snd_pcm_hw_params_test_channels(fns::snd_pcm_hw_params_test_channels_arg0_t pcm, fns::snd_pcm_hw_params_test_channels_arg1_t params, fns::snd_pcm_hw_params_test_channels_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_test_channels>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_channels_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_channels_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_channels_arg2_t = unsigned int;
struct snd_pcm_hw_params_set_channels
{
  const char* name = "snd_pcm_hw_params_set_channels";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int);
};

}

extern "C" int snd_pcm_hw_params_set_channels(fns::snd_pcm_hw_params_set_channels_arg0_t pcm, fns::snd_pcm_hw_params_set_channels_arg1_t params, fns::snd_pcm_hw_params_set_channels_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_channels>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_channels_min_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_channels_min_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_channels_min_arg2_t = unsigned int *;
struct snd_pcm_hw_params_set_channels_min
{
  const char* name = "snd_pcm_hw_params_set_channels_min";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_set_channels_min(fns::snd_pcm_hw_params_set_channels_min_arg0_t pcm, fns::snd_pcm_hw_params_set_channels_min_arg1_t params, fns::snd_pcm_hw_params_set_channels_min_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_channels_min>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_channels_max_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_channels_max_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_channels_max_arg2_t = unsigned int *;
struct snd_pcm_hw_params_set_channels_max
{
  const char* name = "snd_pcm_hw_params_set_channels_max";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_set_channels_max(fns::snd_pcm_hw_params_set_channels_max_arg0_t pcm, fns::snd_pcm_hw_params_set_channels_max_arg1_t params, fns::snd_pcm_hw_params_set_channels_max_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_channels_max>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_channels_minmax_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_channels_minmax_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_channels_minmax_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_channels_minmax_arg3_t = unsigned int *;
struct snd_pcm_hw_params_set_channels_minmax
{
  const char* name = "snd_pcm_hw_params_set_channels_minmax";
  const std::vector<const char*> args = {"pcm", "params", "min", "max"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_set_channels_minmax(fns::snd_pcm_hw_params_set_channels_minmax_arg0_t pcm, fns::snd_pcm_hw_params_set_channels_minmax_arg1_t params, fns::snd_pcm_hw_params_set_channels_minmax_arg2_t min, fns::snd_pcm_hw_params_set_channels_minmax_arg3_t max)
{
  return fns::call<fns::snd_pcm_hw_params_set_channels_minmax>(pcm, params, min, max);
}

namespace fns
{

using snd_pcm_hw_params_set_channels_near_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_channels_near_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_channels_near_arg2_t = unsigned int *;
struct snd_pcm_hw_params_set_channels_near
{
  const char* name = "snd_pcm_hw_params_set_channels_near";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_set_channels_near(fns::snd_pcm_hw_params_set_channels_near_arg0_t pcm, fns::snd_pcm_hw_params_set_channels_near_arg1_t params, fns::snd_pcm_hw_params_set_channels_near_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_channels_near>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_channels_first_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_channels_first_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_channels_first_arg2_t = unsigned int *;
struct snd_pcm_hw_params_set_channels_first
{
  const char* name = "snd_pcm_hw_params_set_channels_first";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_set_channels_first(fns::snd_pcm_hw_params_set_channels_first_arg0_t pcm, fns::snd_pcm_hw_params_set_channels_first_arg1_t params, fns::snd_pcm_hw_params_set_channels_first_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_channels_first>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_channels_last_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_channels_last_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_channels_last_arg2_t = unsigned int *;
struct snd_pcm_hw_params_set_channels_last
{
  const char* name = "snd_pcm_hw_params_set_channels_last";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_set_channels_last(fns::snd_pcm_hw_params_set_channels_last_arg0_t pcm, fns::snd_pcm_hw_params_set_channels_last_arg1_t params, fns::snd_pcm_hw_params_set_channels_last_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_channels_last>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_get_rate_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_rate_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_rate_arg2_t = int *;
struct snd_pcm_hw_params_get_rate
{
  const char* name = "snd_pcm_hw_params_get_rate";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_rate(fns::snd_pcm_hw_params_get_rate_arg0_t params, fns::snd_pcm_hw_params_get_rate_arg1_t val, fns::snd_pcm_hw_params_get_rate_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_rate>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_rate_min_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_rate_min_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_rate_min_arg2_t = int *;
struct snd_pcm_hw_params_get_rate_min
{
  const char* name = "snd_pcm_hw_params_get_rate_min";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_rate_min(fns::snd_pcm_hw_params_get_rate_min_arg0_t params, fns::snd_pcm_hw_params_get_rate_min_arg1_t val, fns::snd_pcm_hw_params_get_rate_min_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_rate_min>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_rate_max_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_rate_max_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_rate_max_arg2_t = int *;
struct snd_pcm_hw_params_get_rate_max
{
  const char* name = "snd_pcm_hw_params_get_rate_max";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_rate_max(fns::snd_pcm_hw_params_get_rate_max_arg0_t params, fns::snd_pcm_hw_params_get_rate_max_arg1_t val, fns::snd_pcm_hw_params_get_rate_max_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_rate_max>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_test_rate_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_test_rate_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_test_rate_arg2_t = unsigned int;
using snd_pcm_hw_params_test_rate_arg3_t = int;
struct snd_pcm_hw_params_test_rate
{
  const char* name = "snd_pcm_hw_params_test_rate";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
};

}

extern "C" int snd_pcm_hw_params_test_rate(fns::snd_pcm_hw_params_test_rate_arg0_t pcm, fns::snd_pcm_hw_params_test_rate_arg1_t params, fns::snd_pcm_hw_params_test_rate_arg2_t val, fns::snd_pcm_hw_params_test_rate_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_test_rate>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_rate_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_rate_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_rate_arg2_t = unsigned int;
using snd_pcm_hw_params_set_rate_arg3_t = int;
struct snd_pcm_hw_params_set_rate
{
  const char* name = "snd_pcm_hw_params_set_rate";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
};

}

extern "C" int snd_pcm_hw_params_set_rate(fns::snd_pcm_hw_params_set_rate_arg0_t pcm, fns::snd_pcm_hw_params_set_rate_arg1_t params, fns::snd_pcm_hw_params_set_rate_arg2_t val, fns::snd_pcm_hw_params_set_rate_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_rate>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_rate_min_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_rate_min_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_rate_min_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_rate_min_arg3_t = int *;
struct snd_pcm_hw_params_set_rate_min
{
  const char* name = "snd_pcm_hw_params_set_rate_min";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_rate_min(fns::snd_pcm_hw_params_set_rate_min_arg0_t pcm, fns::snd_pcm_hw_params_set_rate_min_arg1_t params, fns::snd_pcm_hw_params_set_rate_min_arg2_t val, fns::snd_pcm_hw_params_set_rate_min_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_rate_min>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_rate_max_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_rate_max_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_rate_max_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_rate_max_arg3_t = int *;
struct snd_pcm_hw_params_set_rate_max
{
  const char* name = "snd_pcm_hw_params_set_rate_max";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_rate_max(fns::snd_pcm_hw_params_set_rate_max_arg0_t pcm, fns::snd_pcm_hw_params_set_rate_max_arg1_t params, fns::snd_pcm_hw_params_set_rate_max_arg2_t val, fns::snd_pcm_hw_params_set_rate_max_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_rate_max>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_rate_minmax_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_rate_minmax_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_rate_minmax_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_rate_minmax_arg3_t = int *;
using snd_pcm_hw_params_set_rate_minmax_arg4_t = unsigned int *;
using snd_pcm_hw_params_set_rate_minmax_arg5_t = int *;
struct snd_pcm_hw_params_set_rate_minmax
{
  const char* name = "snd_pcm_hw_params_set_rate_minmax";
  const std::vector<const char*> args = {"pcm", "params", "min", "mindir", "max", "maxdir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_rate_minmax(fns::snd_pcm_hw_params_set_rate_minmax_arg0_t pcm, fns::snd_pcm_hw_params_set_rate_minmax_arg1_t params, fns::snd_pcm_hw_params_set_rate_minmax_arg2_t min, fns::snd_pcm_hw_params_set_rate_minmax_arg3_t mindir, fns::snd_pcm_hw_params_set_rate_minmax_arg4_t max, fns::snd_pcm_hw_params_set_rate_minmax_arg5_t maxdir)
{
  return fns::call<fns::snd_pcm_hw_params_set_rate_minmax>(pcm, params, min, mindir, max, maxdir);
}

namespace fns
{

using snd_pcm_hw_params_set_rate_near_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_rate_near_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_rate_near_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_rate_near_arg3_t = int *;
struct snd_pcm_hw_params_set_rate_near
{
  const char* name = "snd_pcm_hw_params_set_rate_near";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_rate_near(fns::snd_pcm_hw_params_set_rate_near_arg0_t pcm, fns::snd_pcm_hw_params_set_rate_near_arg1_t params, fns::snd_pcm_hw_params_set_rate_near_arg2_t val, fns::snd_pcm_hw_params_set_rate_near_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_rate_near>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_rate_first_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_rate_first_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_rate_first_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_rate_first_arg3_t = int *;
struct snd_pcm_hw_params_set_rate_first
{
  const char* name = "snd_pcm_hw_params_set_rate_first";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_rate_first(fns::snd_pcm_hw_params_set_rate_first_arg0_t pcm, fns::snd_pcm_hw_params_set_rate_first_arg1_t params, fns::snd_pcm_hw_params_set_rate_first_arg2_t val, fns::snd_pcm_hw_params_set_rate_first_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_rate_first>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_rate_last_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_rate_last_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_rate_last_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_rate_last_arg3_t = int *;
struct snd_pcm_hw_params_set_rate_last
{
  const char* name = "snd_pcm_hw_params_set_rate_last";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_rate_last(fns::snd_pcm_hw_params_set_rate_last_arg0_t pcm, fns::snd_pcm_hw_params_set_rate_last_arg1_t params, fns::snd_pcm_hw_params_set_rate_last_arg2_t val, fns::snd_pcm_hw_params_set_rate_last_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_rate_last>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_rate_resample_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_rate_resample_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_rate_resample_arg2_t = unsigned int;
struct snd_pcm_hw_params_set_rate_resample
{
  const char* name = "snd_pcm_hw_params_set_rate_resample";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int);
};

}

extern "C" int snd_pcm_hw_params_set_rate_resample(fns::snd_pcm_hw_params_set_rate_resample_arg0_t pcm, fns::snd_pcm_hw_params_set_rate_resample_arg1_t params, fns::snd_pcm_hw_params_set_rate_resample_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_rate_resample>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_get_rate_resample_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_get_rate_resample_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_rate_resample_arg2_t = unsigned int *;
struct snd_pcm_hw_params_get_rate_resample
{
  const char* name = "snd_pcm_hw_params_get_rate_resample";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_get_rate_resample(fns::snd_pcm_hw_params_get_rate_resample_arg0_t pcm, fns::snd_pcm_hw_params_get_rate_resample_arg1_t params, fns::snd_pcm_hw_params_get_rate_resample_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_get_rate_resample>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_export_buffer_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_export_buffer_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_export_buffer_arg2_t = unsigned int;
struct snd_pcm_hw_params_set_export_buffer
{
  const char* name = "snd_pcm_hw_params_set_export_buffer";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int);
};

}

extern "C" int snd_pcm_hw_params_set_export_buffer(fns::snd_pcm_hw_params_set_export_buffer_arg0_t pcm, fns::snd_pcm_hw_params_set_export_buffer_arg1_t params, fns::snd_pcm_hw_params_set_export_buffer_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_export_buffer>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_get_export_buffer_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_get_export_buffer_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_export_buffer_arg2_t = unsigned int *;
struct snd_pcm_hw_params_get_export_buffer
{
  const char* name = "snd_pcm_hw_params_get_export_buffer";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_get_export_buffer(fns::snd_pcm_hw_params_get_export_buffer_arg0_t pcm, fns::snd_pcm_hw_params_get_export_buffer_arg1_t params, fns::snd_pcm_hw_params_get_export_buffer_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_get_export_buffer>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_period_wakeup_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_wakeup_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_wakeup_arg2_t = unsigned int;
struct snd_pcm_hw_params_set_period_wakeup
{
  const char* name = "snd_pcm_hw_params_set_period_wakeup";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int);
};

}

extern "C" int snd_pcm_hw_params_set_period_wakeup(fns::snd_pcm_hw_params_set_period_wakeup_arg0_t pcm, fns::snd_pcm_hw_params_set_period_wakeup_arg1_t params, fns::snd_pcm_hw_params_set_period_wakeup_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_wakeup>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_get_period_wakeup_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_get_period_wakeup_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_period_wakeup_arg2_t = unsigned int *;
struct snd_pcm_hw_params_get_period_wakeup
{
  const char* name = "snd_pcm_hw_params_get_period_wakeup";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *);
};

}

extern "C" int snd_pcm_hw_params_get_period_wakeup(fns::snd_pcm_hw_params_get_period_wakeup_arg0_t pcm, fns::snd_pcm_hw_params_get_period_wakeup_arg1_t params, fns::snd_pcm_hw_params_get_period_wakeup_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_get_period_wakeup>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_get_period_time_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_period_time_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_period_time_arg2_t = int *;
struct snd_pcm_hw_params_get_period_time
{
  const char* name = "snd_pcm_hw_params_get_period_time";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_period_time(fns::snd_pcm_hw_params_get_period_time_arg0_t params, fns::snd_pcm_hw_params_get_period_time_arg1_t val, fns::snd_pcm_hw_params_get_period_time_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_period_time>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_period_time_min_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_period_time_min_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_period_time_min_arg2_t = int *;
struct snd_pcm_hw_params_get_period_time_min
{
  const char* name = "snd_pcm_hw_params_get_period_time_min";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_period_time_min(fns::snd_pcm_hw_params_get_period_time_min_arg0_t params, fns::snd_pcm_hw_params_get_period_time_min_arg1_t val, fns::snd_pcm_hw_params_get_period_time_min_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_period_time_min>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_period_time_max_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_period_time_max_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_period_time_max_arg2_t = int *;
struct snd_pcm_hw_params_get_period_time_max
{
  const char* name = "snd_pcm_hw_params_get_period_time_max";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_period_time_max(fns::snd_pcm_hw_params_get_period_time_max_arg0_t params, fns::snd_pcm_hw_params_get_period_time_max_arg1_t val, fns::snd_pcm_hw_params_get_period_time_max_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_period_time_max>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_test_period_time_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_test_period_time_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_test_period_time_arg2_t = unsigned int;
using snd_pcm_hw_params_test_period_time_arg3_t = int;
struct snd_pcm_hw_params_test_period_time
{
  const char* name = "snd_pcm_hw_params_test_period_time";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
};

}

extern "C" int snd_pcm_hw_params_test_period_time(fns::snd_pcm_hw_params_test_period_time_arg0_t pcm, fns::snd_pcm_hw_params_test_period_time_arg1_t params, fns::snd_pcm_hw_params_test_period_time_arg2_t val, fns::snd_pcm_hw_params_test_period_time_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_test_period_time>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_time_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_time_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_time_arg2_t = unsigned int;
using snd_pcm_hw_params_set_period_time_arg3_t = int;
struct snd_pcm_hw_params_set_period_time
{
  const char* name = "snd_pcm_hw_params_set_period_time";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
};

}

extern "C" int snd_pcm_hw_params_set_period_time(fns::snd_pcm_hw_params_set_period_time_arg0_t pcm, fns::snd_pcm_hw_params_set_period_time_arg1_t params, fns::snd_pcm_hw_params_set_period_time_arg2_t val, fns::snd_pcm_hw_params_set_period_time_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_time>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_time_min_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_time_min_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_time_min_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_period_time_min_arg3_t = int *;
struct snd_pcm_hw_params_set_period_time_min
{
  const char* name = "snd_pcm_hw_params_set_period_time_min";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_period_time_min(fns::snd_pcm_hw_params_set_period_time_min_arg0_t pcm, fns::snd_pcm_hw_params_set_period_time_min_arg1_t params, fns::snd_pcm_hw_params_set_period_time_min_arg2_t val, fns::snd_pcm_hw_params_set_period_time_min_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_time_min>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_time_max_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_time_max_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_time_max_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_period_time_max_arg3_t = int *;
struct snd_pcm_hw_params_set_period_time_max
{
  const char* name = "snd_pcm_hw_params_set_period_time_max";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_period_time_max(fns::snd_pcm_hw_params_set_period_time_max_arg0_t pcm, fns::snd_pcm_hw_params_set_period_time_max_arg1_t params, fns::snd_pcm_hw_params_set_period_time_max_arg2_t val, fns::snd_pcm_hw_params_set_period_time_max_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_time_max>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_time_minmax_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_time_minmax_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_time_minmax_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_period_time_minmax_arg3_t = int *;
using snd_pcm_hw_params_set_period_time_minmax_arg4_t = unsigned int *;
using snd_pcm_hw_params_set_period_time_minmax_arg5_t = int *;
struct snd_pcm_hw_params_set_period_time_minmax
{
  const char* name = "snd_pcm_hw_params_set_period_time_minmax";
  const std::vector<const char*> args = {"pcm", "params", "min", "mindir", "max", "maxdir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_period_time_minmax(fns::snd_pcm_hw_params_set_period_time_minmax_arg0_t pcm, fns::snd_pcm_hw_params_set_period_time_minmax_arg1_t params, fns::snd_pcm_hw_params_set_period_time_minmax_arg2_t min, fns::snd_pcm_hw_params_set_period_time_minmax_arg3_t mindir, fns::snd_pcm_hw_params_set_period_time_minmax_arg4_t max, fns::snd_pcm_hw_params_set_period_time_minmax_arg5_t maxdir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_time_minmax>(pcm, params, min, mindir, max, maxdir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_time_near_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_time_near_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_time_near_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_period_time_near_arg3_t = int *;
struct snd_pcm_hw_params_set_period_time_near
{
  const char* name = "snd_pcm_hw_params_set_period_time_near";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_period_time_near(fns::snd_pcm_hw_params_set_period_time_near_arg0_t pcm, fns::snd_pcm_hw_params_set_period_time_near_arg1_t params, fns::snd_pcm_hw_params_set_period_time_near_arg2_t val, fns::snd_pcm_hw_params_set_period_time_near_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_time_near>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_time_first_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_time_first_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_time_first_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_period_time_first_arg3_t = int *;
struct snd_pcm_hw_params_set_period_time_first
{
  const char* name = "snd_pcm_hw_params_set_period_time_first";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_period_time_first(fns::snd_pcm_hw_params_set_period_time_first_arg0_t pcm, fns::snd_pcm_hw_params_set_period_time_first_arg1_t params, fns::snd_pcm_hw_params_set_period_time_first_arg2_t val, fns::snd_pcm_hw_params_set_period_time_first_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_time_first>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_time_last_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_time_last_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_time_last_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_period_time_last_arg3_t = int *;
struct snd_pcm_hw_params_set_period_time_last
{
  const char* name = "snd_pcm_hw_params_set_period_time_last";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_period_time_last(fns::snd_pcm_hw_params_set_period_time_last_arg0_t pcm, fns::snd_pcm_hw_params_set_period_time_last_arg1_t params, fns::snd_pcm_hw_params_set_period_time_last_arg2_t val, fns::snd_pcm_hw_params_set_period_time_last_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_time_last>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_period_size_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_period_size_arg1_t = snd_pcm_uframes_t *;
using snd_pcm_hw_params_get_period_size_arg2_t = int *;
struct snd_pcm_hw_params_get_period_size
{
  const char* name = "snd_pcm_hw_params_get_period_size";
  const std::vector<const char*> args = {"params", "frames", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_period_size(fns::snd_pcm_hw_params_get_period_size_arg0_t params, fns::snd_pcm_hw_params_get_period_size_arg1_t frames, fns::snd_pcm_hw_params_get_period_size_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_period_size>(params, frames, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_period_size_min_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_period_size_min_arg1_t = snd_pcm_uframes_t *;
using snd_pcm_hw_params_get_period_size_min_arg2_t = int *;
struct snd_pcm_hw_params_get_period_size_min
{
  const char* name = "snd_pcm_hw_params_get_period_size_min";
  const std::vector<const char*> args = {"params", "frames", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_period_size_min(fns::snd_pcm_hw_params_get_period_size_min_arg0_t params, fns::snd_pcm_hw_params_get_period_size_min_arg1_t frames, fns::snd_pcm_hw_params_get_period_size_min_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_period_size_min>(params, frames, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_period_size_max_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_period_size_max_arg1_t = snd_pcm_uframes_t *;
using snd_pcm_hw_params_get_period_size_max_arg2_t = int *;
struct snd_pcm_hw_params_get_period_size_max
{
  const char* name = "snd_pcm_hw_params_get_period_size_max";
  const std::vector<const char*> args = {"params", "frames", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_period_size_max(fns::snd_pcm_hw_params_get_period_size_max_arg0_t params, fns::snd_pcm_hw_params_get_period_size_max_arg1_t frames, fns::snd_pcm_hw_params_get_period_size_max_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_period_size_max>(params, frames, dir);
}

namespace fns
{

using snd_pcm_hw_params_test_period_size_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_test_period_size_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_test_period_size_arg2_t = snd_pcm_uframes_t;
using snd_pcm_hw_params_test_period_size_arg3_t = int;
struct snd_pcm_hw_params_test_period_size
{
  const char* name = "snd_pcm_hw_params_test_period_size";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t, int);
};

}

extern "C" int snd_pcm_hw_params_test_period_size(fns::snd_pcm_hw_params_test_period_size_arg0_t pcm, fns::snd_pcm_hw_params_test_period_size_arg1_t params, fns::snd_pcm_hw_params_test_period_size_arg2_t val, fns::snd_pcm_hw_params_test_period_size_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_test_period_size>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_size_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_size_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_size_arg2_t = snd_pcm_uframes_t;
using snd_pcm_hw_params_set_period_size_arg3_t = int;
struct snd_pcm_hw_params_set_period_size
{
  const char* name = "snd_pcm_hw_params_set_period_size";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t, int);
};

}

extern "C" int snd_pcm_hw_params_set_period_size(fns::snd_pcm_hw_params_set_period_size_arg0_t pcm, fns::snd_pcm_hw_params_set_period_size_arg1_t params, fns::snd_pcm_hw_params_set_period_size_arg2_t val, fns::snd_pcm_hw_params_set_period_size_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_size>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_size_min_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_size_min_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_size_min_arg2_t = snd_pcm_uframes_t *;
using snd_pcm_hw_params_set_period_size_min_arg3_t = int *;
struct snd_pcm_hw_params_set_period_size_min
{
  const char* name = "snd_pcm_hw_params_set_period_size_min";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_period_size_min(fns::snd_pcm_hw_params_set_period_size_min_arg0_t pcm, fns::snd_pcm_hw_params_set_period_size_min_arg1_t params, fns::snd_pcm_hw_params_set_period_size_min_arg2_t val, fns::snd_pcm_hw_params_set_period_size_min_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_size_min>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_size_max_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_size_max_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_size_max_arg2_t = snd_pcm_uframes_t *;
using snd_pcm_hw_params_set_period_size_max_arg3_t = int *;
struct snd_pcm_hw_params_set_period_size_max
{
  const char* name = "snd_pcm_hw_params_set_period_size_max";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_period_size_max(fns::snd_pcm_hw_params_set_period_size_max_arg0_t pcm, fns::snd_pcm_hw_params_set_period_size_max_arg1_t params, fns::snd_pcm_hw_params_set_period_size_max_arg2_t val, fns::snd_pcm_hw_params_set_period_size_max_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_size_max>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_size_minmax_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_size_minmax_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_size_minmax_arg2_t = snd_pcm_uframes_t *;
using snd_pcm_hw_params_set_period_size_minmax_arg3_t = int *;
using snd_pcm_hw_params_set_period_size_minmax_arg4_t = snd_pcm_uframes_t *;
using snd_pcm_hw_params_set_period_size_minmax_arg5_t = int *;
struct snd_pcm_hw_params_set_period_size_minmax
{
  const char* name = "snd_pcm_hw_params_set_period_size_minmax";
  const std::vector<const char*> args = {"pcm", "params", "min", "mindir", "max", "maxdir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *, snd_pcm_uframes_t *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_period_size_minmax(fns::snd_pcm_hw_params_set_period_size_minmax_arg0_t pcm, fns::snd_pcm_hw_params_set_period_size_minmax_arg1_t params, fns::snd_pcm_hw_params_set_period_size_minmax_arg2_t min, fns::snd_pcm_hw_params_set_period_size_minmax_arg3_t mindir, fns::snd_pcm_hw_params_set_period_size_minmax_arg4_t max, fns::snd_pcm_hw_params_set_period_size_minmax_arg5_t maxdir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_size_minmax>(pcm, params, min, mindir, max, maxdir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_size_near_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_size_near_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_size_near_arg2_t = snd_pcm_uframes_t *;
using snd_pcm_hw_params_set_period_size_near_arg3_t = int *;
struct snd_pcm_hw_params_set_period_size_near
{
  const char* name = "snd_pcm_hw_params_set_period_size_near";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_period_size_near(fns::snd_pcm_hw_params_set_period_size_near_arg0_t pcm, fns::snd_pcm_hw_params_set_period_size_near_arg1_t params, fns::snd_pcm_hw_params_set_period_size_near_arg2_t val, fns::snd_pcm_hw_params_set_period_size_near_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_size_near>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_size_first_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_size_first_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_size_first_arg2_t = snd_pcm_uframes_t *;
using snd_pcm_hw_params_set_period_size_first_arg3_t = int *;
struct snd_pcm_hw_params_set_period_size_first
{
  const char* name = "snd_pcm_hw_params_set_period_size_first";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_period_size_first(fns::snd_pcm_hw_params_set_period_size_first_arg0_t pcm, fns::snd_pcm_hw_params_set_period_size_first_arg1_t params, fns::snd_pcm_hw_params_set_period_size_first_arg2_t val, fns::snd_pcm_hw_params_set_period_size_first_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_size_first>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_size_last_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_size_last_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_period_size_last_arg2_t = snd_pcm_uframes_t *;
using snd_pcm_hw_params_set_period_size_last_arg3_t = int *;
struct snd_pcm_hw_params_set_period_size_last
{
  const char* name = "snd_pcm_hw_params_set_period_size_last";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_period_size_last(fns::snd_pcm_hw_params_set_period_size_last_arg0_t pcm, fns::snd_pcm_hw_params_set_period_size_last_arg1_t params, fns::snd_pcm_hw_params_set_period_size_last_arg2_t val, fns::snd_pcm_hw_params_set_period_size_last_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_size_last>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_period_size_integer_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_period_size_integer_arg1_t = snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_set_period_size_integer
{
  const char* name = "snd_pcm_hw_params_set_period_size_integer";
  const std::vector<const char*> args = {"pcm", "params"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_set_period_size_integer(fns::snd_pcm_hw_params_set_period_size_integer_arg0_t pcm, fns::snd_pcm_hw_params_set_period_size_integer_arg1_t params)
{
  return fns::call<fns::snd_pcm_hw_params_set_period_size_integer>(pcm, params);
}

namespace fns
{

using snd_pcm_hw_params_get_periods_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_periods_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_periods_arg2_t = int *;
struct snd_pcm_hw_params_get_periods
{
  const char* name = "snd_pcm_hw_params_get_periods";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_periods(fns::snd_pcm_hw_params_get_periods_arg0_t params, fns::snd_pcm_hw_params_get_periods_arg1_t val, fns::snd_pcm_hw_params_get_periods_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_periods>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_periods_min_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_periods_min_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_periods_min_arg2_t = int *;
struct snd_pcm_hw_params_get_periods_min
{
  const char* name = "snd_pcm_hw_params_get_periods_min";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_periods_min(fns::snd_pcm_hw_params_get_periods_min_arg0_t params, fns::snd_pcm_hw_params_get_periods_min_arg1_t val, fns::snd_pcm_hw_params_get_periods_min_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_periods_min>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_periods_max_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_periods_max_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_periods_max_arg2_t = int *;
struct snd_pcm_hw_params_get_periods_max
{
  const char* name = "snd_pcm_hw_params_get_periods_max";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_periods_max(fns::snd_pcm_hw_params_get_periods_max_arg0_t params, fns::snd_pcm_hw_params_get_periods_max_arg1_t val, fns::snd_pcm_hw_params_get_periods_max_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_periods_max>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_test_periods_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_test_periods_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_test_periods_arg2_t = unsigned int;
using snd_pcm_hw_params_test_periods_arg3_t = int;
struct snd_pcm_hw_params_test_periods
{
  const char* name = "snd_pcm_hw_params_test_periods";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
};

}

extern "C" int snd_pcm_hw_params_test_periods(fns::snd_pcm_hw_params_test_periods_arg0_t pcm, fns::snd_pcm_hw_params_test_periods_arg1_t params, fns::snd_pcm_hw_params_test_periods_arg2_t val, fns::snd_pcm_hw_params_test_periods_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_test_periods>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_periods_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_periods_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_periods_arg2_t = unsigned int;
using snd_pcm_hw_params_set_periods_arg3_t = int;
struct snd_pcm_hw_params_set_periods
{
  const char* name = "snd_pcm_hw_params_set_periods";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
};

}

extern "C" int snd_pcm_hw_params_set_periods(fns::snd_pcm_hw_params_set_periods_arg0_t pcm, fns::snd_pcm_hw_params_set_periods_arg1_t params, fns::snd_pcm_hw_params_set_periods_arg2_t val, fns::snd_pcm_hw_params_set_periods_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_periods>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_periods_min_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_periods_min_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_periods_min_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_periods_min_arg3_t = int *;
struct snd_pcm_hw_params_set_periods_min
{
  const char* name = "snd_pcm_hw_params_set_periods_min";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_periods_min(fns::snd_pcm_hw_params_set_periods_min_arg0_t pcm, fns::snd_pcm_hw_params_set_periods_min_arg1_t params, fns::snd_pcm_hw_params_set_periods_min_arg2_t val, fns::snd_pcm_hw_params_set_periods_min_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_periods_min>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_periods_max_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_periods_max_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_periods_max_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_periods_max_arg3_t = int *;
struct snd_pcm_hw_params_set_periods_max
{
  const char* name = "snd_pcm_hw_params_set_periods_max";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_periods_max(fns::snd_pcm_hw_params_set_periods_max_arg0_t pcm, fns::snd_pcm_hw_params_set_periods_max_arg1_t params, fns::snd_pcm_hw_params_set_periods_max_arg2_t val, fns::snd_pcm_hw_params_set_periods_max_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_periods_max>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_periods_minmax_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_periods_minmax_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_periods_minmax_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_periods_minmax_arg3_t = int *;
using snd_pcm_hw_params_set_periods_minmax_arg4_t = unsigned int *;
using snd_pcm_hw_params_set_periods_minmax_arg5_t = int *;
struct snd_pcm_hw_params_set_periods_minmax
{
  const char* name = "snd_pcm_hw_params_set_periods_minmax";
  const std::vector<const char*> args = {"pcm", "params", "min", "mindir", "max", "maxdir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_periods_minmax(fns::snd_pcm_hw_params_set_periods_minmax_arg0_t pcm, fns::snd_pcm_hw_params_set_periods_minmax_arg1_t params, fns::snd_pcm_hw_params_set_periods_minmax_arg2_t min, fns::snd_pcm_hw_params_set_periods_minmax_arg3_t mindir, fns::snd_pcm_hw_params_set_periods_minmax_arg4_t max, fns::snd_pcm_hw_params_set_periods_minmax_arg5_t maxdir)
{
  return fns::call<fns::snd_pcm_hw_params_set_periods_minmax>(pcm, params, min, mindir, max, maxdir);
}

namespace fns
{

using snd_pcm_hw_params_set_periods_near_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_periods_near_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_periods_near_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_periods_near_arg3_t = int *;
struct snd_pcm_hw_params_set_periods_near
{
  const char* name = "snd_pcm_hw_params_set_periods_near";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_periods_near(fns::snd_pcm_hw_params_set_periods_near_arg0_t pcm, fns::snd_pcm_hw_params_set_periods_near_arg1_t params, fns::snd_pcm_hw_params_set_periods_near_arg2_t val, fns::snd_pcm_hw_params_set_periods_near_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_periods_near>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_periods_first_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_periods_first_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_periods_first_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_periods_first_arg3_t = int *;
struct snd_pcm_hw_params_set_periods_first
{
  const char* name = "snd_pcm_hw_params_set_periods_first";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_periods_first(fns::snd_pcm_hw_params_set_periods_first_arg0_t pcm, fns::snd_pcm_hw_params_set_periods_first_arg1_t params, fns::snd_pcm_hw_params_set_periods_first_arg2_t val, fns::snd_pcm_hw_params_set_periods_first_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_periods_first>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_periods_last_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_periods_last_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_periods_last_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_periods_last_arg3_t = int *;
struct snd_pcm_hw_params_set_periods_last
{
  const char* name = "snd_pcm_hw_params_set_periods_last";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_periods_last(fns::snd_pcm_hw_params_set_periods_last_arg0_t pcm, fns::snd_pcm_hw_params_set_periods_last_arg1_t params, fns::snd_pcm_hw_params_set_periods_last_arg2_t val, fns::snd_pcm_hw_params_set_periods_last_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_periods_last>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_periods_integer_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_periods_integer_arg1_t = snd_pcm_hw_params_t *;
struct snd_pcm_hw_params_set_periods_integer
{
  const char* name = "snd_pcm_hw_params_set_periods_integer";
  const std::vector<const char*> args = {"pcm", "params"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *);
};

}

extern "C" int snd_pcm_hw_params_set_periods_integer(fns::snd_pcm_hw_params_set_periods_integer_arg0_t pcm, fns::snd_pcm_hw_params_set_periods_integer_arg1_t params)
{
  return fns::call<fns::snd_pcm_hw_params_set_periods_integer>(pcm, params);
}

namespace fns
{

using snd_pcm_hw_params_get_buffer_time_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_buffer_time_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_buffer_time_arg2_t = int *;
struct snd_pcm_hw_params_get_buffer_time
{
  const char* name = "snd_pcm_hw_params_get_buffer_time";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_buffer_time(fns::snd_pcm_hw_params_get_buffer_time_arg0_t params, fns::snd_pcm_hw_params_get_buffer_time_arg1_t val, fns::snd_pcm_hw_params_get_buffer_time_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_buffer_time>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_buffer_time_min_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_buffer_time_min_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_buffer_time_min_arg2_t = int *;
struct snd_pcm_hw_params_get_buffer_time_min
{
  const char* name = "snd_pcm_hw_params_get_buffer_time_min";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_buffer_time_min(fns::snd_pcm_hw_params_get_buffer_time_min_arg0_t params, fns::snd_pcm_hw_params_get_buffer_time_min_arg1_t val, fns::snd_pcm_hw_params_get_buffer_time_min_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_buffer_time_min>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_buffer_time_max_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_buffer_time_max_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_buffer_time_max_arg2_t = int *;
struct snd_pcm_hw_params_get_buffer_time_max
{
  const char* name = "snd_pcm_hw_params_get_buffer_time_max";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_buffer_time_max(fns::snd_pcm_hw_params_get_buffer_time_max_arg0_t params, fns::snd_pcm_hw_params_get_buffer_time_max_arg1_t val, fns::snd_pcm_hw_params_get_buffer_time_max_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_buffer_time_max>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_test_buffer_time_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_test_buffer_time_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_test_buffer_time_arg2_t = unsigned int;
using snd_pcm_hw_params_test_buffer_time_arg3_t = int;
struct snd_pcm_hw_params_test_buffer_time
{
  const char* name = "snd_pcm_hw_params_test_buffer_time";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
};

}

extern "C" int snd_pcm_hw_params_test_buffer_time(fns::snd_pcm_hw_params_test_buffer_time_arg0_t pcm, fns::snd_pcm_hw_params_test_buffer_time_arg1_t params, fns::snd_pcm_hw_params_test_buffer_time_arg2_t val, fns::snd_pcm_hw_params_test_buffer_time_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_test_buffer_time>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_time_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_time_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_time_arg2_t = unsigned int;
using snd_pcm_hw_params_set_buffer_time_arg3_t = int;
struct snd_pcm_hw_params_set_buffer_time
{
  const char* name = "snd_pcm_hw_params_set_buffer_time";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_time(fns::snd_pcm_hw_params_set_buffer_time_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_time_arg1_t params, fns::snd_pcm_hw_params_set_buffer_time_arg2_t val, fns::snd_pcm_hw_params_set_buffer_time_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_time>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_time_min_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_time_min_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_time_min_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_buffer_time_min_arg3_t = int *;
struct snd_pcm_hw_params_set_buffer_time_min
{
  const char* name = "snd_pcm_hw_params_set_buffer_time_min";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_time_min(fns::snd_pcm_hw_params_set_buffer_time_min_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_time_min_arg1_t params, fns::snd_pcm_hw_params_set_buffer_time_min_arg2_t val, fns::snd_pcm_hw_params_set_buffer_time_min_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_time_min>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_time_max_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_time_max_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_time_max_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_buffer_time_max_arg3_t = int *;
struct snd_pcm_hw_params_set_buffer_time_max
{
  const char* name = "snd_pcm_hw_params_set_buffer_time_max";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_time_max(fns::snd_pcm_hw_params_set_buffer_time_max_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_time_max_arg1_t params, fns::snd_pcm_hw_params_set_buffer_time_max_arg2_t val, fns::snd_pcm_hw_params_set_buffer_time_max_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_time_max>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_time_minmax_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_time_minmax_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_time_minmax_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_buffer_time_minmax_arg3_t = int *;
using snd_pcm_hw_params_set_buffer_time_minmax_arg4_t = unsigned int *;
using snd_pcm_hw_params_set_buffer_time_minmax_arg5_t = int *;
struct snd_pcm_hw_params_set_buffer_time_minmax
{
  const char* name = "snd_pcm_hw_params_set_buffer_time_minmax";
  const std::vector<const char*> args = {"pcm", "params", "min", "mindir", "max", "maxdir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_time_minmax(fns::snd_pcm_hw_params_set_buffer_time_minmax_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_time_minmax_arg1_t params, fns::snd_pcm_hw_params_set_buffer_time_minmax_arg2_t min, fns::snd_pcm_hw_params_set_buffer_time_minmax_arg3_t mindir, fns::snd_pcm_hw_params_set_buffer_time_minmax_arg4_t max, fns::snd_pcm_hw_params_set_buffer_time_minmax_arg5_t maxdir)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_time_minmax>(pcm, params, min, mindir, max, maxdir);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_time_near_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_time_near_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_time_near_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_buffer_time_near_arg3_t = int *;
struct snd_pcm_hw_params_set_buffer_time_near
{
  const char* name = "snd_pcm_hw_params_set_buffer_time_near";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_time_near(fns::snd_pcm_hw_params_set_buffer_time_near_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_time_near_arg1_t params, fns::snd_pcm_hw_params_set_buffer_time_near_arg2_t val, fns::snd_pcm_hw_params_set_buffer_time_near_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_time_near>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_time_first_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_time_first_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_time_first_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_buffer_time_first_arg3_t = int *;
struct snd_pcm_hw_params_set_buffer_time_first
{
  const char* name = "snd_pcm_hw_params_set_buffer_time_first";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_time_first(fns::snd_pcm_hw_params_set_buffer_time_first_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_time_first_arg1_t params, fns::snd_pcm_hw_params_set_buffer_time_first_arg2_t val, fns::snd_pcm_hw_params_set_buffer_time_first_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_time_first>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_time_last_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_time_last_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_time_last_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_buffer_time_last_arg3_t = int *;
struct snd_pcm_hw_params_set_buffer_time_last
{
  const char* name = "snd_pcm_hw_params_set_buffer_time_last";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_time_last(fns::snd_pcm_hw_params_set_buffer_time_last_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_time_last_arg1_t params, fns::snd_pcm_hw_params_set_buffer_time_last_arg2_t val, fns::snd_pcm_hw_params_set_buffer_time_last_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_time_last>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_buffer_size_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_buffer_size_arg1_t = snd_pcm_uframes_t *;
struct snd_pcm_hw_params_get_buffer_size
{
  const char* name = "snd_pcm_hw_params_get_buffer_size";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_hw_params_get_buffer_size(fns::snd_pcm_hw_params_get_buffer_size_arg0_t params, fns::snd_pcm_hw_params_get_buffer_size_arg1_t val)
{
  return fns::call<fns::snd_pcm_hw_params_get_buffer_size>(params, val);
}

namespace fns
{

using snd_pcm_hw_params_get_buffer_size_min_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_buffer_size_min_arg1_t = snd_pcm_uframes_t *;
struct snd_pcm_hw_params_get_buffer_size_min
{
  const char* name = "snd_pcm_hw_params_get_buffer_size_min";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_hw_params_get_buffer_size_min(fns::snd_pcm_hw_params_get_buffer_size_min_arg0_t params, fns::snd_pcm_hw_params_get_buffer_size_min_arg1_t val)
{
  return fns::call<fns::snd_pcm_hw_params_get_buffer_size_min>(params, val);
}

namespace fns
{

using snd_pcm_hw_params_get_buffer_size_max_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_buffer_size_max_arg1_t = snd_pcm_uframes_t *;
struct snd_pcm_hw_params_get_buffer_size_max
{
  const char* name = "snd_pcm_hw_params_get_buffer_size_max";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_hw_params_get_buffer_size_max(fns::snd_pcm_hw_params_get_buffer_size_max_arg0_t params, fns::snd_pcm_hw_params_get_buffer_size_max_arg1_t val)
{
  return fns::call<fns::snd_pcm_hw_params_get_buffer_size_max>(params, val);
}

namespace fns
{

using snd_pcm_hw_params_test_buffer_size_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_test_buffer_size_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_test_buffer_size_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_hw_params_test_buffer_size
{
  const char* name = "snd_pcm_hw_params_test_buffer_size";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t);
};

}

extern "C" int snd_pcm_hw_params_test_buffer_size(fns::snd_pcm_hw_params_test_buffer_size_arg0_t pcm, fns::snd_pcm_hw_params_test_buffer_size_arg1_t params, fns::snd_pcm_hw_params_test_buffer_size_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_test_buffer_size>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_size_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_size_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_size_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_hw_params_set_buffer_size
{
  const char* name = "snd_pcm_hw_params_set_buffer_size";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_size(fns::snd_pcm_hw_params_set_buffer_size_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_size_arg1_t params, fns::snd_pcm_hw_params_set_buffer_size_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_size>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_size_min_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_size_min_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_size_min_arg2_t = snd_pcm_uframes_t *;
struct snd_pcm_hw_params_set_buffer_size_min
{
  const char* name = "snd_pcm_hw_params_set_buffer_size_min";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_size_min(fns::snd_pcm_hw_params_set_buffer_size_min_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_size_min_arg1_t params, fns::snd_pcm_hw_params_set_buffer_size_min_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_size_min>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_size_max_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_size_max_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_size_max_arg2_t = snd_pcm_uframes_t *;
struct snd_pcm_hw_params_set_buffer_size_max
{
  const char* name = "snd_pcm_hw_params_set_buffer_size_max";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_size_max(fns::snd_pcm_hw_params_set_buffer_size_max_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_size_max_arg1_t params, fns::snd_pcm_hw_params_set_buffer_size_max_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_size_max>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_size_minmax_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_size_minmax_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_size_minmax_arg2_t = snd_pcm_uframes_t *;
using snd_pcm_hw_params_set_buffer_size_minmax_arg3_t = snd_pcm_uframes_t *;
struct snd_pcm_hw_params_set_buffer_size_minmax
{
  const char* name = "snd_pcm_hw_params_set_buffer_size_minmax";
  const std::vector<const char*> args = {"pcm", "params", "min", "max"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_size_minmax(fns::snd_pcm_hw_params_set_buffer_size_minmax_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_size_minmax_arg1_t params, fns::snd_pcm_hw_params_set_buffer_size_minmax_arg2_t min, fns::snd_pcm_hw_params_set_buffer_size_minmax_arg3_t max)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_size_minmax>(pcm, params, min, max);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_size_near_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_size_near_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_size_near_arg2_t = snd_pcm_uframes_t *;
struct snd_pcm_hw_params_set_buffer_size_near
{
  const char* name = "snd_pcm_hw_params_set_buffer_size_near";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_size_near(fns::snd_pcm_hw_params_set_buffer_size_near_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_size_near_arg1_t params, fns::snd_pcm_hw_params_set_buffer_size_near_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_size_near>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_size_first_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_size_first_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_size_first_arg2_t = snd_pcm_uframes_t *;
struct snd_pcm_hw_params_set_buffer_size_first
{
  const char* name = "snd_pcm_hw_params_set_buffer_size_first";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_size_first(fns::snd_pcm_hw_params_set_buffer_size_first_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_size_first_arg1_t params, fns::snd_pcm_hw_params_set_buffer_size_first_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_size_first>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_set_buffer_size_last_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_buffer_size_last_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_buffer_size_last_arg2_t = snd_pcm_uframes_t *;
struct snd_pcm_hw_params_set_buffer_size_last
{
  const char* name = "snd_pcm_hw_params_set_buffer_size_last";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_hw_params_set_buffer_size_last(fns::snd_pcm_hw_params_set_buffer_size_last_arg0_t pcm, fns::snd_pcm_hw_params_set_buffer_size_last_arg1_t params, fns::snd_pcm_hw_params_set_buffer_size_last_arg2_t val)
{
  return fns::call<fns::snd_pcm_hw_params_set_buffer_size_last>(pcm, params, val);
}

namespace fns
{

using snd_pcm_hw_params_get_min_align_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_min_align_arg1_t = snd_pcm_uframes_t *;
struct snd_pcm_hw_params_get_min_align
{
  const char* name = "snd_pcm_hw_params_get_min_align";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_hw_params_get_min_align(fns::snd_pcm_hw_params_get_min_align_arg0_t params, fns::snd_pcm_hw_params_get_min_align_arg1_t val)
{
  return fns::call<fns::snd_pcm_hw_params_get_min_align>(params, val);
}

namespace fns
{

struct snd_pcm_sw_params_sizeof
{
  const char* name = "snd_pcm_sw_params_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_pcm_sw_params_sizeof()
{
  return fns::call<fns::snd_pcm_sw_params_sizeof>();
}

namespace fns
{

using snd_pcm_sw_params_malloc_arg0_t = snd_pcm_sw_params_t **;
struct snd_pcm_sw_params_malloc
{
  const char* name = "snd_pcm_sw_params_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_pcm_sw_params_t **);
};

}

extern "C" int snd_pcm_sw_params_malloc(fns::snd_pcm_sw_params_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_pcm_sw_params_malloc>(ptr);
}

namespace fns
{

using snd_pcm_sw_params_free_arg0_t = snd_pcm_sw_params_t *;
struct snd_pcm_sw_params_free
{
  const char* name = "snd_pcm_sw_params_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_pcm_sw_params_t *);
};

}

extern "C" void snd_pcm_sw_params_free(fns::snd_pcm_sw_params_free_arg0_t obj)
{
  return fns::call_void<fns::snd_pcm_sw_params_free>(obj);
}

namespace fns
{

using snd_pcm_sw_params_copy_arg0_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_copy_arg1_t = const snd_pcm_sw_params_t *;
struct snd_pcm_sw_params_copy
{
  const char* name = "snd_pcm_sw_params_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_pcm_sw_params_t *, const snd_pcm_sw_params_t *);
};

}

extern "C" void snd_pcm_sw_params_copy(fns::snd_pcm_sw_params_copy_arg0_t dst, fns::snd_pcm_sw_params_copy_arg1_t src)
{
  return fns::call_void<fns::snd_pcm_sw_params_copy>(dst, src);
}

namespace fns
{

using snd_pcm_sw_params_get_boundary_arg0_t = const snd_pcm_sw_params_t *;
using snd_pcm_sw_params_get_boundary_arg1_t = snd_pcm_uframes_t *;
struct snd_pcm_sw_params_get_boundary
{
  const char* name = "snd_pcm_sw_params_get_boundary";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_sw_params_get_boundary(fns::snd_pcm_sw_params_get_boundary_arg0_t params, fns::snd_pcm_sw_params_get_boundary_arg1_t val)
{
  return fns::call<fns::snd_pcm_sw_params_get_boundary>(params, val);
}

namespace fns
{

using snd_pcm_sw_params_set_tstamp_mode_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_set_tstamp_mode_arg1_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_set_tstamp_mode_arg2_t = snd_pcm_tstamp_t;
struct snd_pcm_sw_params_set_tstamp_mode
{
  const char* name = "snd_pcm_sw_params_set_tstamp_mode";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_tstamp_t);
};

}

extern "C" int snd_pcm_sw_params_set_tstamp_mode(fns::snd_pcm_sw_params_set_tstamp_mode_arg0_t pcm, fns::snd_pcm_sw_params_set_tstamp_mode_arg1_t params, fns::snd_pcm_sw_params_set_tstamp_mode_arg2_t val)
{
  return fns::call<fns::snd_pcm_sw_params_set_tstamp_mode>(pcm, params, val);
}

namespace fns
{

using snd_pcm_sw_params_get_tstamp_mode_arg0_t = const snd_pcm_sw_params_t *;
using snd_pcm_sw_params_get_tstamp_mode_arg1_t = snd_pcm_tstamp_t *;
struct snd_pcm_sw_params_get_tstamp_mode
{
  const char* name = "snd_pcm_sw_params_get_tstamp_mode";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_sw_params_t *, snd_pcm_tstamp_t *);
};

}

extern "C" int snd_pcm_sw_params_get_tstamp_mode(fns::snd_pcm_sw_params_get_tstamp_mode_arg0_t params, fns::snd_pcm_sw_params_get_tstamp_mode_arg1_t val)
{
  return fns::call<fns::snd_pcm_sw_params_get_tstamp_mode>(params, val);
}

namespace fns
{

using snd_pcm_sw_params_set_tstamp_type_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_set_tstamp_type_arg1_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_set_tstamp_type_arg2_t = snd_pcm_tstamp_type_t;
struct snd_pcm_sw_params_set_tstamp_type
{
  const char* name = "snd_pcm_sw_params_set_tstamp_type";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_tstamp_type_t);
};

}

extern "C" int snd_pcm_sw_params_set_tstamp_type(fns::snd_pcm_sw_params_set_tstamp_type_arg0_t pcm, fns::snd_pcm_sw_params_set_tstamp_type_arg1_t params, fns::snd_pcm_sw_params_set_tstamp_type_arg2_t val)
{
  return fns::call<fns::snd_pcm_sw_params_set_tstamp_type>(pcm, params, val);
}

namespace fns
{

using snd_pcm_sw_params_get_tstamp_type_arg0_t = const snd_pcm_sw_params_t *;
using snd_pcm_sw_params_get_tstamp_type_arg1_t = snd_pcm_tstamp_type_t *;
struct snd_pcm_sw_params_get_tstamp_type
{
  const char* name = "snd_pcm_sw_params_get_tstamp_type";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_sw_params_t *, snd_pcm_tstamp_type_t *);
};

}

extern "C" int snd_pcm_sw_params_get_tstamp_type(fns::snd_pcm_sw_params_get_tstamp_type_arg0_t params, fns::snd_pcm_sw_params_get_tstamp_type_arg1_t val)
{
  return fns::call<fns::snd_pcm_sw_params_get_tstamp_type>(params, val);
}

namespace fns
{

using snd_pcm_sw_params_set_avail_min_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_set_avail_min_arg1_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_set_avail_min_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_sw_params_set_avail_min
{
  const char* name = "snd_pcm_sw_params_set_avail_min";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
};

}

extern "C" int snd_pcm_sw_params_set_avail_min(fns::snd_pcm_sw_params_set_avail_min_arg0_t pcm, fns::snd_pcm_sw_params_set_avail_min_arg1_t params, fns::snd_pcm_sw_params_set_avail_min_arg2_t val)
{
  return fns::call<fns::snd_pcm_sw_params_set_avail_min>(pcm, params, val);
}

namespace fns
{

using snd_pcm_sw_params_get_avail_min_arg0_t = const snd_pcm_sw_params_t *;
using snd_pcm_sw_params_get_avail_min_arg1_t = snd_pcm_uframes_t *;
struct snd_pcm_sw_params_get_avail_min
{
  const char* name = "snd_pcm_sw_params_get_avail_min";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_sw_params_get_avail_min(fns::snd_pcm_sw_params_get_avail_min_arg0_t params, fns::snd_pcm_sw_params_get_avail_min_arg1_t val)
{
  return fns::call<fns::snd_pcm_sw_params_get_avail_min>(params, val);
}

namespace fns
{

using snd_pcm_sw_params_set_period_event_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_set_period_event_arg1_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_set_period_event_arg2_t = int;
struct snd_pcm_sw_params_set_period_event
{
  const char* name = "snd_pcm_sw_params_set_period_event";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *, int);
};

}

extern "C" int snd_pcm_sw_params_set_period_event(fns::snd_pcm_sw_params_set_period_event_arg0_t pcm, fns::snd_pcm_sw_params_set_period_event_arg1_t params, fns::snd_pcm_sw_params_set_period_event_arg2_t val)
{
  return fns::call<fns::snd_pcm_sw_params_set_period_event>(pcm, params, val);
}

namespace fns
{

using snd_pcm_sw_params_get_period_event_arg0_t = const snd_pcm_sw_params_t *;
using snd_pcm_sw_params_get_period_event_arg1_t = int *;
struct snd_pcm_sw_params_get_period_event
{
  const char* name = "snd_pcm_sw_params_get_period_event";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_sw_params_t *, int *);
};

}

extern "C" int snd_pcm_sw_params_get_period_event(fns::snd_pcm_sw_params_get_period_event_arg0_t params, fns::snd_pcm_sw_params_get_period_event_arg1_t val)
{
  return fns::call<fns::snd_pcm_sw_params_get_period_event>(params, val);
}

namespace fns
{

using snd_pcm_sw_params_set_start_threshold_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_set_start_threshold_arg1_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_set_start_threshold_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_sw_params_set_start_threshold
{
  const char* name = "snd_pcm_sw_params_set_start_threshold";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
};

}

extern "C" int snd_pcm_sw_params_set_start_threshold(fns::snd_pcm_sw_params_set_start_threshold_arg0_t pcm, fns::snd_pcm_sw_params_set_start_threshold_arg1_t params, fns::snd_pcm_sw_params_set_start_threshold_arg2_t val)
{
  return fns::call<fns::snd_pcm_sw_params_set_start_threshold>(pcm, params, val);
}

namespace fns
{

using snd_pcm_sw_params_get_start_threshold_arg0_t = const snd_pcm_sw_params_t *;
using snd_pcm_sw_params_get_start_threshold_arg1_t = snd_pcm_uframes_t *;
struct snd_pcm_sw_params_get_start_threshold
{
  const char* name = "snd_pcm_sw_params_get_start_threshold";
  const std::vector<const char*> args = {"paramsm", "val"};
  using type = int(*)(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_sw_params_get_start_threshold(fns::snd_pcm_sw_params_get_start_threshold_arg0_t paramsm, fns::snd_pcm_sw_params_get_start_threshold_arg1_t val)
{
  return fns::call<fns::snd_pcm_sw_params_get_start_threshold>(paramsm, val);
}

namespace fns
{

using snd_pcm_sw_params_set_stop_threshold_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_set_stop_threshold_arg1_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_set_stop_threshold_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_sw_params_set_stop_threshold
{
  const char* name = "snd_pcm_sw_params_set_stop_threshold";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
};

}

extern "C" int snd_pcm_sw_params_set_stop_threshold(fns::snd_pcm_sw_params_set_stop_threshold_arg0_t pcm, fns::snd_pcm_sw_params_set_stop_threshold_arg1_t params, fns::snd_pcm_sw_params_set_stop_threshold_arg2_t val)
{
  return fns::call<fns::snd_pcm_sw_params_set_stop_threshold>(pcm, params, val);
}

namespace fns
{

using snd_pcm_sw_params_get_stop_threshold_arg0_t = const snd_pcm_sw_params_t *;
using snd_pcm_sw_params_get_stop_threshold_arg1_t = snd_pcm_uframes_t *;
struct snd_pcm_sw_params_get_stop_threshold
{
  const char* name = "snd_pcm_sw_params_get_stop_threshold";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_sw_params_get_stop_threshold(fns::snd_pcm_sw_params_get_stop_threshold_arg0_t params, fns::snd_pcm_sw_params_get_stop_threshold_arg1_t val)
{
  return fns::call<fns::snd_pcm_sw_params_get_stop_threshold>(params, val);
}

namespace fns
{

using snd_pcm_sw_params_set_silence_threshold_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_set_silence_threshold_arg1_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_set_silence_threshold_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_sw_params_set_silence_threshold
{
  const char* name = "snd_pcm_sw_params_set_silence_threshold";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
};

}

extern "C" int snd_pcm_sw_params_set_silence_threshold(fns::snd_pcm_sw_params_set_silence_threshold_arg0_t pcm, fns::snd_pcm_sw_params_set_silence_threshold_arg1_t params, fns::snd_pcm_sw_params_set_silence_threshold_arg2_t val)
{
  return fns::call<fns::snd_pcm_sw_params_set_silence_threshold>(pcm, params, val);
}

namespace fns
{

using snd_pcm_sw_params_get_silence_threshold_arg0_t = const snd_pcm_sw_params_t *;
using snd_pcm_sw_params_get_silence_threshold_arg1_t = snd_pcm_uframes_t *;
struct snd_pcm_sw_params_get_silence_threshold
{
  const char* name = "snd_pcm_sw_params_get_silence_threshold";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_sw_params_get_silence_threshold(fns::snd_pcm_sw_params_get_silence_threshold_arg0_t params, fns::snd_pcm_sw_params_get_silence_threshold_arg1_t val)
{
  return fns::call<fns::snd_pcm_sw_params_get_silence_threshold>(params, val);
}

namespace fns
{

using snd_pcm_sw_params_set_silence_size_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_set_silence_size_arg1_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_set_silence_size_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_sw_params_set_silence_size
{
  const char* name = "snd_pcm_sw_params_set_silence_size";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
};

}

extern "C" int snd_pcm_sw_params_set_silence_size(fns::snd_pcm_sw_params_set_silence_size_arg0_t pcm, fns::snd_pcm_sw_params_set_silence_size_arg1_t params, fns::snd_pcm_sw_params_set_silence_size_arg2_t val)
{
  return fns::call<fns::snd_pcm_sw_params_set_silence_size>(pcm, params, val);
}

namespace fns
{

using snd_pcm_sw_params_get_silence_size_arg0_t = const snd_pcm_sw_params_t *;
using snd_pcm_sw_params_get_silence_size_arg1_t = snd_pcm_uframes_t *;
struct snd_pcm_sw_params_get_silence_size
{
  const char* name = "snd_pcm_sw_params_get_silence_size";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_sw_params_get_silence_size(fns::snd_pcm_sw_params_get_silence_size_arg0_t params, fns::snd_pcm_sw_params_get_silence_size_arg1_t val)
{
  return fns::call<fns::snd_pcm_sw_params_get_silence_size>(params, val);
}

namespace fns
{

struct snd_pcm_access_mask_sizeof
{
  const char* name = "snd_pcm_access_mask_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_pcm_access_mask_sizeof()
{
  return fns::call<fns::snd_pcm_access_mask_sizeof>();
}

namespace fns
{

using snd_pcm_access_mask_malloc_arg0_t = snd_pcm_access_mask_t **;
struct snd_pcm_access_mask_malloc
{
  const char* name = "snd_pcm_access_mask_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_pcm_access_mask_t **);
};

}

extern "C" int snd_pcm_access_mask_malloc(fns::snd_pcm_access_mask_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_pcm_access_mask_malloc>(ptr);
}

namespace fns
{

using snd_pcm_access_mask_free_arg0_t = snd_pcm_access_mask_t *;
struct snd_pcm_access_mask_free
{
  const char* name = "snd_pcm_access_mask_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_pcm_access_mask_t *);
};

}

extern "C" void snd_pcm_access_mask_free(fns::snd_pcm_access_mask_free_arg0_t obj)
{
  return fns::call_void<fns::snd_pcm_access_mask_free>(obj);
}

namespace fns
{

using snd_pcm_access_mask_copy_arg0_t = snd_pcm_access_mask_t *;
using snd_pcm_access_mask_copy_arg1_t = const snd_pcm_access_mask_t *;
struct snd_pcm_access_mask_copy
{
  const char* name = "snd_pcm_access_mask_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_pcm_access_mask_t *, const snd_pcm_access_mask_t *);
};

}

extern "C" void snd_pcm_access_mask_copy(fns::snd_pcm_access_mask_copy_arg0_t dst, fns::snd_pcm_access_mask_copy_arg1_t src)
{
  return fns::call_void<fns::snd_pcm_access_mask_copy>(dst, src);
}

namespace fns
{

using snd_pcm_access_mask_none_arg0_t = snd_pcm_access_mask_t *;
struct snd_pcm_access_mask_none
{
  const char* name = "snd_pcm_access_mask_none";
  const std::vector<const char*> args = {"mask"};
  using type = void(*)(snd_pcm_access_mask_t *);
};

}

extern "C" void snd_pcm_access_mask_none(fns::snd_pcm_access_mask_none_arg0_t mask)
{
  return fns::call_void<fns::snd_pcm_access_mask_none>(mask);
}

namespace fns
{

using snd_pcm_access_mask_any_arg0_t = snd_pcm_access_mask_t *;
struct snd_pcm_access_mask_any
{
  const char* name = "snd_pcm_access_mask_any";
  const std::vector<const char*> args = {"mask"};
  using type = void(*)(snd_pcm_access_mask_t *);
};

}

extern "C" void snd_pcm_access_mask_any(fns::snd_pcm_access_mask_any_arg0_t mask)
{
  return fns::call_void<fns::snd_pcm_access_mask_any>(mask);
}

namespace fns
{

using snd_pcm_access_mask_test_arg0_t = const snd_pcm_access_mask_t *;
using snd_pcm_access_mask_test_arg1_t = snd_pcm_access_t;
struct snd_pcm_access_mask_test
{
  const char* name = "snd_pcm_access_mask_test";
  const std::vector<const char*> args = {"mask", "val"};
  using type = int(*)(const snd_pcm_access_mask_t *, snd_pcm_access_t);
};

}

extern "C" int snd_pcm_access_mask_test(fns::snd_pcm_access_mask_test_arg0_t mask, fns::snd_pcm_access_mask_test_arg1_t val)
{
  return fns::call<fns::snd_pcm_access_mask_test>(mask, val);
}

namespace fns
{

using snd_pcm_access_mask_empty_arg0_t = const snd_pcm_access_mask_t *;
struct snd_pcm_access_mask_empty
{
  const char* name = "snd_pcm_access_mask_empty";
  const std::vector<const char*> args = {"mask"};
  using type = int(*)(const snd_pcm_access_mask_t *);
};

}

extern "C" int snd_pcm_access_mask_empty(fns::snd_pcm_access_mask_empty_arg0_t mask)
{
  return fns::call<fns::snd_pcm_access_mask_empty>(mask);
}

namespace fns
{

using snd_pcm_access_mask_set_arg0_t = snd_pcm_access_mask_t *;
using snd_pcm_access_mask_set_arg1_t = snd_pcm_access_t;
struct snd_pcm_access_mask_set
{
  const char* name = "snd_pcm_access_mask_set";
  const std::vector<const char*> args = {"mask", "val"};
  using type = void(*)(snd_pcm_access_mask_t *, snd_pcm_access_t);
};

}

extern "C" void snd_pcm_access_mask_set(fns::snd_pcm_access_mask_set_arg0_t mask, fns::snd_pcm_access_mask_set_arg1_t val)
{
  return fns::call_void<fns::snd_pcm_access_mask_set>(mask, val);
}

namespace fns
{

using snd_pcm_access_mask_reset_arg0_t = snd_pcm_access_mask_t *;
using snd_pcm_access_mask_reset_arg1_t = snd_pcm_access_t;
struct snd_pcm_access_mask_reset
{
  const char* name = "snd_pcm_access_mask_reset";
  const std::vector<const char*> args = {"mask", "val"};
  using type = void(*)(snd_pcm_access_mask_t *, snd_pcm_access_t);
};

}

extern "C" void snd_pcm_access_mask_reset(fns::snd_pcm_access_mask_reset_arg0_t mask, fns::snd_pcm_access_mask_reset_arg1_t val)
{
  return fns::call_void<fns::snd_pcm_access_mask_reset>(mask, val);
}

namespace fns
{

struct snd_pcm_format_mask_sizeof
{
  const char* name = "snd_pcm_format_mask_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_pcm_format_mask_sizeof()
{
  return fns::call<fns::snd_pcm_format_mask_sizeof>();
}

namespace fns
{

using snd_pcm_format_mask_malloc_arg0_t = snd_pcm_format_mask_t **;
struct snd_pcm_format_mask_malloc
{
  const char* name = "snd_pcm_format_mask_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_pcm_format_mask_t **);
};

}

extern "C" int snd_pcm_format_mask_malloc(fns::snd_pcm_format_mask_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_pcm_format_mask_malloc>(ptr);
}

namespace fns
{

using snd_pcm_format_mask_free_arg0_t = snd_pcm_format_mask_t *;
struct snd_pcm_format_mask_free
{
  const char* name = "snd_pcm_format_mask_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_pcm_format_mask_t *);
};

}

extern "C" void snd_pcm_format_mask_free(fns::snd_pcm_format_mask_free_arg0_t obj)
{
  return fns::call_void<fns::snd_pcm_format_mask_free>(obj);
}

namespace fns
{

using snd_pcm_format_mask_copy_arg0_t = snd_pcm_format_mask_t *;
using snd_pcm_format_mask_copy_arg1_t = const snd_pcm_format_mask_t *;
struct snd_pcm_format_mask_copy
{
  const char* name = "snd_pcm_format_mask_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_pcm_format_mask_t *, const snd_pcm_format_mask_t *);
};

}

extern "C" void snd_pcm_format_mask_copy(fns::snd_pcm_format_mask_copy_arg0_t dst, fns::snd_pcm_format_mask_copy_arg1_t src)
{
  return fns::call_void<fns::snd_pcm_format_mask_copy>(dst, src);
}

namespace fns
{

using snd_pcm_format_mask_none_arg0_t = snd_pcm_format_mask_t *;
struct snd_pcm_format_mask_none
{
  const char* name = "snd_pcm_format_mask_none";
  const std::vector<const char*> args = {"mask"};
  using type = void(*)(snd_pcm_format_mask_t *);
};

}

extern "C" void snd_pcm_format_mask_none(fns::snd_pcm_format_mask_none_arg0_t mask)
{
  return fns::call_void<fns::snd_pcm_format_mask_none>(mask);
}

namespace fns
{

using snd_pcm_format_mask_any_arg0_t = snd_pcm_format_mask_t *;
struct snd_pcm_format_mask_any
{
  const char* name = "snd_pcm_format_mask_any";
  const std::vector<const char*> args = {"mask"};
  using type = void(*)(snd_pcm_format_mask_t *);
};

}

extern "C" void snd_pcm_format_mask_any(fns::snd_pcm_format_mask_any_arg0_t mask)
{
  return fns::call_void<fns::snd_pcm_format_mask_any>(mask);
}

namespace fns
{

using snd_pcm_format_mask_test_arg0_t = const snd_pcm_format_mask_t *;
using snd_pcm_format_mask_test_arg1_t = snd_pcm_format_t;
struct snd_pcm_format_mask_test
{
  const char* name = "snd_pcm_format_mask_test";
  const std::vector<const char*> args = {"mask", "val"};
  using type = int(*)(const snd_pcm_format_mask_t *, snd_pcm_format_t);
};

}

extern "C" int snd_pcm_format_mask_test(fns::snd_pcm_format_mask_test_arg0_t mask, fns::snd_pcm_format_mask_test_arg1_t val)
{
  return fns::call<fns::snd_pcm_format_mask_test>(mask, val);
}

namespace fns
{

using snd_pcm_format_mask_empty_arg0_t = const snd_pcm_format_mask_t *;
struct snd_pcm_format_mask_empty
{
  const char* name = "snd_pcm_format_mask_empty";
  const std::vector<const char*> args = {"mask"};
  using type = int(*)(const snd_pcm_format_mask_t *);
};

}

extern "C" int snd_pcm_format_mask_empty(fns::snd_pcm_format_mask_empty_arg0_t mask)
{
  return fns::call<fns::snd_pcm_format_mask_empty>(mask);
}

namespace fns
{

using snd_pcm_format_mask_set_arg0_t = snd_pcm_format_mask_t *;
using snd_pcm_format_mask_set_arg1_t = snd_pcm_format_t;
struct snd_pcm_format_mask_set
{
  const char* name = "snd_pcm_format_mask_set";
  const std::vector<const char*> args = {"mask", "val"};
  using type = void(*)(snd_pcm_format_mask_t *, snd_pcm_format_t);
};

}

extern "C" void snd_pcm_format_mask_set(fns::snd_pcm_format_mask_set_arg0_t mask, fns::snd_pcm_format_mask_set_arg1_t val)
{
  return fns::call_void<fns::snd_pcm_format_mask_set>(mask, val);
}

namespace fns
{

using snd_pcm_format_mask_reset_arg0_t = snd_pcm_format_mask_t *;
using snd_pcm_format_mask_reset_arg1_t = snd_pcm_format_t;
struct snd_pcm_format_mask_reset
{
  const char* name = "snd_pcm_format_mask_reset";
  const std::vector<const char*> args = {"mask", "val"};
  using type = void(*)(snd_pcm_format_mask_t *, snd_pcm_format_t);
};

}

extern "C" void snd_pcm_format_mask_reset(fns::snd_pcm_format_mask_reset_arg0_t mask, fns::snd_pcm_format_mask_reset_arg1_t val)
{
  return fns::call_void<fns::snd_pcm_format_mask_reset>(mask, val);
}

namespace fns
{

struct snd_pcm_subformat_mask_sizeof
{
  const char* name = "snd_pcm_subformat_mask_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_pcm_subformat_mask_sizeof()
{
  return fns::call<fns::snd_pcm_subformat_mask_sizeof>();
}

namespace fns
{

using snd_pcm_subformat_mask_malloc_arg0_t = snd_pcm_subformat_mask_t **;
struct snd_pcm_subformat_mask_malloc
{
  const char* name = "snd_pcm_subformat_mask_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_pcm_subformat_mask_t **);
};

}

extern "C" int snd_pcm_subformat_mask_malloc(fns::snd_pcm_subformat_mask_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_pcm_subformat_mask_malloc>(ptr);
}

namespace fns
{

using snd_pcm_subformat_mask_free_arg0_t = snd_pcm_subformat_mask_t *;
struct snd_pcm_subformat_mask_free
{
  const char* name = "snd_pcm_subformat_mask_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_pcm_subformat_mask_t *);
};

}

extern "C" void snd_pcm_subformat_mask_free(fns::snd_pcm_subformat_mask_free_arg0_t obj)
{
  return fns::call_void<fns::snd_pcm_subformat_mask_free>(obj);
}

namespace fns
{

using snd_pcm_subformat_mask_copy_arg0_t = snd_pcm_subformat_mask_t *;
using snd_pcm_subformat_mask_copy_arg1_t = const snd_pcm_subformat_mask_t *;
struct snd_pcm_subformat_mask_copy
{
  const char* name = "snd_pcm_subformat_mask_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_pcm_subformat_mask_t *, const snd_pcm_subformat_mask_t *);
};

}

extern "C" void snd_pcm_subformat_mask_copy(fns::snd_pcm_subformat_mask_copy_arg0_t dst, fns::snd_pcm_subformat_mask_copy_arg1_t src)
{
  return fns::call_void<fns::snd_pcm_subformat_mask_copy>(dst, src);
}

namespace fns
{

using snd_pcm_subformat_mask_none_arg0_t = snd_pcm_subformat_mask_t *;
struct snd_pcm_subformat_mask_none
{
  const char* name = "snd_pcm_subformat_mask_none";
  const std::vector<const char*> args = {"mask"};
  using type = void(*)(snd_pcm_subformat_mask_t *);
};

}

extern "C" void snd_pcm_subformat_mask_none(fns::snd_pcm_subformat_mask_none_arg0_t mask)
{
  return fns::call_void<fns::snd_pcm_subformat_mask_none>(mask);
}

namespace fns
{

using snd_pcm_subformat_mask_any_arg0_t = snd_pcm_subformat_mask_t *;
struct snd_pcm_subformat_mask_any
{
  const char* name = "snd_pcm_subformat_mask_any";
  const std::vector<const char*> args = {"mask"};
  using type = void(*)(snd_pcm_subformat_mask_t *);
};

}

extern "C" void snd_pcm_subformat_mask_any(fns::snd_pcm_subformat_mask_any_arg0_t mask)
{
  return fns::call_void<fns::snd_pcm_subformat_mask_any>(mask);
}

namespace fns
{

using snd_pcm_subformat_mask_test_arg0_t = const snd_pcm_subformat_mask_t *;
using snd_pcm_subformat_mask_test_arg1_t = snd_pcm_subformat_t;
struct snd_pcm_subformat_mask_test
{
  const char* name = "snd_pcm_subformat_mask_test";
  const std::vector<const char*> args = {"mask", "val"};
  using type = int(*)(const snd_pcm_subformat_mask_t *, snd_pcm_subformat_t);
};

}

extern "C" int snd_pcm_subformat_mask_test(fns::snd_pcm_subformat_mask_test_arg0_t mask, fns::snd_pcm_subformat_mask_test_arg1_t val)
{
  return fns::call<fns::snd_pcm_subformat_mask_test>(mask, val);
}

namespace fns
{

using snd_pcm_subformat_mask_empty_arg0_t = const snd_pcm_subformat_mask_t *;
struct snd_pcm_subformat_mask_empty
{
  const char* name = "snd_pcm_subformat_mask_empty";
  const std::vector<const char*> args = {"mask"};
  using type = int(*)(const snd_pcm_subformat_mask_t *);
};

}

extern "C" int snd_pcm_subformat_mask_empty(fns::snd_pcm_subformat_mask_empty_arg0_t mask)
{
  return fns::call<fns::snd_pcm_subformat_mask_empty>(mask);
}

namespace fns
{

using snd_pcm_subformat_mask_set_arg0_t = snd_pcm_subformat_mask_t *;
using snd_pcm_subformat_mask_set_arg1_t = snd_pcm_subformat_t;
struct snd_pcm_subformat_mask_set
{
  const char* name = "snd_pcm_subformat_mask_set";
  const std::vector<const char*> args = {"mask", "val"};
  using type = void(*)(snd_pcm_subformat_mask_t *, snd_pcm_subformat_t);
};

}

extern "C" void snd_pcm_subformat_mask_set(fns::snd_pcm_subformat_mask_set_arg0_t mask, fns::snd_pcm_subformat_mask_set_arg1_t val)
{
  return fns::call_void<fns::snd_pcm_subformat_mask_set>(mask, val);
}

namespace fns
{

using snd_pcm_subformat_mask_reset_arg0_t = snd_pcm_subformat_mask_t *;
using snd_pcm_subformat_mask_reset_arg1_t = snd_pcm_subformat_t;
struct snd_pcm_subformat_mask_reset
{
  const char* name = "snd_pcm_subformat_mask_reset";
  const std::vector<const char*> args = {"mask", "val"};
  using type = void(*)(snd_pcm_subformat_mask_t *, snd_pcm_subformat_t);
};

}

extern "C" void snd_pcm_subformat_mask_reset(fns::snd_pcm_subformat_mask_reset_arg0_t mask, fns::snd_pcm_subformat_mask_reset_arg1_t val)
{
  return fns::call_void<fns::snd_pcm_subformat_mask_reset>(mask, val);
}

namespace fns
{

struct snd_pcm_status_sizeof
{
  const char* name = "snd_pcm_status_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_pcm_status_sizeof()
{
  return fns::call<fns::snd_pcm_status_sizeof>();
}

namespace fns
{

using snd_pcm_status_malloc_arg0_t = snd_pcm_status_t **;
struct snd_pcm_status_malloc
{
  const char* name = "snd_pcm_status_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_pcm_status_t **);
};

}

extern "C" int snd_pcm_status_malloc(fns::snd_pcm_status_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_pcm_status_malloc>(ptr);
}

namespace fns
{

using snd_pcm_status_free_arg0_t = snd_pcm_status_t *;
struct snd_pcm_status_free
{
  const char* name = "snd_pcm_status_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_pcm_status_t *);
};

}

extern "C" void snd_pcm_status_free(fns::snd_pcm_status_free_arg0_t obj)
{
  return fns::call_void<fns::snd_pcm_status_free>(obj);
}

namespace fns
{

using snd_pcm_status_copy_arg0_t = snd_pcm_status_t *;
using snd_pcm_status_copy_arg1_t = const snd_pcm_status_t *;
struct snd_pcm_status_copy
{
  const char* name = "snd_pcm_status_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_pcm_status_t *, const snd_pcm_status_t *);
};

}

extern "C" void snd_pcm_status_copy(fns::snd_pcm_status_copy_arg0_t dst, fns::snd_pcm_status_copy_arg1_t src)
{
  return fns::call_void<fns::snd_pcm_status_copy>(dst, src);
}

namespace fns
{

using snd_pcm_status_get_state_arg0_t = const snd_pcm_status_t *;
struct snd_pcm_status_get_state
{
  const char* name = "snd_pcm_status_get_state";
  const std::vector<const char*> args = {"obj"};
  using type = snd_pcm_state_t(*)(const snd_pcm_status_t *);
};

}

extern "C" snd_pcm_state_t snd_pcm_status_get_state(fns::snd_pcm_status_get_state_arg0_t obj)
{
  return fns::call<fns::snd_pcm_status_get_state>(obj);
}

namespace fns
{

using snd_pcm_status_get_trigger_tstamp_arg0_t = const snd_pcm_status_t *;
using snd_pcm_status_get_trigger_tstamp_arg1_t = snd_timestamp_t *;
struct snd_pcm_status_get_trigger_tstamp
{
  const char* name = "snd_pcm_status_get_trigger_tstamp";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(const snd_pcm_status_t *, snd_timestamp_t *);
};

}

extern "C" void snd_pcm_status_get_trigger_tstamp(fns::snd_pcm_status_get_trigger_tstamp_arg0_t obj, fns::snd_pcm_status_get_trigger_tstamp_arg1_t ptr)
{
  return fns::call_void<fns::snd_pcm_status_get_trigger_tstamp>(obj, ptr);
}

namespace fns
{

using snd_pcm_status_get_trigger_htstamp_arg0_t = const snd_pcm_status_t *;
using snd_pcm_status_get_trigger_htstamp_arg1_t = snd_htimestamp_t *;
struct snd_pcm_status_get_trigger_htstamp
{
  const char* name = "snd_pcm_status_get_trigger_htstamp";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(const snd_pcm_status_t *, snd_htimestamp_t *);
};

}

extern "C" void snd_pcm_status_get_trigger_htstamp(fns::snd_pcm_status_get_trigger_htstamp_arg0_t obj, fns::snd_pcm_status_get_trigger_htstamp_arg1_t ptr)
{
  return fns::call_void<fns::snd_pcm_status_get_trigger_htstamp>(obj, ptr);
}

namespace fns
{

using snd_pcm_status_get_tstamp_arg0_t = const snd_pcm_status_t *;
using snd_pcm_status_get_tstamp_arg1_t = snd_timestamp_t *;
struct snd_pcm_status_get_tstamp
{
  const char* name = "snd_pcm_status_get_tstamp";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(const snd_pcm_status_t *, snd_timestamp_t *);
};

}

extern "C" void snd_pcm_status_get_tstamp(fns::snd_pcm_status_get_tstamp_arg0_t obj, fns::snd_pcm_status_get_tstamp_arg1_t ptr)
{
  return fns::call_void<fns::snd_pcm_status_get_tstamp>(obj, ptr);
}

namespace fns
{

using snd_pcm_status_get_htstamp_arg0_t = const snd_pcm_status_t *;
using snd_pcm_status_get_htstamp_arg1_t = snd_htimestamp_t *;
struct snd_pcm_status_get_htstamp
{
  const char* name = "snd_pcm_status_get_htstamp";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(const snd_pcm_status_t *, snd_htimestamp_t *);
};

}

extern "C" void snd_pcm_status_get_htstamp(fns::snd_pcm_status_get_htstamp_arg0_t obj, fns::snd_pcm_status_get_htstamp_arg1_t ptr)
{
  return fns::call_void<fns::snd_pcm_status_get_htstamp>(obj, ptr);
}

namespace fns
{

using snd_pcm_status_get_audio_htstamp_arg0_t = const snd_pcm_status_t *;
using snd_pcm_status_get_audio_htstamp_arg1_t = snd_htimestamp_t *;
struct snd_pcm_status_get_audio_htstamp
{
  const char* name = "snd_pcm_status_get_audio_htstamp";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(const snd_pcm_status_t *, snd_htimestamp_t *);
};

}

extern "C" void snd_pcm_status_get_audio_htstamp(fns::snd_pcm_status_get_audio_htstamp_arg0_t obj, fns::snd_pcm_status_get_audio_htstamp_arg1_t ptr)
{
  return fns::call_void<fns::snd_pcm_status_get_audio_htstamp>(obj, ptr);
}

namespace fns
{

using snd_pcm_status_get_driver_htstamp_arg0_t = const snd_pcm_status_t *;
using snd_pcm_status_get_driver_htstamp_arg1_t = snd_htimestamp_t *;
struct snd_pcm_status_get_driver_htstamp
{
  const char* name = "snd_pcm_status_get_driver_htstamp";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(const snd_pcm_status_t *, snd_htimestamp_t *);
};

}

extern "C" void snd_pcm_status_get_driver_htstamp(fns::snd_pcm_status_get_driver_htstamp_arg0_t obj, fns::snd_pcm_status_get_driver_htstamp_arg1_t ptr)
{
  return fns::call_void<fns::snd_pcm_status_get_driver_htstamp>(obj, ptr);
}

namespace fns
{

using snd_pcm_status_get_audio_htstamp_report_arg0_t = const snd_pcm_status_t *;
using snd_pcm_status_get_audio_htstamp_report_arg1_t = snd_pcm_audio_tstamp_report_t *;
struct snd_pcm_status_get_audio_htstamp_report
{
  const char* name = "snd_pcm_status_get_audio_htstamp_report";
  const std::vector<const char*> args = {"obj", "audio_tstamp_report"};
  using type = void(*)(const snd_pcm_status_t *, snd_pcm_audio_tstamp_report_t *);
};

}

extern "C" void snd_pcm_status_get_audio_htstamp_report(fns::snd_pcm_status_get_audio_htstamp_report_arg0_t obj, fns::snd_pcm_status_get_audio_htstamp_report_arg1_t audio_tstamp_report)
{
  return fns::call_void<fns::snd_pcm_status_get_audio_htstamp_report>(obj, audio_tstamp_report);
}

namespace fns
{

using snd_pcm_status_set_audio_htstamp_config_arg0_t = snd_pcm_status_t *;
using snd_pcm_status_set_audio_htstamp_config_arg1_t = snd_pcm_audio_tstamp_config_t *;
struct snd_pcm_status_set_audio_htstamp_config
{
  const char* name = "snd_pcm_status_set_audio_htstamp_config";
  const std::vector<const char*> args = {"obj", "audio_tstamp_config"};
  using type = void(*)(snd_pcm_status_t *, snd_pcm_audio_tstamp_config_t *);
};

}

extern "C" void snd_pcm_status_set_audio_htstamp_config(fns::snd_pcm_status_set_audio_htstamp_config_arg0_t obj, fns::snd_pcm_status_set_audio_htstamp_config_arg1_t audio_tstamp_config)
{
  return fns::call_void<fns::snd_pcm_status_set_audio_htstamp_config>(obj, audio_tstamp_config);
}

// Skipping snd_pcm_pack_audio_tstamp_config because it is defined

// Skipping snd_pcm_unpack_audio_tstamp_report because it is defined

namespace fns
{

using snd_pcm_status_get_delay_arg0_t = const snd_pcm_status_t *;
struct snd_pcm_status_get_delay
{
  const char* name = "snd_pcm_status_get_delay";
  const std::vector<const char*> args = {"obj"};
  using type = snd_pcm_sframes_t(*)(const snd_pcm_status_t *);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_status_get_delay(fns::snd_pcm_status_get_delay_arg0_t obj)
{
  return fns::call<fns::snd_pcm_status_get_delay>(obj);
}

namespace fns
{

using snd_pcm_status_get_avail_arg0_t = const snd_pcm_status_t *;
struct snd_pcm_status_get_avail
{
  const char* name = "snd_pcm_status_get_avail";
  const std::vector<const char*> args = {"obj"};
  using type = snd_pcm_uframes_t(*)(const snd_pcm_status_t *);
};

}

extern "C" snd_pcm_uframes_t snd_pcm_status_get_avail(fns::snd_pcm_status_get_avail_arg0_t obj)
{
  return fns::call<fns::snd_pcm_status_get_avail>(obj);
}

namespace fns
{

using snd_pcm_status_get_avail_max_arg0_t = const snd_pcm_status_t *;
struct snd_pcm_status_get_avail_max
{
  const char* name = "snd_pcm_status_get_avail_max";
  const std::vector<const char*> args = {"obj"};
  using type = snd_pcm_uframes_t(*)(const snd_pcm_status_t *);
};

}

extern "C" snd_pcm_uframes_t snd_pcm_status_get_avail_max(fns::snd_pcm_status_get_avail_max_arg0_t obj)
{
  return fns::call<fns::snd_pcm_status_get_avail_max>(obj);
}

namespace fns
{

using snd_pcm_status_get_overrange_arg0_t = const snd_pcm_status_t *;
struct snd_pcm_status_get_overrange
{
  const char* name = "snd_pcm_status_get_overrange";
  const std::vector<const char*> args = {"obj"};
  using type = snd_pcm_uframes_t(*)(const snd_pcm_status_t *);
};

}

extern "C" snd_pcm_uframes_t snd_pcm_status_get_overrange(fns::snd_pcm_status_get_overrange_arg0_t obj)
{
  return fns::call<fns::snd_pcm_status_get_overrange>(obj);
}

namespace fns
{

using snd_pcm_type_name_arg0_t = snd_pcm_type_t;
struct snd_pcm_type_name
{
  const char* name = "snd_pcm_type_name";
  const std::vector<const char*> args = {"type"};
  using type = const char *(*)(snd_pcm_type_t);
};

}

extern "C" const char * snd_pcm_type_name(fns::snd_pcm_type_name_arg0_t type)
{
  return fns::call<fns::snd_pcm_type_name>(type);
}

namespace fns
{

using snd_pcm_stream_name_arg0_t = const snd_pcm_stream_t;
struct snd_pcm_stream_name
{
  const char* name = "snd_pcm_stream_name";
  const std::vector<const char*> args = {"stream"};
  using type = const char *(*)(const snd_pcm_stream_t);
};

}

extern "C" const char * snd_pcm_stream_name(fns::snd_pcm_stream_name_arg0_t stream)
{
  return fns::call<fns::snd_pcm_stream_name>(stream);
}

namespace fns
{

using snd_pcm_access_name_arg0_t = const snd_pcm_access_t;
struct snd_pcm_access_name
{
  const char* name = "snd_pcm_access_name";
  const std::vector<const char*> args = {"_access"};
  using type = const char *(*)(const snd_pcm_access_t);
};

}

extern "C" const char * snd_pcm_access_name(fns::snd_pcm_access_name_arg0_t _access)
{
  return fns::call<fns::snd_pcm_access_name>(_access);
}

namespace fns
{

using snd_pcm_format_name_arg0_t = const snd_pcm_format_t;
struct snd_pcm_format_name
{
  const char* name = "snd_pcm_format_name";
  const std::vector<const char*> args = {"format"};
  using type = const char *(*)(const snd_pcm_format_t);
};

}

extern "C" const char * snd_pcm_format_name(fns::snd_pcm_format_name_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_name>(format);
}

namespace fns
{

using snd_pcm_format_description_arg0_t = const snd_pcm_format_t;
struct snd_pcm_format_description
{
  const char* name = "snd_pcm_format_description";
  const std::vector<const char*> args = {"format"};
  using type = const char *(*)(const snd_pcm_format_t);
};

}

extern "C" const char * snd_pcm_format_description(fns::snd_pcm_format_description_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_description>(format);
}

namespace fns
{

using snd_pcm_subformat_name_arg0_t = const snd_pcm_subformat_t;
struct snd_pcm_subformat_name
{
  const char* name = "snd_pcm_subformat_name";
  const std::vector<const char*> args = {"subformat"};
  using type = const char *(*)(const snd_pcm_subformat_t);
};

}

extern "C" const char * snd_pcm_subformat_name(fns::snd_pcm_subformat_name_arg0_t subformat)
{
  return fns::call<fns::snd_pcm_subformat_name>(subformat);
}

namespace fns
{

using snd_pcm_subformat_description_arg0_t = const snd_pcm_subformat_t;
struct snd_pcm_subformat_description
{
  const char* name = "snd_pcm_subformat_description";
  const std::vector<const char*> args = {"subformat"};
  using type = const char *(*)(const snd_pcm_subformat_t);
};

}

extern "C" const char * snd_pcm_subformat_description(fns::snd_pcm_subformat_description_arg0_t subformat)
{
  return fns::call<fns::snd_pcm_subformat_description>(subformat);
}

namespace fns
{

using snd_pcm_format_value_arg0_t = const char *;
struct snd_pcm_format_value
{
  const char* name = "snd_pcm_format_value";
  const std::vector<const char*> args = {"name"};
  using type = snd_pcm_format_t(*)(const char *);
};

}

extern "C" snd_pcm_format_t snd_pcm_format_value(fns::snd_pcm_format_value_arg0_t name)
{
  return fns::call<fns::snd_pcm_format_value>(name);
}

namespace fns
{

using snd_pcm_tstamp_mode_name_arg0_t = const snd_pcm_tstamp_t;
struct snd_pcm_tstamp_mode_name
{
  const char* name = "snd_pcm_tstamp_mode_name";
  const std::vector<const char*> args = {"mode"};
  using type = const char *(*)(const snd_pcm_tstamp_t);
};

}

extern "C" const char * snd_pcm_tstamp_mode_name(fns::snd_pcm_tstamp_mode_name_arg0_t mode)
{
  return fns::call<fns::snd_pcm_tstamp_mode_name>(mode);
}

namespace fns
{

using snd_pcm_state_name_arg0_t = const snd_pcm_state_t;
struct snd_pcm_state_name
{
  const char* name = "snd_pcm_state_name";
  const std::vector<const char*> args = {"state"};
  using type = const char *(*)(const snd_pcm_state_t);
};

}

extern "C" const char * snd_pcm_state_name(fns::snd_pcm_state_name_arg0_t state)
{
  return fns::call<fns::snd_pcm_state_name>(state);
}

namespace fns
{

using snd_pcm_dump_arg0_t = snd_pcm_t *;
using snd_pcm_dump_arg1_t = snd_output_t *;
struct snd_pcm_dump
{
  const char* name = "snd_pcm_dump";
  const std::vector<const char*> args = {"pcm", "out"};
  using type = int(*)(snd_pcm_t *, snd_output_t *);
};

}

extern "C" int snd_pcm_dump(fns::snd_pcm_dump_arg0_t pcm, fns::snd_pcm_dump_arg1_t out)
{
  return fns::call<fns::snd_pcm_dump>(pcm, out);
}

namespace fns
{

using snd_pcm_dump_hw_setup_arg0_t = snd_pcm_t *;
using snd_pcm_dump_hw_setup_arg1_t = snd_output_t *;
struct snd_pcm_dump_hw_setup
{
  const char* name = "snd_pcm_dump_hw_setup";
  const std::vector<const char*> args = {"pcm", "out"};
  using type = int(*)(snd_pcm_t *, snd_output_t *);
};

}

extern "C" int snd_pcm_dump_hw_setup(fns::snd_pcm_dump_hw_setup_arg0_t pcm, fns::snd_pcm_dump_hw_setup_arg1_t out)
{
  return fns::call<fns::snd_pcm_dump_hw_setup>(pcm, out);
}

namespace fns
{

using snd_pcm_dump_sw_setup_arg0_t = snd_pcm_t *;
using snd_pcm_dump_sw_setup_arg1_t = snd_output_t *;
struct snd_pcm_dump_sw_setup
{
  const char* name = "snd_pcm_dump_sw_setup";
  const std::vector<const char*> args = {"pcm", "out"};
  using type = int(*)(snd_pcm_t *, snd_output_t *);
};

}

extern "C" int snd_pcm_dump_sw_setup(fns::snd_pcm_dump_sw_setup_arg0_t pcm, fns::snd_pcm_dump_sw_setup_arg1_t out)
{
  return fns::call<fns::snd_pcm_dump_sw_setup>(pcm, out);
}

namespace fns
{

using snd_pcm_dump_setup_arg0_t = snd_pcm_t *;
using snd_pcm_dump_setup_arg1_t = snd_output_t *;
struct snd_pcm_dump_setup
{
  const char* name = "snd_pcm_dump_setup";
  const std::vector<const char*> args = {"pcm", "out"};
  using type = int(*)(snd_pcm_t *, snd_output_t *);
};

}

extern "C" int snd_pcm_dump_setup(fns::snd_pcm_dump_setup_arg0_t pcm, fns::snd_pcm_dump_setup_arg1_t out)
{
  return fns::call<fns::snd_pcm_dump_setup>(pcm, out);
}

namespace fns
{

using snd_pcm_hw_params_dump_arg0_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_dump_arg1_t = snd_output_t *;
struct snd_pcm_hw_params_dump
{
  const char* name = "snd_pcm_hw_params_dump";
  const std::vector<const char*> args = {"params", "out"};
  using type = int(*)(snd_pcm_hw_params_t *, snd_output_t *);
};

}

extern "C" int snd_pcm_hw_params_dump(fns::snd_pcm_hw_params_dump_arg0_t params, fns::snd_pcm_hw_params_dump_arg1_t out)
{
  return fns::call<fns::snd_pcm_hw_params_dump>(params, out);
}

namespace fns
{

using snd_pcm_sw_params_dump_arg0_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_dump_arg1_t = snd_output_t *;
struct snd_pcm_sw_params_dump
{
  const char* name = "snd_pcm_sw_params_dump";
  const std::vector<const char*> args = {"params", "out"};
  using type = int(*)(snd_pcm_sw_params_t *, snd_output_t *);
};

}

extern "C" int snd_pcm_sw_params_dump(fns::snd_pcm_sw_params_dump_arg0_t params, fns::snd_pcm_sw_params_dump_arg1_t out)
{
  return fns::call<fns::snd_pcm_sw_params_dump>(params, out);
}

namespace fns
{

using snd_pcm_status_dump_arg0_t = snd_pcm_status_t *;
using snd_pcm_status_dump_arg1_t = snd_output_t *;
struct snd_pcm_status_dump
{
  const char* name = "snd_pcm_status_dump";
  const std::vector<const char*> args = {"status", "out"};
  using type = int(*)(snd_pcm_status_t *, snd_output_t *);
};

}

extern "C" int snd_pcm_status_dump(fns::snd_pcm_status_dump_arg0_t status, fns::snd_pcm_status_dump_arg1_t out)
{
  return fns::call<fns::snd_pcm_status_dump>(status, out);
}

namespace fns
{

using snd_pcm_mmap_begin_arg0_t = snd_pcm_t *;
using snd_pcm_mmap_begin_arg1_t = const snd_pcm_channel_area_t **;
using snd_pcm_mmap_begin_arg2_t = snd_pcm_uframes_t *;
using snd_pcm_mmap_begin_arg3_t = snd_pcm_uframes_t *;
struct snd_pcm_mmap_begin
{
  const char* name = "snd_pcm_mmap_begin";
  const std::vector<const char*> args = {"pcm", "areas", "offset", "frames"};
  using type = int(*)(snd_pcm_t *, const snd_pcm_channel_area_t **, snd_pcm_uframes_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_mmap_begin(fns::snd_pcm_mmap_begin_arg0_t pcm, fns::snd_pcm_mmap_begin_arg1_t areas, fns::snd_pcm_mmap_begin_arg2_t offset, fns::snd_pcm_mmap_begin_arg3_t frames)
{
  return fns::call<fns::snd_pcm_mmap_begin>(pcm, areas, offset, frames);
}

namespace fns
{

using snd_pcm_mmap_commit_arg0_t = snd_pcm_t *;
using snd_pcm_mmap_commit_arg1_t = snd_pcm_uframes_t;
using snd_pcm_mmap_commit_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_mmap_commit
{
  const char* name = "snd_pcm_mmap_commit";
  const std::vector<const char*> args = {"pcm", "offset", "frames"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *, snd_pcm_uframes_t, snd_pcm_uframes_t);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_mmap_commit(fns::snd_pcm_mmap_commit_arg0_t pcm, fns::snd_pcm_mmap_commit_arg1_t offset, fns::snd_pcm_mmap_commit_arg2_t frames)
{
  return fns::call<fns::snd_pcm_mmap_commit>(pcm, offset, frames);
}

namespace fns
{

using snd_pcm_mmap_writei_arg0_t = snd_pcm_t *;
using snd_pcm_mmap_writei_arg1_t = const void *;
using snd_pcm_mmap_writei_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_mmap_writei
{
  const char* name = "snd_pcm_mmap_writei";
  const std::vector<const char*> args = {"pcm", "buffer", "size"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *, const void *, snd_pcm_uframes_t);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_mmap_writei(fns::snd_pcm_mmap_writei_arg0_t pcm, fns::snd_pcm_mmap_writei_arg1_t buffer, fns::snd_pcm_mmap_writei_arg2_t size)
{
  return fns::call<fns::snd_pcm_mmap_writei>(pcm, buffer, size);
}

namespace fns
{

using snd_pcm_mmap_readi_arg0_t = snd_pcm_t *;
using snd_pcm_mmap_readi_arg1_t = void *;
using snd_pcm_mmap_readi_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_mmap_readi
{
  const char* name = "snd_pcm_mmap_readi";
  const std::vector<const char*> args = {"pcm", "buffer", "size"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *, void *, snd_pcm_uframes_t);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_mmap_readi(fns::snd_pcm_mmap_readi_arg0_t pcm, fns::snd_pcm_mmap_readi_arg1_t buffer, fns::snd_pcm_mmap_readi_arg2_t size)
{
  return fns::call<fns::snd_pcm_mmap_readi>(pcm, buffer, size);
}

namespace fns
{

using snd_pcm_mmap_writen_arg0_t = snd_pcm_t *;
using snd_pcm_mmap_writen_arg1_t = void **;
using snd_pcm_mmap_writen_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_mmap_writen
{
  const char* name = "snd_pcm_mmap_writen";
  const std::vector<const char*> args = {"pcm", "bufs", "size"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *, void **, snd_pcm_uframes_t);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_mmap_writen(fns::snd_pcm_mmap_writen_arg0_t pcm, fns::snd_pcm_mmap_writen_arg1_t bufs, fns::snd_pcm_mmap_writen_arg2_t size)
{
  return fns::call<fns::snd_pcm_mmap_writen>(pcm, bufs, size);
}

namespace fns
{

using snd_pcm_mmap_readn_arg0_t = snd_pcm_t *;
using snd_pcm_mmap_readn_arg1_t = void **;
using snd_pcm_mmap_readn_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_mmap_readn
{
  const char* name = "snd_pcm_mmap_readn";
  const std::vector<const char*> args = {"pcm", "bufs", "size"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *, void **, snd_pcm_uframes_t);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_mmap_readn(fns::snd_pcm_mmap_readn_arg0_t pcm, fns::snd_pcm_mmap_readn_arg1_t bufs, fns::snd_pcm_mmap_readn_arg2_t size)
{
  return fns::call<fns::snd_pcm_mmap_readn>(pcm, bufs, size);
}

namespace fns
{

using snd_pcm_format_signed_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_signed
{
  const char* name = "snd_pcm_format_signed";
  const std::vector<const char*> args = {"format"};
  using type = int(*)(snd_pcm_format_t);
};

}

extern "C" int snd_pcm_format_signed(fns::snd_pcm_format_signed_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_signed>(format);
}

namespace fns
{

using snd_pcm_format_unsigned_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_unsigned
{
  const char* name = "snd_pcm_format_unsigned";
  const std::vector<const char*> args = {"format"};
  using type = int(*)(snd_pcm_format_t);
};

}

extern "C" int snd_pcm_format_unsigned(fns::snd_pcm_format_unsigned_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_unsigned>(format);
}

namespace fns
{

using snd_pcm_format_linear_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_linear
{
  const char* name = "snd_pcm_format_linear";
  const std::vector<const char*> args = {"format"};
  using type = int(*)(snd_pcm_format_t);
};

}

extern "C" int snd_pcm_format_linear(fns::snd_pcm_format_linear_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_linear>(format);
}

namespace fns
{

using snd_pcm_format_float_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_float
{
  const char* name = "snd_pcm_format_float";
  const std::vector<const char*> args = {"format"};
  using type = int(*)(snd_pcm_format_t);
};

}

extern "C" int snd_pcm_format_float(fns::snd_pcm_format_float_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_float>(format);
}

namespace fns
{

using snd_pcm_format_little_endian_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_little_endian
{
  const char* name = "snd_pcm_format_little_endian";
  const std::vector<const char*> args = {"format"};
  using type = int(*)(snd_pcm_format_t);
};

}

extern "C" int snd_pcm_format_little_endian(fns::snd_pcm_format_little_endian_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_little_endian>(format);
}

namespace fns
{

using snd_pcm_format_big_endian_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_big_endian
{
  const char* name = "snd_pcm_format_big_endian";
  const std::vector<const char*> args = {"format"};
  using type = int(*)(snd_pcm_format_t);
};

}

extern "C" int snd_pcm_format_big_endian(fns::snd_pcm_format_big_endian_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_big_endian>(format);
}

namespace fns
{

using snd_pcm_format_cpu_endian_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_cpu_endian
{
  const char* name = "snd_pcm_format_cpu_endian";
  const std::vector<const char*> args = {"format"};
  using type = int(*)(snd_pcm_format_t);
};

}

extern "C" int snd_pcm_format_cpu_endian(fns::snd_pcm_format_cpu_endian_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_cpu_endian>(format);
}

namespace fns
{

using snd_pcm_format_width_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_width
{
  const char* name = "snd_pcm_format_width";
  const std::vector<const char*> args = {"format"};
  using type = int(*)(snd_pcm_format_t);
};

}

extern "C" int snd_pcm_format_width(fns::snd_pcm_format_width_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_width>(format);
}

namespace fns
{

using snd_pcm_format_physical_width_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_physical_width
{
  const char* name = "snd_pcm_format_physical_width";
  const std::vector<const char*> args = {"format"};
  using type = int(*)(snd_pcm_format_t);
};

}

extern "C" int snd_pcm_format_physical_width(fns::snd_pcm_format_physical_width_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_physical_width>(format);
}

namespace fns
{

using snd_pcm_build_linear_format_arg0_t = int;
using snd_pcm_build_linear_format_arg1_t = int;
using snd_pcm_build_linear_format_arg2_t = int;
using snd_pcm_build_linear_format_arg3_t = int;
struct snd_pcm_build_linear_format
{
  const char* name = "snd_pcm_build_linear_format";
  const std::vector<const char*> args = {"width", "pwidth", "unsignd", "big_endian"};
  using type = snd_pcm_format_t(*)(int, int, int, int);
};

}

extern "C" snd_pcm_format_t snd_pcm_build_linear_format(fns::snd_pcm_build_linear_format_arg0_t width, fns::snd_pcm_build_linear_format_arg1_t pwidth, fns::snd_pcm_build_linear_format_arg2_t unsignd, fns::snd_pcm_build_linear_format_arg3_t big_endian)
{
  return fns::call<fns::snd_pcm_build_linear_format>(width, pwidth, unsignd, big_endian);
}

namespace fns
{

using snd_pcm_format_size_arg0_t = snd_pcm_format_t;
using snd_pcm_format_size_arg1_t = size_t;
struct snd_pcm_format_size
{
  const char* name = "snd_pcm_format_size";
  const std::vector<const char*> args = {"format", "samples"};
  using type = ssize_t(*)(snd_pcm_format_t, size_t);
};

}

extern "C" ssize_t snd_pcm_format_size(fns::snd_pcm_format_size_arg0_t format, fns::snd_pcm_format_size_arg1_t samples)
{
  return fns::call<fns::snd_pcm_format_size>(format, samples);
}

namespace fns
{

using snd_pcm_format_silence_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_silence
{
  const char* name = "snd_pcm_format_silence";
  const std::vector<const char*> args = {"format"};
  using type = u_int8_t(*)(snd_pcm_format_t);
};

}

extern "C" u_int8_t snd_pcm_format_silence(fns::snd_pcm_format_silence_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_silence>(format);
}

namespace fns
{

using snd_pcm_format_silence_16_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_silence_16
{
  const char* name = "snd_pcm_format_silence_16";
  const std::vector<const char*> args = {"format"};
  using type = u_int16_t(*)(snd_pcm_format_t);
};

}

extern "C" u_int16_t snd_pcm_format_silence_16(fns::snd_pcm_format_silence_16_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_silence_16>(format);
}

namespace fns
{

using snd_pcm_format_silence_32_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_silence_32
{
  const char* name = "snd_pcm_format_silence_32";
  const std::vector<const char*> args = {"format"};
  using type = u_int32_t(*)(snd_pcm_format_t);
};

}

extern "C" u_int32_t snd_pcm_format_silence_32(fns::snd_pcm_format_silence_32_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_silence_32>(format);
}

namespace fns
{

using snd_pcm_format_silence_64_arg0_t = snd_pcm_format_t;
struct snd_pcm_format_silence_64
{
  const char* name = "snd_pcm_format_silence_64";
  const std::vector<const char*> args = {"format"};
  using type = u_int64_t(*)(snd_pcm_format_t);
};

}

extern "C" u_int64_t snd_pcm_format_silence_64(fns::snd_pcm_format_silence_64_arg0_t format)
{
  return fns::call<fns::snd_pcm_format_silence_64>(format);
}

namespace fns
{

using snd_pcm_format_set_silence_arg0_t = snd_pcm_format_t;
using snd_pcm_format_set_silence_arg1_t = void *;
using snd_pcm_format_set_silence_arg2_t = unsigned int;
struct snd_pcm_format_set_silence
{
  const char* name = "snd_pcm_format_set_silence";
  const std::vector<const char*> args = {"format", "buf", "samples"};
  using type = int(*)(snd_pcm_format_t, void *, unsigned int);
};

}

extern "C" int snd_pcm_format_set_silence(fns::snd_pcm_format_set_silence_arg0_t format, fns::snd_pcm_format_set_silence_arg1_t buf, fns::snd_pcm_format_set_silence_arg2_t samples)
{
  return fns::call<fns::snd_pcm_format_set_silence>(format, buf, samples);
}

namespace fns
{

using snd_pcm_bytes_to_frames_arg0_t = snd_pcm_t *;
using snd_pcm_bytes_to_frames_arg1_t = ssize_t;
struct snd_pcm_bytes_to_frames
{
  const char* name = "snd_pcm_bytes_to_frames";
  const std::vector<const char*> args = {"pcm", "bytes"};
  using type = snd_pcm_sframes_t(*)(snd_pcm_t *, ssize_t);
};

}

extern "C" snd_pcm_sframes_t snd_pcm_bytes_to_frames(fns::snd_pcm_bytes_to_frames_arg0_t pcm, fns::snd_pcm_bytes_to_frames_arg1_t bytes)
{
  return fns::call<fns::snd_pcm_bytes_to_frames>(pcm, bytes);
}

namespace fns
{

using snd_pcm_frames_to_bytes_arg0_t = snd_pcm_t *;
using snd_pcm_frames_to_bytes_arg1_t = snd_pcm_sframes_t;
struct snd_pcm_frames_to_bytes
{
  const char* name = "snd_pcm_frames_to_bytes";
  const std::vector<const char*> args = {"pcm", "frames"};
  using type = ssize_t(*)(snd_pcm_t *, snd_pcm_sframes_t);
};

}

extern "C" ssize_t snd_pcm_frames_to_bytes(fns::snd_pcm_frames_to_bytes_arg0_t pcm, fns::snd_pcm_frames_to_bytes_arg1_t frames)
{
  return fns::call<fns::snd_pcm_frames_to_bytes>(pcm, frames);
}

namespace fns
{

using snd_pcm_bytes_to_samples_arg0_t = snd_pcm_t *;
using snd_pcm_bytes_to_samples_arg1_t = ssize_t;
struct snd_pcm_bytes_to_samples
{
  const char* name = "snd_pcm_bytes_to_samples";
  const std::vector<const char*> args = {"pcm", "bytes"};
  using type = long(*)(snd_pcm_t *, ssize_t);
};

}

extern "C" long snd_pcm_bytes_to_samples(fns::snd_pcm_bytes_to_samples_arg0_t pcm, fns::snd_pcm_bytes_to_samples_arg1_t bytes)
{
  return fns::call<fns::snd_pcm_bytes_to_samples>(pcm, bytes);
}

namespace fns
{

using snd_pcm_samples_to_bytes_arg0_t = snd_pcm_t *;
using snd_pcm_samples_to_bytes_arg1_t = long;
struct snd_pcm_samples_to_bytes
{
  const char* name = "snd_pcm_samples_to_bytes";
  const std::vector<const char*> args = {"pcm", "samples"};
  using type = ssize_t(*)(snd_pcm_t *, long);
};

}

extern "C" ssize_t snd_pcm_samples_to_bytes(fns::snd_pcm_samples_to_bytes_arg0_t pcm, fns::snd_pcm_samples_to_bytes_arg1_t samples)
{
  return fns::call<fns::snd_pcm_samples_to_bytes>(pcm, samples);
}

namespace fns
{

using snd_pcm_area_silence_arg0_t = const snd_pcm_channel_area_t *;
using snd_pcm_area_silence_arg1_t = snd_pcm_uframes_t;
using snd_pcm_area_silence_arg2_t = unsigned int;
using snd_pcm_area_silence_arg3_t = snd_pcm_format_t;
struct snd_pcm_area_silence
{
  const char* name = "snd_pcm_area_silence";
  const std::vector<const char*> args = {"dst_channel", "dst_offset", "samples", "format"};
  using type = int(*)(const snd_pcm_channel_area_t *, snd_pcm_uframes_t, unsigned int, snd_pcm_format_t);
};

}

extern "C" int snd_pcm_area_silence(fns::snd_pcm_area_silence_arg0_t dst_channel, fns::snd_pcm_area_silence_arg1_t dst_offset, fns::snd_pcm_area_silence_arg2_t samples, fns::snd_pcm_area_silence_arg3_t format)
{
  return fns::call<fns::snd_pcm_area_silence>(dst_channel, dst_offset, samples, format);
}

namespace fns
{

using snd_pcm_areas_silence_arg0_t = const snd_pcm_channel_area_t *;
using snd_pcm_areas_silence_arg1_t = snd_pcm_uframes_t;
using snd_pcm_areas_silence_arg2_t = unsigned int;
using snd_pcm_areas_silence_arg3_t = snd_pcm_uframes_t;
using snd_pcm_areas_silence_arg4_t = snd_pcm_format_t;
struct snd_pcm_areas_silence
{
  const char* name = "snd_pcm_areas_silence";
  const std::vector<const char*> args = {"dst_channels", "dst_offset", "channels", "frames", "format"};
  using type = int(*)(const snd_pcm_channel_area_t *, snd_pcm_uframes_t, unsigned int, snd_pcm_uframes_t, snd_pcm_format_t);
};

}

extern "C" int snd_pcm_areas_silence(fns::snd_pcm_areas_silence_arg0_t dst_channels, fns::snd_pcm_areas_silence_arg1_t dst_offset, fns::snd_pcm_areas_silence_arg2_t channels, fns::snd_pcm_areas_silence_arg3_t frames, fns::snd_pcm_areas_silence_arg4_t format)
{
  return fns::call<fns::snd_pcm_areas_silence>(dst_channels, dst_offset, channels, frames, format);
}

namespace fns
{

using snd_pcm_area_copy_arg0_t = const snd_pcm_channel_area_t *;
using snd_pcm_area_copy_arg1_t = snd_pcm_uframes_t;
using snd_pcm_area_copy_arg2_t = const snd_pcm_channel_area_t *;
using snd_pcm_area_copy_arg3_t = snd_pcm_uframes_t;
using snd_pcm_area_copy_arg4_t = unsigned int;
using snd_pcm_area_copy_arg5_t = snd_pcm_format_t;
struct snd_pcm_area_copy
{
  const char* name = "snd_pcm_area_copy";
  const std::vector<const char*> args = {"dst_channel", "dst_offset", "src_channel", "src_offset", "samples", "format"};
  using type = int(*)(const snd_pcm_channel_area_t *, snd_pcm_uframes_t, const snd_pcm_channel_area_t *, snd_pcm_uframes_t, unsigned int, snd_pcm_format_t);
};

}

extern "C" int snd_pcm_area_copy(fns::snd_pcm_area_copy_arg0_t dst_channel, fns::snd_pcm_area_copy_arg1_t dst_offset, fns::snd_pcm_area_copy_arg2_t src_channel, fns::snd_pcm_area_copy_arg3_t src_offset, fns::snd_pcm_area_copy_arg4_t samples, fns::snd_pcm_area_copy_arg5_t format)
{
  return fns::call<fns::snd_pcm_area_copy>(dst_channel, dst_offset, src_channel, src_offset, samples, format);
}

namespace fns
{

using snd_pcm_areas_copy_arg0_t = const snd_pcm_channel_area_t *;
using snd_pcm_areas_copy_arg1_t = snd_pcm_uframes_t;
using snd_pcm_areas_copy_arg2_t = const snd_pcm_channel_area_t *;
using snd_pcm_areas_copy_arg3_t = snd_pcm_uframes_t;
using snd_pcm_areas_copy_arg4_t = unsigned int;
using snd_pcm_areas_copy_arg5_t = snd_pcm_uframes_t;
using snd_pcm_areas_copy_arg6_t = snd_pcm_format_t;
struct snd_pcm_areas_copy
{
  const char* name = "snd_pcm_areas_copy";
  const std::vector<const char*> args = {"dst_channels", "dst_offset", "src_channels", "src_offset", "channels", "frames", "format"};
  using type = int(*)(const snd_pcm_channel_area_t *, snd_pcm_uframes_t, const snd_pcm_channel_area_t *, snd_pcm_uframes_t, unsigned int, snd_pcm_uframes_t, snd_pcm_format_t);
};

}

extern "C" int snd_pcm_areas_copy(fns::snd_pcm_areas_copy_arg0_t dst_channels, fns::snd_pcm_areas_copy_arg1_t dst_offset, fns::snd_pcm_areas_copy_arg2_t src_channels, fns::snd_pcm_areas_copy_arg3_t src_offset, fns::snd_pcm_areas_copy_arg4_t channels, fns::snd_pcm_areas_copy_arg5_t frames, fns::snd_pcm_areas_copy_arg6_t format)
{
  return fns::call<fns::snd_pcm_areas_copy>(dst_channels, dst_offset, src_channels, src_offset, channels, frames, format);
}

namespace fns
{

using snd_pcm_hook_get_pcm_arg0_t = snd_pcm_hook_t *;
struct snd_pcm_hook_get_pcm
{
  const char* name = "snd_pcm_hook_get_pcm";
  const std::vector<const char*> args = {"hook"};
  using type = snd_pcm_t *(*)(snd_pcm_hook_t *);
};

}

extern "C" snd_pcm_t * snd_pcm_hook_get_pcm(fns::snd_pcm_hook_get_pcm_arg0_t hook)
{
  return fns::call<fns::snd_pcm_hook_get_pcm>(hook);
}

namespace fns
{

using snd_pcm_hook_get_private_arg0_t = snd_pcm_hook_t *;
struct snd_pcm_hook_get_private
{
  const char* name = "snd_pcm_hook_get_private";
  const std::vector<const char*> args = {"hook"};
  using type = void *(*)(snd_pcm_hook_t *);
};

}

extern "C" void * snd_pcm_hook_get_private(fns::snd_pcm_hook_get_private_arg0_t hook)
{
  return fns::call<fns::snd_pcm_hook_get_private>(hook);
}

namespace fns
{

using snd_pcm_hook_set_private_arg0_t = snd_pcm_hook_t *;
using snd_pcm_hook_set_private_arg1_t = void *;
struct snd_pcm_hook_set_private
{
  const char* name = "snd_pcm_hook_set_private";
  const std::vector<const char*> args = {"hook", "private_data"};
  using type = void(*)(snd_pcm_hook_t *, void *);
};

}

extern "C" void snd_pcm_hook_set_private(fns::snd_pcm_hook_set_private_arg0_t hook, fns::snd_pcm_hook_set_private_arg1_t private_data)
{
  return fns::call_void<fns::snd_pcm_hook_set_private>(hook, private_data);
}

namespace fns
{

using snd_pcm_hook_add_arg0_t = snd_pcm_hook_t **;
using snd_pcm_hook_add_arg1_t = snd_pcm_t *;
using snd_pcm_hook_add_arg2_t = snd_pcm_hook_type_t;
using snd_pcm_hook_add_arg3_t = snd_pcm_hook_func_t;
using snd_pcm_hook_add_arg4_t = void *;
struct snd_pcm_hook_add
{
  const char* name = "snd_pcm_hook_add";
  const std::vector<const char*> args = {"hookp", "pcm", "type", "func", "private_data"};
  using type = int(*)(snd_pcm_hook_t **, snd_pcm_t *, snd_pcm_hook_type_t, snd_pcm_hook_func_t, void *);
};

}

extern "C" int snd_pcm_hook_add(fns::snd_pcm_hook_add_arg0_t hookp, fns::snd_pcm_hook_add_arg1_t pcm, fns::snd_pcm_hook_add_arg2_t type, fns::snd_pcm_hook_add_arg3_t func, fns::snd_pcm_hook_add_arg4_t private_data)
{
  return fns::call<fns::snd_pcm_hook_add>(hookp, pcm, type, func, private_data);
}

namespace fns
{

using snd_pcm_hook_remove_arg0_t = snd_pcm_hook_t *;
struct snd_pcm_hook_remove
{
  const char* name = "snd_pcm_hook_remove";
  const std::vector<const char*> args = {"hook"};
  using type = int(*)(snd_pcm_hook_t *);
};

}

extern "C" int snd_pcm_hook_remove(fns::snd_pcm_hook_remove_arg0_t hook)
{
  return fns::call<fns::snd_pcm_hook_remove>(hook);
}

namespace fns
{

using snd_pcm_meter_get_bufsize_arg0_t = snd_pcm_t *;
struct snd_pcm_meter_get_bufsize
{
  const char* name = "snd_pcm_meter_get_bufsize";
  const std::vector<const char*> args = {"pcm"};
  using type = snd_pcm_uframes_t(*)(snd_pcm_t *);
};

}

extern "C" snd_pcm_uframes_t snd_pcm_meter_get_bufsize(fns::snd_pcm_meter_get_bufsize_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_meter_get_bufsize>(pcm);
}

namespace fns
{

using snd_pcm_meter_get_channels_arg0_t = snd_pcm_t *;
struct snd_pcm_meter_get_channels
{
  const char* name = "snd_pcm_meter_get_channels";
  const std::vector<const char*> args = {"pcm"};
  using type = unsigned int(*)(snd_pcm_t *);
};

}

extern "C" unsigned int snd_pcm_meter_get_channels(fns::snd_pcm_meter_get_channels_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_meter_get_channels>(pcm);
}

namespace fns
{

using snd_pcm_meter_get_rate_arg0_t = snd_pcm_t *;
struct snd_pcm_meter_get_rate
{
  const char* name = "snd_pcm_meter_get_rate";
  const std::vector<const char*> args = {"pcm"};
  using type = unsigned int(*)(snd_pcm_t *);
};

}

extern "C" unsigned int snd_pcm_meter_get_rate(fns::snd_pcm_meter_get_rate_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_meter_get_rate>(pcm);
}

namespace fns
{

using snd_pcm_meter_get_now_arg0_t = snd_pcm_t *;
struct snd_pcm_meter_get_now
{
  const char* name = "snd_pcm_meter_get_now";
  const std::vector<const char*> args = {"pcm"};
  using type = snd_pcm_uframes_t(*)(snd_pcm_t *);
};

}

extern "C" snd_pcm_uframes_t snd_pcm_meter_get_now(fns::snd_pcm_meter_get_now_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_meter_get_now>(pcm);
}

namespace fns
{

using snd_pcm_meter_get_boundary_arg0_t = snd_pcm_t *;
struct snd_pcm_meter_get_boundary
{
  const char* name = "snd_pcm_meter_get_boundary";
  const std::vector<const char*> args = {"pcm"};
  using type = snd_pcm_uframes_t(*)(snd_pcm_t *);
};

}

extern "C" snd_pcm_uframes_t snd_pcm_meter_get_boundary(fns::snd_pcm_meter_get_boundary_arg0_t pcm)
{
  return fns::call<fns::snd_pcm_meter_get_boundary>(pcm);
}

namespace fns
{

using snd_pcm_meter_add_scope_arg0_t = snd_pcm_t *;
using snd_pcm_meter_add_scope_arg1_t = snd_pcm_scope_t *;
struct snd_pcm_meter_add_scope
{
  const char* name = "snd_pcm_meter_add_scope";
  const std::vector<const char*> args = {"pcm", "scope"};
  using type = int(*)(snd_pcm_t *, snd_pcm_scope_t *);
};

}

extern "C" int snd_pcm_meter_add_scope(fns::snd_pcm_meter_add_scope_arg0_t pcm, fns::snd_pcm_meter_add_scope_arg1_t scope)
{
  return fns::call<fns::snd_pcm_meter_add_scope>(pcm, scope);
}

namespace fns
{

using snd_pcm_meter_search_scope_arg0_t = snd_pcm_t *;
using snd_pcm_meter_search_scope_arg1_t = const char *;
struct snd_pcm_meter_search_scope
{
  const char* name = "snd_pcm_meter_search_scope";
  const std::vector<const char*> args = {"pcm", "name"};
  using type = snd_pcm_scope_t *(*)(snd_pcm_t *, const char *);
};

}

extern "C" snd_pcm_scope_t * snd_pcm_meter_search_scope(fns::snd_pcm_meter_search_scope_arg0_t pcm, fns::snd_pcm_meter_search_scope_arg1_t name)
{
  return fns::call<fns::snd_pcm_meter_search_scope>(pcm, name);
}

namespace fns
{

using snd_pcm_scope_malloc_arg0_t = snd_pcm_scope_t **;
struct snd_pcm_scope_malloc
{
  const char* name = "snd_pcm_scope_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_pcm_scope_t **);
};

}

extern "C" int snd_pcm_scope_malloc(fns::snd_pcm_scope_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_pcm_scope_malloc>(ptr);
}

namespace fns
{

using snd_pcm_scope_set_ops_arg0_t = snd_pcm_scope_t *;
using snd_pcm_scope_set_ops_arg1_t = const snd_pcm_scope_ops_t *;
struct snd_pcm_scope_set_ops
{
  const char* name = "snd_pcm_scope_set_ops";
  const std::vector<const char*> args = {"scope", "val"};
  using type = void(*)(snd_pcm_scope_t *, const snd_pcm_scope_ops_t *);
};

}

extern "C" void snd_pcm_scope_set_ops(fns::snd_pcm_scope_set_ops_arg0_t scope, fns::snd_pcm_scope_set_ops_arg1_t val)
{
  return fns::call_void<fns::snd_pcm_scope_set_ops>(scope, val);
}

namespace fns
{

using snd_pcm_scope_set_name_arg0_t = snd_pcm_scope_t *;
using snd_pcm_scope_set_name_arg1_t = const char *;
struct snd_pcm_scope_set_name
{
  const char* name = "snd_pcm_scope_set_name";
  const std::vector<const char*> args = {"scope", "val"};
  using type = void(*)(snd_pcm_scope_t *, const char *);
};

}

extern "C" void snd_pcm_scope_set_name(fns::snd_pcm_scope_set_name_arg0_t scope, fns::snd_pcm_scope_set_name_arg1_t val)
{
  return fns::call_void<fns::snd_pcm_scope_set_name>(scope, val);
}

namespace fns
{

using snd_pcm_scope_get_name_arg0_t = snd_pcm_scope_t *;
struct snd_pcm_scope_get_name
{
  const char* name = "snd_pcm_scope_get_name";
  const std::vector<const char*> args = {"scope"};
  using type = const char *(*)(snd_pcm_scope_t *);
};

}

extern "C" const char * snd_pcm_scope_get_name(fns::snd_pcm_scope_get_name_arg0_t scope)
{
  return fns::call<fns::snd_pcm_scope_get_name>(scope);
}

namespace fns
{

using snd_pcm_scope_get_callback_private_arg0_t = snd_pcm_scope_t *;
struct snd_pcm_scope_get_callback_private
{
  const char* name = "snd_pcm_scope_get_callback_private";
  const std::vector<const char*> args = {"scope"};
  using type = void *(*)(snd_pcm_scope_t *);
};

}

extern "C" void * snd_pcm_scope_get_callback_private(fns::snd_pcm_scope_get_callback_private_arg0_t scope)
{
  return fns::call<fns::snd_pcm_scope_get_callback_private>(scope);
}

namespace fns
{

using snd_pcm_scope_set_callback_private_arg0_t = snd_pcm_scope_t *;
using snd_pcm_scope_set_callback_private_arg1_t = void *;
struct snd_pcm_scope_set_callback_private
{
  const char* name = "snd_pcm_scope_set_callback_private";
  const std::vector<const char*> args = {"scope", "val"};
  using type = void(*)(snd_pcm_scope_t *, void *);
};

}

extern "C" void snd_pcm_scope_set_callback_private(fns::snd_pcm_scope_set_callback_private_arg0_t scope, fns::snd_pcm_scope_set_callback_private_arg1_t val)
{
  return fns::call_void<fns::snd_pcm_scope_set_callback_private>(scope, val);
}

namespace fns
{

using snd_pcm_scope_s16_open_arg0_t = snd_pcm_t *;
using snd_pcm_scope_s16_open_arg1_t = const char *;
using snd_pcm_scope_s16_open_arg2_t = snd_pcm_scope_t **;
struct snd_pcm_scope_s16_open
{
  const char* name = "snd_pcm_scope_s16_open";
  const std::vector<const char*> args = {"pcm", "name", "scopep"};
  using type = int(*)(snd_pcm_t *, const char *, snd_pcm_scope_t **);
};

}

extern "C" int snd_pcm_scope_s16_open(fns::snd_pcm_scope_s16_open_arg0_t pcm, fns::snd_pcm_scope_s16_open_arg1_t name, fns::snd_pcm_scope_s16_open_arg2_t scopep)
{
  return fns::call<fns::snd_pcm_scope_s16_open>(pcm, name, scopep);
}

namespace fns
{

using snd_pcm_scope_s16_get_channel_buffer_arg0_t = snd_pcm_scope_t *;
using snd_pcm_scope_s16_get_channel_buffer_arg1_t = unsigned int;
struct snd_pcm_scope_s16_get_channel_buffer
{
  const char* name = "snd_pcm_scope_s16_get_channel_buffer";
  const std::vector<const char*> args = {"scope", "channel"};
  using type = int16_t *(*)(snd_pcm_scope_t *, unsigned int);
};

}

extern "C" int16_t * snd_pcm_scope_s16_get_channel_buffer(fns::snd_pcm_scope_s16_get_channel_buffer_arg0_t scope, fns::snd_pcm_scope_s16_get_channel_buffer_arg1_t channel)
{
  return fns::call<fns::snd_pcm_scope_s16_get_channel_buffer>(scope, channel);
}

namespace fns
{

using snd_spcm_init_arg0_t = snd_pcm_t *;
using snd_spcm_init_arg1_t = unsigned int;
using snd_spcm_init_arg2_t = unsigned int;
using snd_spcm_init_arg3_t = snd_pcm_format_t;
using snd_spcm_init_arg4_t = snd_pcm_subformat_t;
using snd_spcm_init_arg5_t = snd_spcm_latency_t;
using snd_spcm_init_arg6_t = snd_pcm_access_t;
using snd_spcm_init_arg7_t = snd_spcm_xrun_type_t;
struct snd_spcm_init
{
  const char* name = "snd_spcm_init";
  const std::vector<const char*> args = {"pcm", "rate", "channels", "format", "subformat", "latency", "_access", "xrun_type"};
  using type = int(*)(snd_pcm_t *, unsigned int, unsigned int, snd_pcm_format_t, snd_pcm_subformat_t, snd_spcm_latency_t, snd_pcm_access_t, snd_spcm_xrun_type_t);
};

}

extern "C" int snd_spcm_init(fns::snd_spcm_init_arg0_t pcm, fns::snd_spcm_init_arg1_t rate, fns::snd_spcm_init_arg2_t channels, fns::snd_spcm_init_arg3_t format, fns::snd_spcm_init_arg4_t subformat, fns::snd_spcm_init_arg5_t latency, fns::snd_spcm_init_arg6_t _access, fns::snd_spcm_init_arg7_t xrun_type)
{
  return fns::call<fns::snd_spcm_init>(pcm, rate, channels, format, subformat, latency, _access, xrun_type);
}

namespace fns
{

using snd_spcm_init_duplex_arg0_t = snd_pcm_t *;
using snd_spcm_init_duplex_arg1_t = snd_pcm_t *;
using snd_spcm_init_duplex_arg2_t = unsigned int;
using snd_spcm_init_duplex_arg3_t = unsigned int;
using snd_spcm_init_duplex_arg4_t = snd_pcm_format_t;
using snd_spcm_init_duplex_arg5_t = snd_pcm_subformat_t;
using snd_spcm_init_duplex_arg6_t = snd_spcm_latency_t;
using snd_spcm_init_duplex_arg7_t = snd_pcm_access_t;
using snd_spcm_init_duplex_arg8_t = snd_spcm_xrun_type_t;
using snd_spcm_init_duplex_arg9_t = snd_spcm_duplex_type_t;
struct snd_spcm_init_duplex
{
  const char* name = "snd_spcm_init_duplex";
  const std::vector<const char*> args = {"playback_pcm", "capture_pcm", "rate", "channels", "format", "subformat", "latency", "_access", "xrun_type", "duplex_type"};
  using type = int(*)(snd_pcm_t *, snd_pcm_t *, unsigned int, unsigned int, snd_pcm_format_t, snd_pcm_subformat_t, snd_spcm_latency_t, snd_pcm_access_t, snd_spcm_xrun_type_t, snd_spcm_duplex_type_t);
};

}

extern "C" int snd_spcm_init_duplex(fns::snd_spcm_init_duplex_arg0_t playback_pcm, fns::snd_spcm_init_duplex_arg1_t capture_pcm, fns::snd_spcm_init_duplex_arg2_t rate, fns::snd_spcm_init_duplex_arg3_t channels, fns::snd_spcm_init_duplex_arg4_t format, fns::snd_spcm_init_duplex_arg5_t subformat, fns::snd_spcm_init_duplex_arg6_t latency, fns::snd_spcm_init_duplex_arg7_t _access, fns::snd_spcm_init_duplex_arg8_t xrun_type, fns::snd_spcm_init_duplex_arg9_t duplex_type)
{
  return fns::call<fns::snd_spcm_init_duplex>(playback_pcm, capture_pcm, rate, channels, format, subformat, latency, _access, xrun_type, duplex_type);
}

namespace fns
{

using snd_spcm_init_get_params_arg0_t = snd_pcm_t *;
using snd_spcm_init_get_params_arg1_t = unsigned int *;
using snd_spcm_init_get_params_arg2_t = snd_pcm_uframes_t *;
using snd_spcm_init_get_params_arg3_t = snd_pcm_uframes_t *;
struct snd_spcm_init_get_params
{
  const char* name = "snd_spcm_init_get_params";
  const std::vector<const char*> args = {"pcm", "rate", "buffer_size", "period_size"};
  using type = int(*)(snd_pcm_t *, unsigned int *, snd_pcm_uframes_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_spcm_init_get_params(fns::snd_spcm_init_get_params_arg0_t pcm, fns::snd_spcm_init_get_params_arg1_t rate, fns::snd_spcm_init_get_params_arg2_t buffer_size, fns::snd_spcm_init_get_params_arg3_t period_size)
{
  return fns::call<fns::snd_spcm_init_get_params>(pcm, rate, buffer_size, period_size);
}

namespace fns
{

using snd_pcm_start_mode_name_arg0_t = snd_pcm_start_t;
struct snd_pcm_start_mode_name
{
  const char* name = "snd_pcm_start_mode_name";
  const std::vector<const char*> args = {"mode"};
  using type = const char *(*)(snd_pcm_start_t);
};

}

extern "C" const char * snd_pcm_start_mode_name(fns::snd_pcm_start_mode_name_arg0_t mode)
{
  return fns::call<fns::snd_pcm_start_mode_name>(mode);
}

namespace fns
{

using snd_pcm_xrun_mode_name_arg0_t = snd_pcm_xrun_t;
struct snd_pcm_xrun_mode_name
{
  const char* name = "snd_pcm_xrun_mode_name";
  const std::vector<const char*> args = {"mode"};
  using type = const char *(*)(snd_pcm_xrun_t);
};

}

extern "C" const char * snd_pcm_xrun_mode_name(fns::snd_pcm_xrun_mode_name_arg0_t mode)
{
  return fns::call<fns::snd_pcm_xrun_mode_name>(mode);
}

namespace fns
{

using snd_pcm_sw_params_set_start_mode_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_set_start_mode_arg1_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_set_start_mode_arg2_t = snd_pcm_start_t;
struct snd_pcm_sw_params_set_start_mode
{
  const char* name = "snd_pcm_sw_params_set_start_mode";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_start_t);
};

}

extern "C" int snd_pcm_sw_params_set_start_mode(fns::snd_pcm_sw_params_set_start_mode_arg0_t pcm, fns::snd_pcm_sw_params_set_start_mode_arg1_t params, fns::snd_pcm_sw_params_set_start_mode_arg2_t val)
{
  return fns::call<fns::snd_pcm_sw_params_set_start_mode>(pcm, params, val);
}

namespace fns
{

using snd_pcm_sw_params_get_start_mode_arg0_t = const snd_pcm_sw_params_t *;
struct snd_pcm_sw_params_get_start_mode
{
  const char* name = "snd_pcm_sw_params_get_start_mode";
  const std::vector<const char*> args = {"params"};
  using type = snd_pcm_start_t(*)(const snd_pcm_sw_params_t *);
};

}

extern "C" snd_pcm_start_t snd_pcm_sw_params_get_start_mode(fns::snd_pcm_sw_params_get_start_mode_arg0_t params)
{
  return fns::call<fns::snd_pcm_sw_params_get_start_mode>(params);
}

namespace fns
{

using snd_pcm_sw_params_set_xrun_mode_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_set_xrun_mode_arg1_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_set_xrun_mode_arg2_t = snd_pcm_xrun_t;
struct snd_pcm_sw_params_set_xrun_mode
{
  const char* name = "snd_pcm_sw_params_set_xrun_mode";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_xrun_t);
};

}

extern "C" int snd_pcm_sw_params_set_xrun_mode(fns::snd_pcm_sw_params_set_xrun_mode_arg0_t pcm, fns::snd_pcm_sw_params_set_xrun_mode_arg1_t params, fns::snd_pcm_sw_params_set_xrun_mode_arg2_t val)
{
  return fns::call<fns::snd_pcm_sw_params_set_xrun_mode>(pcm, params, val);
}

namespace fns
{

using snd_pcm_sw_params_get_xrun_mode_arg0_t = const snd_pcm_sw_params_t *;
struct snd_pcm_sw_params_get_xrun_mode
{
  const char* name = "snd_pcm_sw_params_get_xrun_mode";
  const std::vector<const char*> args = {"params"};
  using type = snd_pcm_xrun_t(*)(const snd_pcm_sw_params_t *);
};

}

extern "C" snd_pcm_xrun_t snd_pcm_sw_params_get_xrun_mode(fns::snd_pcm_sw_params_get_xrun_mode_arg0_t params)
{
  return fns::call<fns::snd_pcm_sw_params_get_xrun_mode>(params);
}

namespace fns
{

using snd_pcm_sw_params_set_xfer_align_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_set_xfer_align_arg1_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_set_xfer_align_arg2_t = snd_pcm_uframes_t;
struct snd_pcm_sw_params_set_xfer_align
{
  const char* name = "snd_pcm_sw_params_set_xfer_align";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
};

}

extern "C" int snd_pcm_sw_params_set_xfer_align(fns::snd_pcm_sw_params_set_xfer_align_arg0_t pcm, fns::snd_pcm_sw_params_set_xfer_align_arg1_t params, fns::snd_pcm_sw_params_set_xfer_align_arg2_t val)
{
  return fns::call<fns::snd_pcm_sw_params_set_xfer_align>(pcm, params, val);
}

namespace fns
{

using snd_pcm_sw_params_get_xfer_align_arg0_t = const snd_pcm_sw_params_t *;
using snd_pcm_sw_params_get_xfer_align_arg1_t = snd_pcm_uframes_t *;
struct snd_pcm_sw_params_get_xfer_align
{
  const char* name = "snd_pcm_sw_params_get_xfer_align";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
};

}

extern "C" int snd_pcm_sw_params_get_xfer_align(fns::snd_pcm_sw_params_get_xfer_align_arg0_t params, fns::snd_pcm_sw_params_get_xfer_align_arg1_t val)
{
  return fns::call<fns::snd_pcm_sw_params_get_xfer_align>(params, val);
}

namespace fns
{

using snd_pcm_sw_params_set_sleep_min_arg0_t = snd_pcm_t *;
using snd_pcm_sw_params_set_sleep_min_arg1_t = snd_pcm_sw_params_t *;
using snd_pcm_sw_params_set_sleep_min_arg2_t = unsigned int;
struct snd_pcm_sw_params_set_sleep_min
{
  const char* name = "snd_pcm_sw_params_set_sleep_min";
  const std::vector<const char*> args = {"pcm", "params", "val"};
  using type = int(*)(snd_pcm_t *, snd_pcm_sw_params_t *, unsigned int);
};

}

extern "C" int snd_pcm_sw_params_set_sleep_min(fns::snd_pcm_sw_params_set_sleep_min_arg0_t pcm, fns::snd_pcm_sw_params_set_sleep_min_arg1_t params, fns::snd_pcm_sw_params_set_sleep_min_arg2_t val)
{
  return fns::call<fns::snd_pcm_sw_params_set_sleep_min>(pcm, params, val);
}

namespace fns
{

using snd_pcm_sw_params_get_sleep_min_arg0_t = const snd_pcm_sw_params_t *;
using snd_pcm_sw_params_get_sleep_min_arg1_t = unsigned int *;
struct snd_pcm_sw_params_get_sleep_min
{
  const char* name = "snd_pcm_sw_params_get_sleep_min";
  const std::vector<const char*> args = {"params", "val"};
  using type = int(*)(const snd_pcm_sw_params_t *, unsigned int *);
};

}

extern "C" int snd_pcm_sw_params_get_sleep_min(fns::snd_pcm_sw_params_get_sleep_min_arg0_t params, fns::snd_pcm_sw_params_get_sleep_min_arg1_t val)
{
  return fns::call<fns::snd_pcm_sw_params_get_sleep_min>(params, val);
}

namespace fns
{

using snd_pcm_hw_params_get_tick_time_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_tick_time_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_tick_time_arg2_t = int *;
struct snd_pcm_hw_params_get_tick_time
{
  const char* name = "snd_pcm_hw_params_get_tick_time";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_tick_time(fns::snd_pcm_hw_params_get_tick_time_arg0_t params, fns::snd_pcm_hw_params_get_tick_time_arg1_t val, fns::snd_pcm_hw_params_get_tick_time_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_tick_time>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_tick_time_min_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_tick_time_min_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_tick_time_min_arg2_t = int *;
struct snd_pcm_hw_params_get_tick_time_min
{
  const char* name = "snd_pcm_hw_params_get_tick_time_min";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_tick_time_min(fns::snd_pcm_hw_params_get_tick_time_min_arg0_t params, fns::snd_pcm_hw_params_get_tick_time_min_arg1_t val, fns::snd_pcm_hw_params_get_tick_time_min_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_tick_time_min>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_get_tick_time_max_arg0_t = const snd_pcm_hw_params_t *;
using snd_pcm_hw_params_get_tick_time_max_arg1_t = unsigned int *;
using snd_pcm_hw_params_get_tick_time_max_arg2_t = int *;
struct snd_pcm_hw_params_get_tick_time_max
{
  const char* name = "snd_pcm_hw_params_get_tick_time_max";
  const std::vector<const char*> args = {"params", "val", "dir"};
  using type = int(*)(const snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_get_tick_time_max(fns::snd_pcm_hw_params_get_tick_time_max_arg0_t params, fns::snd_pcm_hw_params_get_tick_time_max_arg1_t val, fns::snd_pcm_hw_params_get_tick_time_max_arg2_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_get_tick_time_max>(params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_test_tick_time_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_test_tick_time_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_test_tick_time_arg2_t = unsigned int;
using snd_pcm_hw_params_test_tick_time_arg3_t = int;
struct snd_pcm_hw_params_test_tick_time
{
  const char* name = "snd_pcm_hw_params_test_tick_time";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
};

}

extern "C" int snd_pcm_hw_params_test_tick_time(fns::snd_pcm_hw_params_test_tick_time_arg0_t pcm, fns::snd_pcm_hw_params_test_tick_time_arg1_t params, fns::snd_pcm_hw_params_test_tick_time_arg2_t val, fns::snd_pcm_hw_params_test_tick_time_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_test_tick_time>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_tick_time_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_tick_time_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_tick_time_arg2_t = unsigned int;
using snd_pcm_hw_params_set_tick_time_arg3_t = int;
struct snd_pcm_hw_params_set_tick_time
{
  const char* name = "snd_pcm_hw_params_set_tick_time";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
};

}

extern "C" int snd_pcm_hw_params_set_tick_time(fns::snd_pcm_hw_params_set_tick_time_arg0_t pcm, fns::snd_pcm_hw_params_set_tick_time_arg1_t params, fns::snd_pcm_hw_params_set_tick_time_arg2_t val, fns::snd_pcm_hw_params_set_tick_time_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_tick_time>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_tick_time_min_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_tick_time_min_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_tick_time_min_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_tick_time_min_arg3_t = int *;
struct snd_pcm_hw_params_set_tick_time_min
{
  const char* name = "snd_pcm_hw_params_set_tick_time_min";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_tick_time_min(fns::snd_pcm_hw_params_set_tick_time_min_arg0_t pcm, fns::snd_pcm_hw_params_set_tick_time_min_arg1_t params, fns::snd_pcm_hw_params_set_tick_time_min_arg2_t val, fns::snd_pcm_hw_params_set_tick_time_min_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_tick_time_min>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_tick_time_max_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_tick_time_max_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_tick_time_max_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_tick_time_max_arg3_t = int *;
struct snd_pcm_hw_params_set_tick_time_max
{
  const char* name = "snd_pcm_hw_params_set_tick_time_max";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_tick_time_max(fns::snd_pcm_hw_params_set_tick_time_max_arg0_t pcm, fns::snd_pcm_hw_params_set_tick_time_max_arg1_t params, fns::snd_pcm_hw_params_set_tick_time_max_arg2_t val, fns::snd_pcm_hw_params_set_tick_time_max_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_tick_time_max>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_tick_time_minmax_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_tick_time_minmax_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_tick_time_minmax_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_tick_time_minmax_arg3_t = int *;
using snd_pcm_hw_params_set_tick_time_minmax_arg4_t = unsigned int *;
using snd_pcm_hw_params_set_tick_time_minmax_arg5_t = int *;
struct snd_pcm_hw_params_set_tick_time_minmax
{
  const char* name = "snd_pcm_hw_params_set_tick_time_minmax";
  const std::vector<const char*> args = {"pcm", "params", "min", "mindir", "max", "maxdir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_tick_time_minmax(fns::snd_pcm_hw_params_set_tick_time_minmax_arg0_t pcm, fns::snd_pcm_hw_params_set_tick_time_minmax_arg1_t params, fns::snd_pcm_hw_params_set_tick_time_minmax_arg2_t min, fns::snd_pcm_hw_params_set_tick_time_minmax_arg3_t mindir, fns::snd_pcm_hw_params_set_tick_time_minmax_arg4_t max, fns::snd_pcm_hw_params_set_tick_time_minmax_arg5_t maxdir)
{
  return fns::call<fns::snd_pcm_hw_params_set_tick_time_minmax>(pcm, params, min, mindir, max, maxdir);
}

namespace fns
{

using snd_pcm_hw_params_set_tick_time_near_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_tick_time_near_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_tick_time_near_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_tick_time_near_arg3_t = int *;
struct snd_pcm_hw_params_set_tick_time_near
{
  const char* name = "snd_pcm_hw_params_set_tick_time_near";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_tick_time_near(fns::snd_pcm_hw_params_set_tick_time_near_arg0_t pcm, fns::snd_pcm_hw_params_set_tick_time_near_arg1_t params, fns::snd_pcm_hw_params_set_tick_time_near_arg2_t val, fns::snd_pcm_hw_params_set_tick_time_near_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_tick_time_near>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_tick_time_first_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_tick_time_first_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_tick_time_first_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_tick_time_first_arg3_t = int *;
struct snd_pcm_hw_params_set_tick_time_first
{
  const char* name = "snd_pcm_hw_params_set_tick_time_first";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_tick_time_first(fns::snd_pcm_hw_params_set_tick_time_first_arg0_t pcm, fns::snd_pcm_hw_params_set_tick_time_first_arg1_t params, fns::snd_pcm_hw_params_set_tick_time_first_arg2_t val, fns::snd_pcm_hw_params_set_tick_time_first_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_tick_time_first>(pcm, params, val, dir);
}

namespace fns
{

using snd_pcm_hw_params_set_tick_time_last_arg0_t = snd_pcm_t *;
using snd_pcm_hw_params_set_tick_time_last_arg1_t = snd_pcm_hw_params_t *;
using snd_pcm_hw_params_set_tick_time_last_arg2_t = unsigned int *;
using snd_pcm_hw_params_set_tick_time_last_arg3_t = int *;
struct snd_pcm_hw_params_set_tick_time_last
{
  const char* name = "snd_pcm_hw_params_set_tick_time_last";
  const std::vector<const char*> args = {"pcm", "params", "val", "dir"};
  using type = int(*)(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
};

}

extern "C" int snd_pcm_hw_params_set_tick_time_last(fns::snd_pcm_hw_params_set_tick_time_last_arg0_t pcm, fns::snd_pcm_hw_params_set_tick_time_last_arg1_t params, fns::snd_pcm_hw_params_set_tick_time_last_arg2_t val, fns::snd_pcm_hw_params_set_tick_time_last_arg3_t dir)
{
  return fns::call<fns::snd_pcm_hw_params_set_tick_time_last>(pcm, params, val, dir);
}

namespace fns
{

using snd_rawmidi_open_arg0_t = snd_rawmidi_t **;
using snd_rawmidi_open_arg1_t = snd_rawmidi_t **;
using snd_rawmidi_open_arg2_t = const char *;
using snd_rawmidi_open_arg3_t = int;
struct snd_rawmidi_open
{
  const char* name = "snd_rawmidi_open";
  const std::vector<const char*> args = {"in_rmidi", "out_rmidi", "name", "mode"};
  using type = int(*)(snd_rawmidi_t **, snd_rawmidi_t **, const char *, int);
};

}

extern "C" int snd_rawmidi_open(fns::snd_rawmidi_open_arg0_t in_rmidi, fns::snd_rawmidi_open_arg1_t out_rmidi, fns::snd_rawmidi_open_arg2_t name, fns::snd_rawmidi_open_arg3_t mode)
{
  return fns::call<fns::snd_rawmidi_open>(in_rmidi, out_rmidi, name, mode);
}

namespace fns
{

using snd_rawmidi_open_lconf_arg0_t = snd_rawmidi_t **;
using snd_rawmidi_open_lconf_arg1_t = snd_rawmidi_t **;
using snd_rawmidi_open_lconf_arg2_t = const char *;
using snd_rawmidi_open_lconf_arg3_t = int;
using snd_rawmidi_open_lconf_arg4_t = snd_config_t *;
struct snd_rawmidi_open_lconf
{
  const char* name = "snd_rawmidi_open_lconf";
  const std::vector<const char*> args = {"in_rmidi", "out_rmidi", "name", "mode", "lconf"};
  using type = int(*)(snd_rawmidi_t **, snd_rawmidi_t **, const char *, int, snd_config_t *);
};

}

extern "C" int snd_rawmidi_open_lconf(fns::snd_rawmidi_open_lconf_arg0_t in_rmidi, fns::snd_rawmidi_open_lconf_arg1_t out_rmidi, fns::snd_rawmidi_open_lconf_arg2_t name, fns::snd_rawmidi_open_lconf_arg3_t mode, fns::snd_rawmidi_open_lconf_arg4_t lconf)
{
  return fns::call<fns::snd_rawmidi_open_lconf>(in_rmidi, out_rmidi, name, mode, lconf);
}

namespace fns
{

using snd_rawmidi_close_arg0_t = snd_rawmidi_t *;
struct snd_rawmidi_close
{
  const char* name = "snd_rawmidi_close";
  const std::vector<const char*> args = {"rmidi"};
  using type = int(*)(snd_rawmidi_t *);
};

}

extern "C" int snd_rawmidi_close(fns::snd_rawmidi_close_arg0_t rmidi)
{
  return fns::call<fns::snd_rawmidi_close>(rmidi);
}

namespace fns
{

using snd_rawmidi_poll_descriptors_count_arg0_t = snd_rawmidi_t *;
struct snd_rawmidi_poll_descriptors_count
{
  const char* name = "snd_rawmidi_poll_descriptors_count";
  const std::vector<const char*> args = {"rmidi"};
  using type = int(*)(snd_rawmidi_t *);
};

}

extern "C" int snd_rawmidi_poll_descriptors_count(fns::snd_rawmidi_poll_descriptors_count_arg0_t rmidi)
{
  return fns::call<fns::snd_rawmidi_poll_descriptors_count>(rmidi);
}

namespace fns
{

using snd_rawmidi_poll_descriptors_arg0_t = snd_rawmidi_t *;
using snd_rawmidi_poll_descriptors_arg1_t = struct pollfd *;
using snd_rawmidi_poll_descriptors_arg2_t = unsigned int;
struct snd_rawmidi_poll_descriptors
{
  const char* name = "snd_rawmidi_poll_descriptors";
  const std::vector<const char*> args = {"rmidi", "pfds", "space"};
  using type = int(*)(snd_rawmidi_t *, struct pollfd *, unsigned int);
};

}

extern "C" int snd_rawmidi_poll_descriptors(fns::snd_rawmidi_poll_descriptors_arg0_t rmidi, fns::snd_rawmidi_poll_descriptors_arg1_t pfds, fns::snd_rawmidi_poll_descriptors_arg2_t space)
{
  return fns::call<fns::snd_rawmidi_poll_descriptors>(rmidi, pfds, space);
}

namespace fns
{

using snd_rawmidi_poll_descriptors_revents_arg0_t = snd_rawmidi_t *;
using snd_rawmidi_poll_descriptors_revents_arg1_t = struct pollfd *;
using snd_rawmidi_poll_descriptors_revents_arg2_t = unsigned int;
using snd_rawmidi_poll_descriptors_revents_arg3_t = unsigned short *;
struct snd_rawmidi_poll_descriptors_revents
{
  const char* name = "snd_rawmidi_poll_descriptors_revents";
  const std::vector<const char*> args = {"rawmidi", "pfds", "nfds", "revent"};
  using type = int(*)(snd_rawmidi_t *, struct pollfd *, unsigned int, unsigned short *);
};

}

extern "C" int snd_rawmidi_poll_descriptors_revents(fns::snd_rawmidi_poll_descriptors_revents_arg0_t rawmidi, fns::snd_rawmidi_poll_descriptors_revents_arg1_t pfds, fns::snd_rawmidi_poll_descriptors_revents_arg2_t nfds, fns::snd_rawmidi_poll_descriptors_revents_arg3_t revent)
{
  return fns::call<fns::snd_rawmidi_poll_descriptors_revents>(rawmidi, pfds, nfds, revent);
}

namespace fns
{

using snd_rawmidi_nonblock_arg0_t = snd_rawmidi_t *;
using snd_rawmidi_nonblock_arg1_t = int;
struct snd_rawmidi_nonblock
{
  const char* name = "snd_rawmidi_nonblock";
  const std::vector<const char*> args = {"rmidi", "nonblock"};
  using type = int(*)(snd_rawmidi_t *, int);
};

}

extern "C" int snd_rawmidi_nonblock(fns::snd_rawmidi_nonblock_arg0_t rmidi, fns::snd_rawmidi_nonblock_arg1_t nonblock)
{
  return fns::call<fns::snd_rawmidi_nonblock>(rmidi, nonblock);
}

namespace fns
{

struct snd_rawmidi_info_sizeof
{
  const char* name = "snd_rawmidi_info_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_rawmidi_info_sizeof()
{
  return fns::call<fns::snd_rawmidi_info_sizeof>();
}

namespace fns
{

using snd_rawmidi_info_malloc_arg0_t = snd_rawmidi_info_t **;
struct snd_rawmidi_info_malloc
{
  const char* name = "snd_rawmidi_info_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_rawmidi_info_t **);
};

}

extern "C" int snd_rawmidi_info_malloc(fns::snd_rawmidi_info_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_rawmidi_info_malloc>(ptr);
}

namespace fns
{

using snd_rawmidi_info_free_arg0_t = snd_rawmidi_info_t *;
struct snd_rawmidi_info_free
{
  const char* name = "snd_rawmidi_info_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_rawmidi_info_t *);
};

}

extern "C" void snd_rawmidi_info_free(fns::snd_rawmidi_info_free_arg0_t obj)
{
  return fns::call_void<fns::snd_rawmidi_info_free>(obj);
}

namespace fns
{

using snd_rawmidi_info_copy_arg0_t = snd_rawmidi_info_t *;
using snd_rawmidi_info_copy_arg1_t = const snd_rawmidi_info_t *;
struct snd_rawmidi_info_copy
{
  const char* name = "snd_rawmidi_info_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_rawmidi_info_t *, const snd_rawmidi_info_t *);
};

}

extern "C" void snd_rawmidi_info_copy(fns::snd_rawmidi_info_copy_arg0_t dst, fns::snd_rawmidi_info_copy_arg1_t src)
{
  return fns::call_void<fns::snd_rawmidi_info_copy>(dst, src);
}

namespace fns
{

using snd_rawmidi_info_get_device_arg0_t = const snd_rawmidi_info_t *;
struct snd_rawmidi_info_get_device
{
  const char* name = "snd_rawmidi_info_get_device";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_rawmidi_info_t *);
};

}

extern "C" unsigned int snd_rawmidi_info_get_device(fns::snd_rawmidi_info_get_device_arg0_t obj)
{
  return fns::call<fns::snd_rawmidi_info_get_device>(obj);
}

namespace fns
{

using snd_rawmidi_info_get_subdevice_arg0_t = const snd_rawmidi_info_t *;
struct snd_rawmidi_info_get_subdevice
{
  const char* name = "snd_rawmidi_info_get_subdevice";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_rawmidi_info_t *);
};

}

extern "C" unsigned int snd_rawmidi_info_get_subdevice(fns::snd_rawmidi_info_get_subdevice_arg0_t obj)
{
  return fns::call<fns::snd_rawmidi_info_get_subdevice>(obj);
}

namespace fns
{

using snd_rawmidi_info_get_stream_arg0_t = const snd_rawmidi_info_t *;
struct snd_rawmidi_info_get_stream
{
  const char* name = "snd_rawmidi_info_get_stream";
  const std::vector<const char*> args = {"obj"};
  using type = snd_rawmidi_stream_t(*)(const snd_rawmidi_info_t *);
};

}

extern "C" snd_rawmidi_stream_t snd_rawmidi_info_get_stream(fns::snd_rawmidi_info_get_stream_arg0_t obj)
{
  return fns::call<fns::snd_rawmidi_info_get_stream>(obj);
}

namespace fns
{

using snd_rawmidi_info_get_card_arg0_t = const snd_rawmidi_info_t *;
struct snd_rawmidi_info_get_card
{
  const char* name = "snd_rawmidi_info_get_card";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_rawmidi_info_t *);
};

}

extern "C" int snd_rawmidi_info_get_card(fns::snd_rawmidi_info_get_card_arg0_t obj)
{
  return fns::call<fns::snd_rawmidi_info_get_card>(obj);
}

namespace fns
{

using snd_rawmidi_info_get_flags_arg0_t = const snd_rawmidi_info_t *;
struct snd_rawmidi_info_get_flags
{
  const char* name = "snd_rawmidi_info_get_flags";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_rawmidi_info_t *);
};

}

extern "C" unsigned int snd_rawmidi_info_get_flags(fns::snd_rawmidi_info_get_flags_arg0_t obj)
{
  return fns::call<fns::snd_rawmidi_info_get_flags>(obj);
}

namespace fns
{

using snd_rawmidi_info_get_id_arg0_t = const snd_rawmidi_info_t *;
struct snd_rawmidi_info_get_id
{
  const char* name = "snd_rawmidi_info_get_id";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_rawmidi_info_t *);
};

}

extern "C" const char * snd_rawmidi_info_get_id(fns::snd_rawmidi_info_get_id_arg0_t obj)
{
  return fns::call<fns::snd_rawmidi_info_get_id>(obj);
}

namespace fns
{

using snd_rawmidi_info_get_name_arg0_t = const snd_rawmidi_info_t *;
struct snd_rawmidi_info_get_name
{
  const char* name = "snd_rawmidi_info_get_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_rawmidi_info_t *);
};

}

extern "C" const char * snd_rawmidi_info_get_name(fns::snd_rawmidi_info_get_name_arg0_t obj)
{
  return fns::call<fns::snd_rawmidi_info_get_name>(obj);
}

namespace fns
{

using snd_rawmidi_info_get_subdevice_name_arg0_t = const snd_rawmidi_info_t *;
struct snd_rawmidi_info_get_subdevice_name
{
  const char* name = "snd_rawmidi_info_get_subdevice_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_rawmidi_info_t *);
};

}

extern "C" const char * snd_rawmidi_info_get_subdevice_name(fns::snd_rawmidi_info_get_subdevice_name_arg0_t obj)
{
  return fns::call<fns::snd_rawmidi_info_get_subdevice_name>(obj);
}

namespace fns
{

using snd_rawmidi_info_get_subdevices_count_arg0_t = const snd_rawmidi_info_t *;
struct snd_rawmidi_info_get_subdevices_count
{
  const char* name = "snd_rawmidi_info_get_subdevices_count";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_rawmidi_info_t *);
};

}

extern "C" unsigned int snd_rawmidi_info_get_subdevices_count(fns::snd_rawmidi_info_get_subdevices_count_arg0_t obj)
{
  return fns::call<fns::snd_rawmidi_info_get_subdevices_count>(obj);
}

namespace fns
{

using snd_rawmidi_info_get_subdevices_avail_arg0_t = const snd_rawmidi_info_t *;
struct snd_rawmidi_info_get_subdevices_avail
{
  const char* name = "snd_rawmidi_info_get_subdevices_avail";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_rawmidi_info_t *);
};

}

extern "C" unsigned int snd_rawmidi_info_get_subdevices_avail(fns::snd_rawmidi_info_get_subdevices_avail_arg0_t obj)
{
  return fns::call<fns::snd_rawmidi_info_get_subdevices_avail>(obj);
}

namespace fns
{

using snd_rawmidi_info_set_device_arg0_t = snd_rawmidi_info_t *;
using snd_rawmidi_info_set_device_arg1_t = unsigned int;
struct snd_rawmidi_info_set_device
{
  const char* name = "snd_rawmidi_info_set_device";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_rawmidi_info_t *, unsigned int);
};

}

extern "C" void snd_rawmidi_info_set_device(fns::snd_rawmidi_info_set_device_arg0_t obj, fns::snd_rawmidi_info_set_device_arg1_t val)
{
  return fns::call_void<fns::snd_rawmidi_info_set_device>(obj, val);
}

namespace fns
{

using snd_rawmidi_info_set_subdevice_arg0_t = snd_rawmidi_info_t *;
using snd_rawmidi_info_set_subdevice_arg1_t = unsigned int;
struct snd_rawmidi_info_set_subdevice
{
  const char* name = "snd_rawmidi_info_set_subdevice";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_rawmidi_info_t *, unsigned int);
};

}

extern "C" void snd_rawmidi_info_set_subdevice(fns::snd_rawmidi_info_set_subdevice_arg0_t obj, fns::snd_rawmidi_info_set_subdevice_arg1_t val)
{
  return fns::call_void<fns::snd_rawmidi_info_set_subdevice>(obj, val);
}

namespace fns
{

using snd_rawmidi_info_set_stream_arg0_t = snd_rawmidi_info_t *;
using snd_rawmidi_info_set_stream_arg1_t = snd_rawmidi_stream_t;
struct snd_rawmidi_info_set_stream
{
  const char* name = "snd_rawmidi_info_set_stream";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_rawmidi_info_t *, snd_rawmidi_stream_t);
};

}

extern "C" void snd_rawmidi_info_set_stream(fns::snd_rawmidi_info_set_stream_arg0_t obj, fns::snd_rawmidi_info_set_stream_arg1_t val)
{
  return fns::call_void<fns::snd_rawmidi_info_set_stream>(obj, val);
}

namespace fns
{

using snd_rawmidi_info_arg0_t = snd_rawmidi_t *;
using snd_rawmidi_info_arg1_t = snd_rawmidi_info_t *;
struct snd_rawmidi_info
{
  const char* name = "snd_rawmidi_info";
  const std::vector<const char*> args = {"rmidi", "info"};
  using type = int(*)(snd_rawmidi_t *, snd_rawmidi_info_t *);
};

}

extern "C" int snd_rawmidi_info(fns::snd_rawmidi_info_arg0_t rmidi, fns::snd_rawmidi_info_arg1_t info)
{
  return fns::call<fns::snd_rawmidi_info>(rmidi, info);
}

namespace fns
{

struct snd_rawmidi_params_sizeof
{
  const char* name = "snd_rawmidi_params_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_rawmidi_params_sizeof()
{
  return fns::call<fns::snd_rawmidi_params_sizeof>();
}

namespace fns
{

using snd_rawmidi_params_malloc_arg0_t = snd_rawmidi_params_t **;
struct snd_rawmidi_params_malloc
{
  const char* name = "snd_rawmidi_params_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_rawmidi_params_t **);
};

}

extern "C" int snd_rawmidi_params_malloc(fns::snd_rawmidi_params_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_rawmidi_params_malloc>(ptr);
}

namespace fns
{

using snd_rawmidi_params_free_arg0_t = snd_rawmidi_params_t *;
struct snd_rawmidi_params_free
{
  const char* name = "snd_rawmidi_params_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_rawmidi_params_t *);
};

}

extern "C" void snd_rawmidi_params_free(fns::snd_rawmidi_params_free_arg0_t obj)
{
  return fns::call_void<fns::snd_rawmidi_params_free>(obj);
}

namespace fns
{

using snd_rawmidi_params_copy_arg0_t = snd_rawmidi_params_t *;
using snd_rawmidi_params_copy_arg1_t = const snd_rawmidi_params_t *;
struct snd_rawmidi_params_copy
{
  const char* name = "snd_rawmidi_params_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_rawmidi_params_t *, const snd_rawmidi_params_t *);
};

}

extern "C" void snd_rawmidi_params_copy(fns::snd_rawmidi_params_copy_arg0_t dst, fns::snd_rawmidi_params_copy_arg1_t src)
{
  return fns::call_void<fns::snd_rawmidi_params_copy>(dst, src);
}

namespace fns
{

using snd_rawmidi_params_set_buffer_size_arg0_t = snd_rawmidi_t *;
using snd_rawmidi_params_set_buffer_size_arg1_t = snd_rawmidi_params_t *;
using snd_rawmidi_params_set_buffer_size_arg2_t = size_t;
struct snd_rawmidi_params_set_buffer_size
{
  const char* name = "snd_rawmidi_params_set_buffer_size";
  const std::vector<const char*> args = {"rmidi", "params", "val"};
  using type = int(*)(snd_rawmidi_t *, snd_rawmidi_params_t *, size_t);
};

}

extern "C" int snd_rawmidi_params_set_buffer_size(fns::snd_rawmidi_params_set_buffer_size_arg0_t rmidi, fns::snd_rawmidi_params_set_buffer_size_arg1_t params, fns::snd_rawmidi_params_set_buffer_size_arg2_t val)
{
  return fns::call<fns::snd_rawmidi_params_set_buffer_size>(rmidi, params, val);
}

namespace fns
{

using snd_rawmidi_params_get_buffer_size_arg0_t = const snd_rawmidi_params_t *;
struct snd_rawmidi_params_get_buffer_size
{
  const char* name = "snd_rawmidi_params_get_buffer_size";
  const std::vector<const char*> args = {"params"};
  using type = size_t(*)(const snd_rawmidi_params_t *);
};

}

extern "C" size_t snd_rawmidi_params_get_buffer_size(fns::snd_rawmidi_params_get_buffer_size_arg0_t params)
{
  return fns::call<fns::snd_rawmidi_params_get_buffer_size>(params);
}

namespace fns
{

using snd_rawmidi_params_set_avail_min_arg0_t = snd_rawmidi_t *;
using snd_rawmidi_params_set_avail_min_arg1_t = snd_rawmidi_params_t *;
using snd_rawmidi_params_set_avail_min_arg2_t = size_t;
struct snd_rawmidi_params_set_avail_min
{
  const char* name = "snd_rawmidi_params_set_avail_min";
  const std::vector<const char*> args = {"rmidi", "params", "val"};
  using type = int(*)(snd_rawmidi_t *, snd_rawmidi_params_t *, size_t);
};

}

extern "C" int snd_rawmidi_params_set_avail_min(fns::snd_rawmidi_params_set_avail_min_arg0_t rmidi, fns::snd_rawmidi_params_set_avail_min_arg1_t params, fns::snd_rawmidi_params_set_avail_min_arg2_t val)
{
  return fns::call<fns::snd_rawmidi_params_set_avail_min>(rmidi, params, val);
}

namespace fns
{

using snd_rawmidi_params_get_avail_min_arg0_t = const snd_rawmidi_params_t *;
struct snd_rawmidi_params_get_avail_min
{
  const char* name = "snd_rawmidi_params_get_avail_min";
  const std::vector<const char*> args = {"params"};
  using type = size_t(*)(const snd_rawmidi_params_t *);
};

}

extern "C" size_t snd_rawmidi_params_get_avail_min(fns::snd_rawmidi_params_get_avail_min_arg0_t params)
{
  return fns::call<fns::snd_rawmidi_params_get_avail_min>(params);
}

namespace fns
{

using snd_rawmidi_params_set_no_active_sensing_arg0_t = snd_rawmidi_t *;
using snd_rawmidi_params_set_no_active_sensing_arg1_t = snd_rawmidi_params_t *;
using snd_rawmidi_params_set_no_active_sensing_arg2_t = int;
struct snd_rawmidi_params_set_no_active_sensing
{
  const char* name = "snd_rawmidi_params_set_no_active_sensing";
  const std::vector<const char*> args = {"rmidi", "params", "val"};
  using type = int(*)(snd_rawmidi_t *, snd_rawmidi_params_t *, int);
};

}

extern "C" int snd_rawmidi_params_set_no_active_sensing(fns::snd_rawmidi_params_set_no_active_sensing_arg0_t rmidi, fns::snd_rawmidi_params_set_no_active_sensing_arg1_t params, fns::snd_rawmidi_params_set_no_active_sensing_arg2_t val)
{
  return fns::call<fns::snd_rawmidi_params_set_no_active_sensing>(rmidi, params, val);
}

namespace fns
{

using snd_rawmidi_params_get_no_active_sensing_arg0_t = const snd_rawmidi_params_t *;
struct snd_rawmidi_params_get_no_active_sensing
{
  const char* name = "snd_rawmidi_params_get_no_active_sensing";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(const snd_rawmidi_params_t *);
};

}

extern "C" int snd_rawmidi_params_get_no_active_sensing(fns::snd_rawmidi_params_get_no_active_sensing_arg0_t params)
{
  return fns::call<fns::snd_rawmidi_params_get_no_active_sensing>(params);
}

namespace fns
{

using snd_rawmidi_params_arg0_t = snd_rawmidi_t *;
using snd_rawmidi_params_arg1_t = snd_rawmidi_params_t *;
struct snd_rawmidi_params
{
  const char* name = "snd_rawmidi_params";
  const std::vector<const char*> args = {"rmidi", "params"};
  using type = int(*)(snd_rawmidi_t *, snd_rawmidi_params_t *);
};

}

extern "C" int snd_rawmidi_params(fns::snd_rawmidi_params_arg0_t rmidi, fns::snd_rawmidi_params_arg1_t params)
{
  return fns::call<fns::snd_rawmidi_params>(rmidi, params);
}

namespace fns
{

using snd_rawmidi_params_current_arg0_t = snd_rawmidi_t *;
using snd_rawmidi_params_current_arg1_t = snd_rawmidi_params_t *;
struct snd_rawmidi_params_current
{
  const char* name = "snd_rawmidi_params_current";
  const std::vector<const char*> args = {"rmidi", "params"};
  using type = int(*)(snd_rawmidi_t *, snd_rawmidi_params_t *);
};

}

extern "C" int snd_rawmidi_params_current(fns::snd_rawmidi_params_current_arg0_t rmidi, fns::snd_rawmidi_params_current_arg1_t params)
{
  return fns::call<fns::snd_rawmidi_params_current>(rmidi, params);
}

namespace fns
{

struct snd_rawmidi_status_sizeof
{
  const char* name = "snd_rawmidi_status_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_rawmidi_status_sizeof()
{
  return fns::call<fns::snd_rawmidi_status_sizeof>();
}

namespace fns
{

using snd_rawmidi_status_malloc_arg0_t = snd_rawmidi_status_t **;
struct snd_rawmidi_status_malloc
{
  const char* name = "snd_rawmidi_status_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_rawmidi_status_t **);
};

}

extern "C" int snd_rawmidi_status_malloc(fns::snd_rawmidi_status_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_rawmidi_status_malloc>(ptr);
}

namespace fns
{

using snd_rawmidi_status_free_arg0_t = snd_rawmidi_status_t *;
struct snd_rawmidi_status_free
{
  const char* name = "snd_rawmidi_status_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_rawmidi_status_t *);
};

}

extern "C" void snd_rawmidi_status_free(fns::snd_rawmidi_status_free_arg0_t obj)
{
  return fns::call_void<fns::snd_rawmidi_status_free>(obj);
}

namespace fns
{

using snd_rawmidi_status_copy_arg0_t = snd_rawmidi_status_t *;
using snd_rawmidi_status_copy_arg1_t = const snd_rawmidi_status_t *;
struct snd_rawmidi_status_copy
{
  const char* name = "snd_rawmidi_status_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_rawmidi_status_t *, const snd_rawmidi_status_t *);
};

}

extern "C" void snd_rawmidi_status_copy(fns::snd_rawmidi_status_copy_arg0_t dst, fns::snd_rawmidi_status_copy_arg1_t src)
{
  return fns::call_void<fns::snd_rawmidi_status_copy>(dst, src);
}

namespace fns
{

using snd_rawmidi_status_get_tstamp_arg0_t = const snd_rawmidi_status_t *;
using snd_rawmidi_status_get_tstamp_arg1_t = snd_htimestamp_t *;
struct snd_rawmidi_status_get_tstamp
{
  const char* name = "snd_rawmidi_status_get_tstamp";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(const snd_rawmidi_status_t *, snd_htimestamp_t *);
};

}

extern "C" void snd_rawmidi_status_get_tstamp(fns::snd_rawmidi_status_get_tstamp_arg0_t obj, fns::snd_rawmidi_status_get_tstamp_arg1_t ptr)
{
  return fns::call_void<fns::snd_rawmidi_status_get_tstamp>(obj, ptr);
}

namespace fns
{

using snd_rawmidi_status_get_avail_arg0_t = const snd_rawmidi_status_t *;
struct snd_rawmidi_status_get_avail
{
  const char* name = "snd_rawmidi_status_get_avail";
  const std::vector<const char*> args = {"obj"};
  using type = size_t(*)(const snd_rawmidi_status_t *);
};

}

extern "C" size_t snd_rawmidi_status_get_avail(fns::snd_rawmidi_status_get_avail_arg0_t obj)
{
  return fns::call<fns::snd_rawmidi_status_get_avail>(obj);
}

namespace fns
{

using snd_rawmidi_status_get_xruns_arg0_t = const snd_rawmidi_status_t *;
struct snd_rawmidi_status_get_xruns
{
  const char* name = "snd_rawmidi_status_get_xruns";
  const std::vector<const char*> args = {"obj"};
  using type = size_t(*)(const snd_rawmidi_status_t *);
};

}

extern "C" size_t snd_rawmidi_status_get_xruns(fns::snd_rawmidi_status_get_xruns_arg0_t obj)
{
  return fns::call<fns::snd_rawmidi_status_get_xruns>(obj);
}

namespace fns
{

using snd_rawmidi_status_arg0_t = snd_rawmidi_t *;
using snd_rawmidi_status_arg1_t = snd_rawmidi_status_t *;
struct snd_rawmidi_status
{
  const char* name = "snd_rawmidi_status";
  const std::vector<const char*> args = {"rmidi", "status"};
  using type = int(*)(snd_rawmidi_t *, snd_rawmidi_status_t *);
};

}

extern "C" int snd_rawmidi_status(fns::snd_rawmidi_status_arg0_t rmidi, fns::snd_rawmidi_status_arg1_t status)
{
  return fns::call<fns::snd_rawmidi_status>(rmidi, status);
}

namespace fns
{

using snd_rawmidi_drain_arg0_t = snd_rawmidi_t *;
struct snd_rawmidi_drain
{
  const char* name = "snd_rawmidi_drain";
  const std::vector<const char*> args = {"rmidi"};
  using type = int(*)(snd_rawmidi_t *);
};

}

extern "C" int snd_rawmidi_drain(fns::snd_rawmidi_drain_arg0_t rmidi)
{
  return fns::call<fns::snd_rawmidi_drain>(rmidi);
}

namespace fns
{

using snd_rawmidi_drop_arg0_t = snd_rawmidi_t *;
struct snd_rawmidi_drop
{
  const char* name = "snd_rawmidi_drop";
  const std::vector<const char*> args = {"rmidi"};
  using type = int(*)(snd_rawmidi_t *);
};

}

extern "C" int snd_rawmidi_drop(fns::snd_rawmidi_drop_arg0_t rmidi)
{
  return fns::call<fns::snd_rawmidi_drop>(rmidi);
}

namespace fns
{

using snd_rawmidi_write_arg0_t = snd_rawmidi_t *;
using snd_rawmidi_write_arg1_t = const void *;
using snd_rawmidi_write_arg2_t = size_t;
struct snd_rawmidi_write
{
  const char* name = "snd_rawmidi_write";
  const std::vector<const char*> args = {"rmidi", "buffer", "size"};
  using type = ssize_t(*)(snd_rawmidi_t *, const void *, size_t);
};

}

extern "C" ssize_t snd_rawmidi_write(fns::snd_rawmidi_write_arg0_t rmidi, fns::snd_rawmidi_write_arg1_t buffer, fns::snd_rawmidi_write_arg2_t size)
{
  return fns::call<fns::snd_rawmidi_write>(rmidi, buffer, size);
}

namespace fns
{

using snd_rawmidi_read_arg0_t = snd_rawmidi_t *;
using snd_rawmidi_read_arg1_t = void *;
using snd_rawmidi_read_arg2_t = size_t;
struct snd_rawmidi_read
{
  const char* name = "snd_rawmidi_read";
  const std::vector<const char*> args = {"rmidi", "buffer", "size"};
  using type = ssize_t(*)(snd_rawmidi_t *, void *, size_t);
};

}

extern "C" ssize_t snd_rawmidi_read(fns::snd_rawmidi_read_arg0_t rmidi, fns::snd_rawmidi_read_arg1_t buffer, fns::snd_rawmidi_read_arg2_t size)
{
  return fns::call<fns::snd_rawmidi_read>(rmidi, buffer, size);
}

namespace fns
{

using snd_rawmidi_name_arg0_t = snd_rawmidi_t *;
struct snd_rawmidi_name
{
  const char* name = "snd_rawmidi_name";
  const std::vector<const char*> args = {"rmidi"};
  using type = const char *(*)(snd_rawmidi_t *);
};

}

extern "C" const char * snd_rawmidi_name(fns::snd_rawmidi_name_arg0_t rmidi)
{
  return fns::call<fns::snd_rawmidi_name>(rmidi);
}

namespace fns
{

using snd_rawmidi_type_arg0_t = snd_rawmidi_t *;
struct snd_rawmidi_type
{
  const char* name = "snd_rawmidi_type";
  const std::vector<const char*> args = {"rmidi"};
  using type = snd_rawmidi_type_t(*)(snd_rawmidi_t *);
};

}

extern "C" snd_rawmidi_type_t snd_rawmidi_type(fns::snd_rawmidi_type_arg0_t rmidi)
{
  return fns::call<fns::snd_rawmidi_type>(rmidi);
}

namespace fns
{

using snd_rawmidi_stream_arg0_t = snd_rawmidi_t *;
struct snd_rawmidi_stream
{
  const char* name = "snd_rawmidi_stream";
  const std::vector<const char*> args = {"rawmidi"};
  using type = snd_rawmidi_stream_t(*)(snd_rawmidi_t *);
};

}

extern "C" snd_rawmidi_stream_t snd_rawmidi_stream(fns::snd_rawmidi_stream_arg0_t rawmidi)
{
  return fns::call<fns::snd_rawmidi_stream>(rawmidi);
}

namespace fns
{

using snd_timer_query_open_arg0_t = snd_timer_query_t **;
using snd_timer_query_open_arg1_t = const char *;
using snd_timer_query_open_arg2_t = int;
struct snd_timer_query_open
{
  const char* name = "snd_timer_query_open";
  const std::vector<const char*> args = {"handle", "name", "mode"};
  using type = int(*)(snd_timer_query_t **, const char *, int);
};

}

extern "C" int snd_timer_query_open(fns::snd_timer_query_open_arg0_t handle, fns::snd_timer_query_open_arg1_t name, fns::snd_timer_query_open_arg2_t mode)
{
  return fns::call<fns::snd_timer_query_open>(handle, name, mode);
}

namespace fns
{

using snd_timer_query_open_lconf_arg0_t = snd_timer_query_t **;
using snd_timer_query_open_lconf_arg1_t = const char *;
using snd_timer_query_open_lconf_arg2_t = int;
using snd_timer_query_open_lconf_arg3_t = snd_config_t *;
struct snd_timer_query_open_lconf
{
  const char* name = "snd_timer_query_open_lconf";
  const std::vector<const char*> args = {"handle", "name", "mode", "lconf"};
  using type = int(*)(snd_timer_query_t **, const char *, int, snd_config_t *);
};

}

extern "C" int snd_timer_query_open_lconf(fns::snd_timer_query_open_lconf_arg0_t handle, fns::snd_timer_query_open_lconf_arg1_t name, fns::snd_timer_query_open_lconf_arg2_t mode, fns::snd_timer_query_open_lconf_arg3_t lconf)
{
  return fns::call<fns::snd_timer_query_open_lconf>(handle, name, mode, lconf);
}

namespace fns
{

using snd_timer_query_close_arg0_t = snd_timer_query_t *;
struct snd_timer_query_close
{
  const char* name = "snd_timer_query_close";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_timer_query_t *);
};

}

extern "C" int snd_timer_query_close(fns::snd_timer_query_close_arg0_t handle)
{
  return fns::call<fns::snd_timer_query_close>(handle);
}

namespace fns
{

using snd_timer_query_next_device_arg0_t = snd_timer_query_t *;
using snd_timer_query_next_device_arg1_t = snd_timer_id_t *;
struct snd_timer_query_next_device
{
  const char* name = "snd_timer_query_next_device";
  const std::vector<const char*> args = {"handle", "tid"};
  using type = int(*)(snd_timer_query_t *, snd_timer_id_t *);
};

}

extern "C" int snd_timer_query_next_device(fns::snd_timer_query_next_device_arg0_t handle, fns::snd_timer_query_next_device_arg1_t tid)
{
  return fns::call<fns::snd_timer_query_next_device>(handle, tid);
}

namespace fns
{

using snd_timer_query_info_arg0_t = snd_timer_query_t *;
using snd_timer_query_info_arg1_t = snd_timer_ginfo_t *;
struct snd_timer_query_info
{
  const char* name = "snd_timer_query_info";
  const std::vector<const char*> args = {"handle", "info"};
  using type = int(*)(snd_timer_query_t *, snd_timer_ginfo_t *);
};

}

extern "C" int snd_timer_query_info(fns::snd_timer_query_info_arg0_t handle, fns::snd_timer_query_info_arg1_t info)
{
  return fns::call<fns::snd_timer_query_info>(handle, info);
}

namespace fns
{

using snd_timer_query_params_arg0_t = snd_timer_query_t *;
using snd_timer_query_params_arg1_t = snd_timer_gparams_t *;
struct snd_timer_query_params
{
  const char* name = "snd_timer_query_params";
  const std::vector<const char*> args = {"handle", "params"};
  using type = int(*)(snd_timer_query_t *, snd_timer_gparams_t *);
};

}

extern "C" int snd_timer_query_params(fns::snd_timer_query_params_arg0_t handle, fns::snd_timer_query_params_arg1_t params)
{
  return fns::call<fns::snd_timer_query_params>(handle, params);
}

namespace fns
{

using snd_timer_query_status_arg0_t = snd_timer_query_t *;
using snd_timer_query_status_arg1_t = snd_timer_gstatus_t *;
struct snd_timer_query_status
{
  const char* name = "snd_timer_query_status";
  const std::vector<const char*> args = {"handle", "status"};
  using type = int(*)(snd_timer_query_t *, snd_timer_gstatus_t *);
};

}

extern "C" int snd_timer_query_status(fns::snd_timer_query_status_arg0_t handle, fns::snd_timer_query_status_arg1_t status)
{
  return fns::call<fns::snd_timer_query_status>(handle, status);
}

namespace fns
{

using snd_timer_open_arg0_t = snd_timer_t **;
using snd_timer_open_arg1_t = const char *;
using snd_timer_open_arg2_t = int;
struct snd_timer_open
{
  const char* name = "snd_timer_open";
  const std::vector<const char*> args = {"handle", "name", "mode"};
  using type = int(*)(snd_timer_t **, const char *, int);
};

}

extern "C" int snd_timer_open(fns::snd_timer_open_arg0_t handle, fns::snd_timer_open_arg1_t name, fns::snd_timer_open_arg2_t mode)
{
  return fns::call<fns::snd_timer_open>(handle, name, mode);
}

namespace fns
{

using snd_timer_open_lconf_arg0_t = snd_timer_t **;
using snd_timer_open_lconf_arg1_t = const char *;
using snd_timer_open_lconf_arg2_t = int;
using snd_timer_open_lconf_arg3_t = snd_config_t *;
struct snd_timer_open_lconf
{
  const char* name = "snd_timer_open_lconf";
  const std::vector<const char*> args = {"handle", "name", "mode", "lconf"};
  using type = int(*)(snd_timer_t **, const char *, int, snd_config_t *);
};

}

extern "C" int snd_timer_open_lconf(fns::snd_timer_open_lconf_arg0_t handle, fns::snd_timer_open_lconf_arg1_t name, fns::snd_timer_open_lconf_arg2_t mode, fns::snd_timer_open_lconf_arg3_t lconf)
{
  return fns::call<fns::snd_timer_open_lconf>(handle, name, mode, lconf);
}

namespace fns
{

using snd_timer_close_arg0_t = snd_timer_t *;
struct snd_timer_close
{
  const char* name = "snd_timer_close";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_timer_t *);
};

}

extern "C" int snd_timer_close(fns::snd_timer_close_arg0_t handle)
{
  return fns::call<fns::snd_timer_close>(handle);
}

namespace fns
{

using snd_async_add_timer_handler_arg0_t = snd_async_handler_t **;
using snd_async_add_timer_handler_arg1_t = snd_timer_t *;
using snd_async_add_timer_handler_arg2_t = snd_async_callback_t;
using snd_async_add_timer_handler_arg3_t = void *;
struct snd_async_add_timer_handler
{
  const char* name = "snd_async_add_timer_handler";
  const std::vector<const char*> args = {"handler", "timer", "callback", "private_data"};
  using type = int(*)(snd_async_handler_t **, snd_timer_t *, snd_async_callback_t, void *);
};

}

extern "C" int snd_async_add_timer_handler(fns::snd_async_add_timer_handler_arg0_t handler, fns::snd_async_add_timer_handler_arg1_t timer, fns::snd_async_add_timer_handler_arg2_t callback, fns::snd_async_add_timer_handler_arg3_t private_data)
{
  return fns::call<fns::snd_async_add_timer_handler>(handler, timer, callback, private_data);
}

namespace fns
{

using snd_async_handler_get_timer_arg0_t = snd_async_handler_t *;
struct snd_async_handler_get_timer
{
  const char* name = "snd_async_handler_get_timer";
  const std::vector<const char*> args = {"handler"};
  using type = snd_timer_t *(*)(snd_async_handler_t *);
};

}

extern "C" snd_timer_t * snd_async_handler_get_timer(fns::snd_async_handler_get_timer_arg0_t handler)
{
  return fns::call<fns::snd_async_handler_get_timer>(handler);
}

namespace fns
{

using snd_timer_poll_descriptors_count_arg0_t = snd_timer_t *;
struct snd_timer_poll_descriptors_count
{
  const char* name = "snd_timer_poll_descriptors_count";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_timer_t *);
};

}

extern "C" int snd_timer_poll_descriptors_count(fns::snd_timer_poll_descriptors_count_arg0_t handle)
{
  return fns::call<fns::snd_timer_poll_descriptors_count>(handle);
}

namespace fns
{

using snd_timer_poll_descriptors_arg0_t = snd_timer_t *;
using snd_timer_poll_descriptors_arg1_t = struct pollfd *;
using snd_timer_poll_descriptors_arg2_t = unsigned int;
struct snd_timer_poll_descriptors
{
  const char* name = "snd_timer_poll_descriptors";
  const std::vector<const char*> args = {"handle", "pfds", "space"};
  using type = int(*)(snd_timer_t *, struct pollfd *, unsigned int);
};

}

extern "C" int snd_timer_poll_descriptors(fns::snd_timer_poll_descriptors_arg0_t handle, fns::snd_timer_poll_descriptors_arg1_t pfds, fns::snd_timer_poll_descriptors_arg2_t space)
{
  return fns::call<fns::snd_timer_poll_descriptors>(handle, pfds, space);
}

namespace fns
{

using snd_timer_poll_descriptors_revents_arg0_t = snd_timer_t *;
using snd_timer_poll_descriptors_revents_arg1_t = struct pollfd *;
using snd_timer_poll_descriptors_revents_arg2_t = unsigned int;
using snd_timer_poll_descriptors_revents_arg3_t = unsigned short *;
struct snd_timer_poll_descriptors_revents
{
  const char* name = "snd_timer_poll_descriptors_revents";
  const std::vector<const char*> args = {"timer", "pfds", "nfds", "revents"};
  using type = int(*)(snd_timer_t *, struct pollfd *, unsigned int, unsigned short *);
};

}

extern "C" int snd_timer_poll_descriptors_revents(fns::snd_timer_poll_descriptors_revents_arg0_t timer, fns::snd_timer_poll_descriptors_revents_arg1_t pfds, fns::snd_timer_poll_descriptors_revents_arg2_t nfds, fns::snd_timer_poll_descriptors_revents_arg3_t revents)
{
  return fns::call<fns::snd_timer_poll_descriptors_revents>(timer, pfds, nfds, revents);
}

namespace fns
{

using snd_timer_info_arg0_t = snd_timer_t *;
using snd_timer_info_arg1_t = snd_timer_info_t *;
struct snd_timer_info
{
  const char* name = "snd_timer_info";
  const std::vector<const char*> args = {"handle", "timer"};
  using type = int(*)(snd_timer_t *, snd_timer_info_t *);
};

}

extern "C" int snd_timer_info(fns::snd_timer_info_arg0_t handle, fns::snd_timer_info_arg1_t timer)
{
  return fns::call<fns::snd_timer_info>(handle, timer);
}

namespace fns
{

using snd_timer_params_arg0_t = snd_timer_t *;
using snd_timer_params_arg1_t = snd_timer_params_t *;
struct snd_timer_params
{
  const char* name = "snd_timer_params";
  const std::vector<const char*> args = {"handle", "params"};
  using type = int(*)(snd_timer_t *, snd_timer_params_t *);
};

}

extern "C" int snd_timer_params(fns::snd_timer_params_arg0_t handle, fns::snd_timer_params_arg1_t params)
{
  return fns::call<fns::snd_timer_params>(handle, params);
}

namespace fns
{

using snd_timer_status_arg0_t = snd_timer_t *;
using snd_timer_status_arg1_t = snd_timer_status_t *;
struct snd_timer_status
{
  const char* name = "snd_timer_status";
  const std::vector<const char*> args = {"handle", "status"};
  using type = int(*)(snd_timer_t *, snd_timer_status_t *);
};

}

extern "C" int snd_timer_status(fns::snd_timer_status_arg0_t handle, fns::snd_timer_status_arg1_t status)
{
  return fns::call<fns::snd_timer_status>(handle, status);
}

namespace fns
{

using snd_timer_start_arg0_t = snd_timer_t *;
struct snd_timer_start
{
  const char* name = "snd_timer_start";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_timer_t *);
};

}

extern "C" int snd_timer_start(fns::snd_timer_start_arg0_t handle)
{
  return fns::call<fns::snd_timer_start>(handle);
}

namespace fns
{

using snd_timer_stop_arg0_t = snd_timer_t *;
struct snd_timer_stop
{
  const char* name = "snd_timer_stop";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_timer_t *);
};

}

extern "C" int snd_timer_stop(fns::snd_timer_stop_arg0_t handle)
{
  return fns::call<fns::snd_timer_stop>(handle);
}

namespace fns
{

using snd_timer_continue_arg0_t = snd_timer_t *;
struct snd_timer_continue
{
  const char* name = "snd_timer_continue";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_timer_t *);
};

}

extern "C" int snd_timer_continue(fns::snd_timer_continue_arg0_t handle)
{
  return fns::call<fns::snd_timer_continue>(handle);
}

namespace fns
{

using snd_timer_read_arg0_t = snd_timer_t *;
using snd_timer_read_arg1_t = void *;
using snd_timer_read_arg2_t = size_t;
struct snd_timer_read
{
  const char* name = "snd_timer_read";
  const std::vector<const char*> args = {"handle", "buffer", "size"};
  using type = ssize_t(*)(snd_timer_t *, void *, size_t);
};

}

extern "C" ssize_t snd_timer_read(fns::snd_timer_read_arg0_t handle, fns::snd_timer_read_arg1_t buffer, fns::snd_timer_read_arg2_t size)
{
  return fns::call<fns::snd_timer_read>(handle, buffer, size);
}

namespace fns
{

struct snd_timer_id_sizeof
{
  const char* name = "snd_timer_id_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_timer_id_sizeof()
{
  return fns::call<fns::snd_timer_id_sizeof>();
}

namespace fns
{

using snd_timer_id_malloc_arg0_t = snd_timer_id_t **;
struct snd_timer_id_malloc
{
  const char* name = "snd_timer_id_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_timer_id_t **);
};

}

extern "C" int snd_timer_id_malloc(fns::snd_timer_id_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_timer_id_malloc>(ptr);
}

namespace fns
{

using snd_timer_id_free_arg0_t = snd_timer_id_t *;
struct snd_timer_id_free
{
  const char* name = "snd_timer_id_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_timer_id_t *);
};

}

extern "C" void snd_timer_id_free(fns::snd_timer_id_free_arg0_t obj)
{
  return fns::call_void<fns::snd_timer_id_free>(obj);
}

namespace fns
{

using snd_timer_id_copy_arg0_t = snd_timer_id_t *;
using snd_timer_id_copy_arg1_t = const snd_timer_id_t *;
struct snd_timer_id_copy
{
  const char* name = "snd_timer_id_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_timer_id_t *, const snd_timer_id_t *);
};

}

extern "C" void snd_timer_id_copy(fns::snd_timer_id_copy_arg0_t dst, fns::snd_timer_id_copy_arg1_t src)
{
  return fns::call_void<fns::snd_timer_id_copy>(dst, src);
}

namespace fns
{

using snd_timer_id_set_class_arg0_t = snd_timer_id_t *;
using snd_timer_id_set_class_arg1_t = int;
struct snd_timer_id_set_class
{
  const char* name = "snd_timer_id_set_class";
  const std::vector<const char*> args = {"id", "dev_class"};
  using type = void(*)(snd_timer_id_t *, int);
};

}

extern "C" void snd_timer_id_set_class(fns::snd_timer_id_set_class_arg0_t id, fns::snd_timer_id_set_class_arg1_t dev_class)
{
  return fns::call_void<fns::snd_timer_id_set_class>(id, dev_class);
}

namespace fns
{

using snd_timer_id_get_class_arg0_t = snd_timer_id_t *;
struct snd_timer_id_get_class
{
  const char* name = "snd_timer_id_get_class";
  const std::vector<const char*> args = {"id"};
  using type = int(*)(snd_timer_id_t *);
};

}

extern "C" int snd_timer_id_get_class(fns::snd_timer_id_get_class_arg0_t id)
{
  return fns::call<fns::snd_timer_id_get_class>(id);
}

namespace fns
{

using snd_timer_id_set_sclass_arg0_t = snd_timer_id_t *;
using snd_timer_id_set_sclass_arg1_t = int;
struct snd_timer_id_set_sclass
{
  const char* name = "snd_timer_id_set_sclass";
  const std::vector<const char*> args = {"id", "dev_sclass"};
  using type = void(*)(snd_timer_id_t *, int);
};

}

extern "C" void snd_timer_id_set_sclass(fns::snd_timer_id_set_sclass_arg0_t id, fns::snd_timer_id_set_sclass_arg1_t dev_sclass)
{
  return fns::call_void<fns::snd_timer_id_set_sclass>(id, dev_sclass);
}

namespace fns
{

using snd_timer_id_get_sclass_arg0_t = snd_timer_id_t *;
struct snd_timer_id_get_sclass
{
  const char* name = "snd_timer_id_get_sclass";
  const std::vector<const char*> args = {"id"};
  using type = int(*)(snd_timer_id_t *);
};

}

extern "C" int snd_timer_id_get_sclass(fns::snd_timer_id_get_sclass_arg0_t id)
{
  return fns::call<fns::snd_timer_id_get_sclass>(id);
}

namespace fns
{

using snd_timer_id_set_card_arg0_t = snd_timer_id_t *;
using snd_timer_id_set_card_arg1_t = int;
struct snd_timer_id_set_card
{
  const char* name = "snd_timer_id_set_card";
  const std::vector<const char*> args = {"id", "card"};
  using type = void(*)(snd_timer_id_t *, int);
};

}

extern "C" void snd_timer_id_set_card(fns::snd_timer_id_set_card_arg0_t id, fns::snd_timer_id_set_card_arg1_t card)
{
  return fns::call_void<fns::snd_timer_id_set_card>(id, card);
}

namespace fns
{

using snd_timer_id_get_card_arg0_t = snd_timer_id_t *;
struct snd_timer_id_get_card
{
  const char* name = "snd_timer_id_get_card";
  const std::vector<const char*> args = {"id"};
  using type = int(*)(snd_timer_id_t *);
};

}

extern "C" int snd_timer_id_get_card(fns::snd_timer_id_get_card_arg0_t id)
{
  return fns::call<fns::snd_timer_id_get_card>(id);
}

namespace fns
{

using snd_timer_id_set_device_arg0_t = snd_timer_id_t *;
using snd_timer_id_set_device_arg1_t = int;
struct snd_timer_id_set_device
{
  const char* name = "snd_timer_id_set_device";
  const std::vector<const char*> args = {"id", "device"};
  using type = void(*)(snd_timer_id_t *, int);
};

}

extern "C" void snd_timer_id_set_device(fns::snd_timer_id_set_device_arg0_t id, fns::snd_timer_id_set_device_arg1_t device)
{
  return fns::call_void<fns::snd_timer_id_set_device>(id, device);
}

namespace fns
{

using snd_timer_id_get_device_arg0_t = snd_timer_id_t *;
struct snd_timer_id_get_device
{
  const char* name = "snd_timer_id_get_device";
  const std::vector<const char*> args = {"id"};
  using type = int(*)(snd_timer_id_t *);
};

}

extern "C" int snd_timer_id_get_device(fns::snd_timer_id_get_device_arg0_t id)
{
  return fns::call<fns::snd_timer_id_get_device>(id);
}

namespace fns
{

using snd_timer_id_set_subdevice_arg0_t = snd_timer_id_t *;
using snd_timer_id_set_subdevice_arg1_t = int;
struct snd_timer_id_set_subdevice
{
  const char* name = "snd_timer_id_set_subdevice";
  const std::vector<const char*> args = {"id", "subdevice"};
  using type = void(*)(snd_timer_id_t *, int);
};

}

extern "C" void snd_timer_id_set_subdevice(fns::snd_timer_id_set_subdevice_arg0_t id, fns::snd_timer_id_set_subdevice_arg1_t subdevice)
{
  return fns::call_void<fns::snd_timer_id_set_subdevice>(id, subdevice);
}

namespace fns
{

using snd_timer_id_get_subdevice_arg0_t = snd_timer_id_t *;
struct snd_timer_id_get_subdevice
{
  const char* name = "snd_timer_id_get_subdevice";
  const std::vector<const char*> args = {"id"};
  using type = int(*)(snd_timer_id_t *);
};

}

extern "C" int snd_timer_id_get_subdevice(fns::snd_timer_id_get_subdevice_arg0_t id)
{
  return fns::call<fns::snd_timer_id_get_subdevice>(id);
}

namespace fns
{

struct snd_timer_ginfo_sizeof
{
  const char* name = "snd_timer_ginfo_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_timer_ginfo_sizeof()
{
  return fns::call<fns::snd_timer_ginfo_sizeof>();
}

namespace fns
{

using snd_timer_ginfo_malloc_arg0_t = snd_timer_ginfo_t **;
struct snd_timer_ginfo_malloc
{
  const char* name = "snd_timer_ginfo_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_timer_ginfo_t **);
};

}

extern "C" int snd_timer_ginfo_malloc(fns::snd_timer_ginfo_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_timer_ginfo_malloc>(ptr);
}

namespace fns
{

using snd_timer_ginfo_free_arg0_t = snd_timer_ginfo_t *;
struct snd_timer_ginfo_free
{
  const char* name = "snd_timer_ginfo_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_timer_ginfo_t *);
};

}

extern "C" void snd_timer_ginfo_free(fns::snd_timer_ginfo_free_arg0_t obj)
{
  return fns::call_void<fns::snd_timer_ginfo_free>(obj);
}

namespace fns
{

using snd_timer_ginfo_copy_arg0_t = snd_timer_ginfo_t *;
using snd_timer_ginfo_copy_arg1_t = const snd_timer_ginfo_t *;
struct snd_timer_ginfo_copy
{
  const char* name = "snd_timer_ginfo_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_timer_ginfo_t *, const snd_timer_ginfo_t *);
};

}

extern "C" void snd_timer_ginfo_copy(fns::snd_timer_ginfo_copy_arg0_t dst, fns::snd_timer_ginfo_copy_arg1_t src)
{
  return fns::call_void<fns::snd_timer_ginfo_copy>(dst, src);
}

namespace fns
{

using snd_timer_ginfo_set_tid_arg0_t = snd_timer_ginfo_t *;
using snd_timer_ginfo_set_tid_arg1_t = snd_timer_id_t *;
struct snd_timer_ginfo_set_tid
{
  const char* name = "snd_timer_ginfo_set_tid";
  const std::vector<const char*> args = {"obj", "tid"};
  using type = int(*)(snd_timer_ginfo_t *, snd_timer_id_t *);
};

}

extern "C" int snd_timer_ginfo_set_tid(fns::snd_timer_ginfo_set_tid_arg0_t obj, fns::snd_timer_ginfo_set_tid_arg1_t tid)
{
  return fns::call<fns::snd_timer_ginfo_set_tid>(obj, tid);
}

namespace fns
{

using snd_timer_ginfo_get_tid_arg0_t = snd_timer_ginfo_t *;
struct snd_timer_ginfo_get_tid
{
  const char* name = "snd_timer_ginfo_get_tid";
  const std::vector<const char*> args = {"obj"};
  using type = snd_timer_id_t *(*)(snd_timer_ginfo_t *);
};

}

extern "C" snd_timer_id_t * snd_timer_ginfo_get_tid(fns::snd_timer_ginfo_get_tid_arg0_t obj)
{
  return fns::call<fns::snd_timer_ginfo_get_tid>(obj);
}

namespace fns
{

using snd_timer_ginfo_get_flags_arg0_t = snd_timer_ginfo_t *;
struct snd_timer_ginfo_get_flags
{
  const char* name = "snd_timer_ginfo_get_flags";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(snd_timer_ginfo_t *);
};

}

extern "C" unsigned int snd_timer_ginfo_get_flags(fns::snd_timer_ginfo_get_flags_arg0_t obj)
{
  return fns::call<fns::snd_timer_ginfo_get_flags>(obj);
}

namespace fns
{

using snd_timer_ginfo_get_card_arg0_t = snd_timer_ginfo_t *;
struct snd_timer_ginfo_get_card
{
  const char* name = "snd_timer_ginfo_get_card";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(snd_timer_ginfo_t *);
};

}

extern "C" int snd_timer_ginfo_get_card(fns::snd_timer_ginfo_get_card_arg0_t obj)
{
  return fns::call<fns::snd_timer_ginfo_get_card>(obj);
}

namespace fns
{

using snd_timer_ginfo_get_id_arg0_t = snd_timer_ginfo_t *;
struct snd_timer_ginfo_get_id
{
  const char* name = "snd_timer_ginfo_get_id";
  const std::vector<const char*> args = {"obj"};
  using type = char *(*)(snd_timer_ginfo_t *);
};

}

extern "C" char * snd_timer_ginfo_get_id(fns::snd_timer_ginfo_get_id_arg0_t obj)
{
  return fns::call<fns::snd_timer_ginfo_get_id>(obj);
}

namespace fns
{

using snd_timer_ginfo_get_name_arg0_t = snd_timer_ginfo_t *;
struct snd_timer_ginfo_get_name
{
  const char* name = "snd_timer_ginfo_get_name";
  const std::vector<const char*> args = {"obj"};
  using type = char *(*)(snd_timer_ginfo_t *);
};

}

extern "C" char * snd_timer_ginfo_get_name(fns::snd_timer_ginfo_get_name_arg0_t obj)
{
  return fns::call<fns::snd_timer_ginfo_get_name>(obj);
}

namespace fns
{

using snd_timer_ginfo_get_resolution_arg0_t = snd_timer_ginfo_t *;
struct snd_timer_ginfo_get_resolution
{
  const char* name = "snd_timer_ginfo_get_resolution";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned long(*)(snd_timer_ginfo_t *);
};

}

extern "C" unsigned long snd_timer_ginfo_get_resolution(fns::snd_timer_ginfo_get_resolution_arg0_t obj)
{
  return fns::call<fns::snd_timer_ginfo_get_resolution>(obj);
}

namespace fns
{

using snd_timer_ginfo_get_resolution_min_arg0_t = snd_timer_ginfo_t *;
struct snd_timer_ginfo_get_resolution_min
{
  const char* name = "snd_timer_ginfo_get_resolution_min";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned long(*)(snd_timer_ginfo_t *);
};

}

extern "C" unsigned long snd_timer_ginfo_get_resolution_min(fns::snd_timer_ginfo_get_resolution_min_arg0_t obj)
{
  return fns::call<fns::snd_timer_ginfo_get_resolution_min>(obj);
}

namespace fns
{

using snd_timer_ginfo_get_resolution_max_arg0_t = snd_timer_ginfo_t *;
struct snd_timer_ginfo_get_resolution_max
{
  const char* name = "snd_timer_ginfo_get_resolution_max";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned long(*)(snd_timer_ginfo_t *);
};

}

extern "C" unsigned long snd_timer_ginfo_get_resolution_max(fns::snd_timer_ginfo_get_resolution_max_arg0_t obj)
{
  return fns::call<fns::snd_timer_ginfo_get_resolution_max>(obj);
}

namespace fns
{

using snd_timer_ginfo_get_clients_arg0_t = snd_timer_ginfo_t *;
struct snd_timer_ginfo_get_clients
{
  const char* name = "snd_timer_ginfo_get_clients";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(snd_timer_ginfo_t *);
};

}

extern "C" unsigned int snd_timer_ginfo_get_clients(fns::snd_timer_ginfo_get_clients_arg0_t obj)
{
  return fns::call<fns::snd_timer_ginfo_get_clients>(obj);
}

namespace fns
{

struct snd_timer_info_sizeof
{
  const char* name = "snd_timer_info_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_timer_info_sizeof()
{
  return fns::call<fns::snd_timer_info_sizeof>();
}

namespace fns
{

using snd_timer_info_malloc_arg0_t = snd_timer_info_t **;
struct snd_timer_info_malloc
{
  const char* name = "snd_timer_info_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_timer_info_t **);
};

}

extern "C" int snd_timer_info_malloc(fns::snd_timer_info_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_timer_info_malloc>(ptr);
}

namespace fns
{

using snd_timer_info_free_arg0_t = snd_timer_info_t *;
struct snd_timer_info_free
{
  const char* name = "snd_timer_info_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_timer_info_t *);
};

}

extern "C" void snd_timer_info_free(fns::snd_timer_info_free_arg0_t obj)
{
  return fns::call_void<fns::snd_timer_info_free>(obj);
}

namespace fns
{

using snd_timer_info_copy_arg0_t = snd_timer_info_t *;
using snd_timer_info_copy_arg1_t = const snd_timer_info_t *;
struct snd_timer_info_copy
{
  const char* name = "snd_timer_info_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_timer_info_t *, const snd_timer_info_t *);
};

}

extern "C" void snd_timer_info_copy(fns::snd_timer_info_copy_arg0_t dst, fns::snd_timer_info_copy_arg1_t src)
{
  return fns::call_void<fns::snd_timer_info_copy>(dst, src);
}

namespace fns
{

using snd_timer_info_is_slave_arg0_t = snd_timer_info_t *;
struct snd_timer_info_is_slave
{
  const char* name = "snd_timer_info_is_slave";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(snd_timer_info_t *);
};

}

extern "C" int snd_timer_info_is_slave(fns::snd_timer_info_is_slave_arg0_t info)
{
  return fns::call<fns::snd_timer_info_is_slave>(info);
}

namespace fns
{

using snd_timer_info_get_card_arg0_t = snd_timer_info_t *;
struct snd_timer_info_get_card
{
  const char* name = "snd_timer_info_get_card";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(snd_timer_info_t *);
};

}

extern "C" int snd_timer_info_get_card(fns::snd_timer_info_get_card_arg0_t info)
{
  return fns::call<fns::snd_timer_info_get_card>(info);
}

namespace fns
{

using snd_timer_info_get_id_arg0_t = snd_timer_info_t *;
struct snd_timer_info_get_id
{
  const char* name = "snd_timer_info_get_id";
  const std::vector<const char*> args = {"info"};
  using type = const char *(*)(snd_timer_info_t *);
};

}

extern "C" const char * snd_timer_info_get_id(fns::snd_timer_info_get_id_arg0_t info)
{
  return fns::call<fns::snd_timer_info_get_id>(info);
}

namespace fns
{

using snd_timer_info_get_name_arg0_t = snd_timer_info_t *;
struct snd_timer_info_get_name
{
  const char* name = "snd_timer_info_get_name";
  const std::vector<const char*> args = {"info"};
  using type = const char *(*)(snd_timer_info_t *);
};

}

extern "C" const char * snd_timer_info_get_name(fns::snd_timer_info_get_name_arg0_t info)
{
  return fns::call<fns::snd_timer_info_get_name>(info);
}

namespace fns
{

using snd_timer_info_get_resolution_arg0_t = snd_timer_info_t *;
struct snd_timer_info_get_resolution
{
  const char* name = "snd_timer_info_get_resolution";
  const std::vector<const char*> args = {"info"};
  using type = long(*)(snd_timer_info_t *);
};

}

extern "C" long snd_timer_info_get_resolution(fns::snd_timer_info_get_resolution_arg0_t info)
{
  return fns::call<fns::snd_timer_info_get_resolution>(info);
}

namespace fns
{

struct snd_timer_params_sizeof
{
  const char* name = "snd_timer_params_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_timer_params_sizeof()
{
  return fns::call<fns::snd_timer_params_sizeof>();
}

namespace fns
{

using snd_timer_params_malloc_arg0_t = snd_timer_params_t **;
struct snd_timer_params_malloc
{
  const char* name = "snd_timer_params_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_timer_params_t **);
};

}

extern "C" int snd_timer_params_malloc(fns::snd_timer_params_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_timer_params_malloc>(ptr);
}

namespace fns
{

using snd_timer_params_free_arg0_t = snd_timer_params_t *;
struct snd_timer_params_free
{
  const char* name = "snd_timer_params_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_timer_params_t *);
};

}

extern "C" void snd_timer_params_free(fns::snd_timer_params_free_arg0_t obj)
{
  return fns::call_void<fns::snd_timer_params_free>(obj);
}

namespace fns
{

using snd_timer_params_copy_arg0_t = snd_timer_params_t *;
using snd_timer_params_copy_arg1_t = const snd_timer_params_t *;
struct snd_timer_params_copy
{
  const char* name = "snd_timer_params_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_timer_params_t *, const snd_timer_params_t *);
};

}

extern "C" void snd_timer_params_copy(fns::snd_timer_params_copy_arg0_t dst, fns::snd_timer_params_copy_arg1_t src)
{
  return fns::call_void<fns::snd_timer_params_copy>(dst, src);
}

namespace fns
{

using snd_timer_params_set_auto_start_arg0_t = snd_timer_params_t *;
using snd_timer_params_set_auto_start_arg1_t = int;
struct snd_timer_params_set_auto_start
{
  const char* name = "snd_timer_params_set_auto_start";
  const std::vector<const char*> args = {"params", "auto_start"};
  using type = int(*)(snd_timer_params_t *, int);
};

}

extern "C" int snd_timer_params_set_auto_start(fns::snd_timer_params_set_auto_start_arg0_t params, fns::snd_timer_params_set_auto_start_arg1_t auto_start)
{
  return fns::call<fns::snd_timer_params_set_auto_start>(params, auto_start);
}

namespace fns
{

using snd_timer_params_get_auto_start_arg0_t = snd_timer_params_t *;
struct snd_timer_params_get_auto_start
{
  const char* name = "snd_timer_params_get_auto_start";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(snd_timer_params_t *);
};

}

extern "C" int snd_timer_params_get_auto_start(fns::snd_timer_params_get_auto_start_arg0_t params)
{
  return fns::call<fns::snd_timer_params_get_auto_start>(params);
}

namespace fns
{

using snd_timer_params_set_exclusive_arg0_t = snd_timer_params_t *;
using snd_timer_params_set_exclusive_arg1_t = int;
struct snd_timer_params_set_exclusive
{
  const char* name = "snd_timer_params_set_exclusive";
  const std::vector<const char*> args = {"params", "exclusive"};
  using type = int(*)(snd_timer_params_t *, int);
};

}

extern "C" int snd_timer_params_set_exclusive(fns::snd_timer_params_set_exclusive_arg0_t params, fns::snd_timer_params_set_exclusive_arg1_t exclusive)
{
  return fns::call<fns::snd_timer_params_set_exclusive>(params, exclusive);
}

namespace fns
{

using snd_timer_params_get_exclusive_arg0_t = snd_timer_params_t *;
struct snd_timer_params_get_exclusive
{
  const char* name = "snd_timer_params_get_exclusive";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(snd_timer_params_t *);
};

}

extern "C" int snd_timer_params_get_exclusive(fns::snd_timer_params_get_exclusive_arg0_t params)
{
  return fns::call<fns::snd_timer_params_get_exclusive>(params);
}

namespace fns
{

using snd_timer_params_set_early_event_arg0_t = snd_timer_params_t *;
using snd_timer_params_set_early_event_arg1_t = int;
struct snd_timer_params_set_early_event
{
  const char* name = "snd_timer_params_set_early_event";
  const std::vector<const char*> args = {"params", "early_event"};
  using type = int(*)(snd_timer_params_t *, int);
};

}

extern "C" int snd_timer_params_set_early_event(fns::snd_timer_params_set_early_event_arg0_t params, fns::snd_timer_params_set_early_event_arg1_t early_event)
{
  return fns::call<fns::snd_timer_params_set_early_event>(params, early_event);
}

namespace fns
{

using snd_timer_params_get_early_event_arg0_t = snd_timer_params_t *;
struct snd_timer_params_get_early_event
{
  const char* name = "snd_timer_params_get_early_event";
  const std::vector<const char*> args = {"params"};
  using type = int(*)(snd_timer_params_t *);
};

}

extern "C" int snd_timer_params_get_early_event(fns::snd_timer_params_get_early_event_arg0_t params)
{
  return fns::call<fns::snd_timer_params_get_early_event>(params);
}

namespace fns
{

using snd_timer_params_set_ticks_arg0_t = snd_timer_params_t *;
using snd_timer_params_set_ticks_arg1_t = long;
struct snd_timer_params_set_ticks
{
  const char* name = "snd_timer_params_set_ticks";
  const std::vector<const char*> args = {"params", "ticks"};
  using type = void(*)(snd_timer_params_t *, long);
};

}

extern "C" void snd_timer_params_set_ticks(fns::snd_timer_params_set_ticks_arg0_t params, fns::snd_timer_params_set_ticks_arg1_t ticks)
{
  return fns::call_void<fns::snd_timer_params_set_ticks>(params, ticks);
}

namespace fns
{

using snd_timer_params_get_ticks_arg0_t = snd_timer_params_t *;
struct snd_timer_params_get_ticks
{
  const char* name = "snd_timer_params_get_ticks";
  const std::vector<const char*> args = {"params"};
  using type = long(*)(snd_timer_params_t *);
};

}

extern "C" long snd_timer_params_get_ticks(fns::snd_timer_params_get_ticks_arg0_t params)
{
  return fns::call<fns::snd_timer_params_get_ticks>(params);
}

namespace fns
{

using snd_timer_params_set_queue_size_arg0_t = snd_timer_params_t *;
using snd_timer_params_set_queue_size_arg1_t = long;
struct snd_timer_params_set_queue_size
{
  const char* name = "snd_timer_params_set_queue_size";
  const std::vector<const char*> args = {"params", "queue_size"};
  using type = void(*)(snd_timer_params_t *, long);
};

}

extern "C" void snd_timer_params_set_queue_size(fns::snd_timer_params_set_queue_size_arg0_t params, fns::snd_timer_params_set_queue_size_arg1_t queue_size)
{
  return fns::call_void<fns::snd_timer_params_set_queue_size>(params, queue_size);
}

namespace fns
{

using snd_timer_params_get_queue_size_arg0_t = snd_timer_params_t *;
struct snd_timer_params_get_queue_size
{
  const char* name = "snd_timer_params_get_queue_size";
  const std::vector<const char*> args = {"params"};
  using type = long(*)(snd_timer_params_t *);
};

}

extern "C" long snd_timer_params_get_queue_size(fns::snd_timer_params_get_queue_size_arg0_t params)
{
  return fns::call<fns::snd_timer_params_get_queue_size>(params);
}

namespace fns
{

using snd_timer_params_set_filter_arg0_t = snd_timer_params_t *;
using snd_timer_params_set_filter_arg1_t = unsigned int;
struct snd_timer_params_set_filter
{
  const char* name = "snd_timer_params_set_filter";
  const std::vector<const char*> args = {"params", "filter"};
  using type = void(*)(snd_timer_params_t *, unsigned int);
};

}

extern "C" void snd_timer_params_set_filter(fns::snd_timer_params_set_filter_arg0_t params, fns::snd_timer_params_set_filter_arg1_t filter)
{
  return fns::call_void<fns::snd_timer_params_set_filter>(params, filter);
}

namespace fns
{

using snd_timer_params_get_filter_arg0_t = snd_timer_params_t *;
struct snd_timer_params_get_filter
{
  const char* name = "snd_timer_params_get_filter";
  const std::vector<const char*> args = {"params"};
  using type = unsigned int(*)(snd_timer_params_t *);
};

}

extern "C" unsigned int snd_timer_params_get_filter(fns::snd_timer_params_get_filter_arg0_t params)
{
  return fns::call<fns::snd_timer_params_get_filter>(params);
}

namespace fns
{

struct snd_timer_status_sizeof
{
  const char* name = "snd_timer_status_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_timer_status_sizeof()
{
  return fns::call<fns::snd_timer_status_sizeof>();
}

namespace fns
{

using snd_timer_status_malloc_arg0_t = snd_timer_status_t **;
struct snd_timer_status_malloc
{
  const char* name = "snd_timer_status_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_timer_status_t **);
};

}

extern "C" int snd_timer_status_malloc(fns::snd_timer_status_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_timer_status_malloc>(ptr);
}

namespace fns
{

using snd_timer_status_free_arg0_t = snd_timer_status_t *;
struct snd_timer_status_free
{
  const char* name = "snd_timer_status_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_timer_status_t *);
};

}

extern "C" void snd_timer_status_free(fns::snd_timer_status_free_arg0_t obj)
{
  return fns::call_void<fns::snd_timer_status_free>(obj);
}

namespace fns
{

using snd_timer_status_copy_arg0_t = snd_timer_status_t *;
using snd_timer_status_copy_arg1_t = const snd_timer_status_t *;
struct snd_timer_status_copy
{
  const char* name = "snd_timer_status_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_timer_status_t *, const snd_timer_status_t *);
};

}

extern "C" void snd_timer_status_copy(fns::snd_timer_status_copy_arg0_t dst, fns::snd_timer_status_copy_arg1_t src)
{
  return fns::call_void<fns::snd_timer_status_copy>(dst, src);
}

namespace fns
{

using snd_timer_status_get_timestamp_arg0_t = snd_timer_status_t *;
struct snd_timer_status_get_timestamp
{
  const char* name = "snd_timer_status_get_timestamp";
  const std::vector<const char*> args = {"status"};
  using type = snd_htimestamp_t(*)(snd_timer_status_t *);
};

}

extern "C" snd_htimestamp_t snd_timer_status_get_timestamp(fns::snd_timer_status_get_timestamp_arg0_t status)
{
  return fns::call<fns::snd_timer_status_get_timestamp>(status);
}

namespace fns
{

using snd_timer_status_get_resolution_arg0_t = snd_timer_status_t *;
struct snd_timer_status_get_resolution
{
  const char* name = "snd_timer_status_get_resolution";
  const std::vector<const char*> args = {"status"};
  using type = long(*)(snd_timer_status_t *);
};

}

extern "C" long snd_timer_status_get_resolution(fns::snd_timer_status_get_resolution_arg0_t status)
{
  return fns::call<fns::snd_timer_status_get_resolution>(status);
}

namespace fns
{

using snd_timer_status_get_lost_arg0_t = snd_timer_status_t *;
struct snd_timer_status_get_lost
{
  const char* name = "snd_timer_status_get_lost";
  const std::vector<const char*> args = {"status"};
  using type = long(*)(snd_timer_status_t *);
};

}

extern "C" long snd_timer_status_get_lost(fns::snd_timer_status_get_lost_arg0_t status)
{
  return fns::call<fns::snd_timer_status_get_lost>(status);
}

namespace fns
{

using snd_timer_status_get_overrun_arg0_t = snd_timer_status_t *;
struct snd_timer_status_get_overrun
{
  const char* name = "snd_timer_status_get_overrun";
  const std::vector<const char*> args = {"status"};
  using type = long(*)(snd_timer_status_t *);
};

}

extern "C" long snd_timer_status_get_overrun(fns::snd_timer_status_get_overrun_arg0_t status)
{
  return fns::call<fns::snd_timer_status_get_overrun>(status);
}

namespace fns
{

using snd_timer_status_get_queue_arg0_t = snd_timer_status_t *;
struct snd_timer_status_get_queue
{
  const char* name = "snd_timer_status_get_queue";
  const std::vector<const char*> args = {"status"};
  using type = long(*)(snd_timer_status_t *);
};

}

extern "C" long snd_timer_status_get_queue(fns::snd_timer_status_get_queue_arg0_t status)
{
  return fns::call<fns::snd_timer_status_get_queue>(status);
}

namespace fns
{

using snd_timer_info_get_ticks_arg0_t = snd_timer_info_t *;
struct snd_timer_info_get_ticks
{
  const char* name = "snd_timer_info_get_ticks";
  const std::vector<const char*> args = {"info"};
  using type = long(*)(snd_timer_info_t *);
};

}

extern "C" long snd_timer_info_get_ticks(fns::snd_timer_info_get_ticks_arg0_t info)
{
  return fns::call<fns::snd_timer_info_get_ticks>(info);
}

namespace fns
{

using snd_hwdep_open_arg0_t = snd_hwdep_t **;
using snd_hwdep_open_arg1_t = const char *;
using snd_hwdep_open_arg2_t = int;
struct snd_hwdep_open
{
  const char* name = "snd_hwdep_open";
  const std::vector<const char*> args = {"hwdep", "name", "mode"};
  using type = int(*)(snd_hwdep_t **, const char *, int);
};

}

extern "C" int snd_hwdep_open(fns::snd_hwdep_open_arg0_t hwdep, fns::snd_hwdep_open_arg1_t name, fns::snd_hwdep_open_arg2_t mode)
{
  return fns::call<fns::snd_hwdep_open>(hwdep, name, mode);
}

namespace fns
{

using snd_hwdep_close_arg0_t = snd_hwdep_t *;
struct snd_hwdep_close
{
  const char* name = "snd_hwdep_close";
  const std::vector<const char*> args = {"hwdep"};
  using type = int(*)(snd_hwdep_t *);
};

}

extern "C" int snd_hwdep_close(fns::snd_hwdep_close_arg0_t hwdep)
{
  return fns::call<fns::snd_hwdep_close>(hwdep);
}

namespace fns
{

using snd_hwdep_poll_descriptors_arg0_t = snd_hwdep_t *;
using snd_hwdep_poll_descriptors_arg1_t = struct pollfd *;
using snd_hwdep_poll_descriptors_arg2_t = unsigned int;
struct snd_hwdep_poll_descriptors
{
  const char* name = "snd_hwdep_poll_descriptors";
  const std::vector<const char*> args = {"hwdep", "pfds", "space"};
  using type = int(*)(snd_hwdep_t *, struct pollfd *, unsigned int);
};

}

extern "C" int snd_hwdep_poll_descriptors(fns::snd_hwdep_poll_descriptors_arg0_t hwdep, fns::snd_hwdep_poll_descriptors_arg1_t pfds, fns::snd_hwdep_poll_descriptors_arg2_t space)
{
  return fns::call<fns::snd_hwdep_poll_descriptors>(hwdep, pfds, space);
}

namespace fns
{

using snd_hwdep_poll_descriptors_count_arg0_t = snd_hwdep_t *;
struct snd_hwdep_poll_descriptors_count
{
  const char* name = "snd_hwdep_poll_descriptors_count";
  const std::vector<const char*> args = {"hwdep"};
  using type = int(*)(snd_hwdep_t *);
};

}

extern "C" int snd_hwdep_poll_descriptors_count(fns::snd_hwdep_poll_descriptors_count_arg0_t hwdep)
{
  return fns::call<fns::snd_hwdep_poll_descriptors_count>(hwdep);
}

namespace fns
{

using snd_hwdep_poll_descriptors_revents_arg0_t = snd_hwdep_t *;
using snd_hwdep_poll_descriptors_revents_arg1_t = struct pollfd *;
using snd_hwdep_poll_descriptors_revents_arg2_t = unsigned int;
using snd_hwdep_poll_descriptors_revents_arg3_t = unsigned short *;
struct snd_hwdep_poll_descriptors_revents
{
  const char* name = "snd_hwdep_poll_descriptors_revents";
  const std::vector<const char*> args = {"hwdep", "pfds", "nfds", "revents"};
  using type = int(*)(snd_hwdep_t *, struct pollfd *, unsigned int, unsigned short *);
};

}

extern "C" int snd_hwdep_poll_descriptors_revents(fns::snd_hwdep_poll_descriptors_revents_arg0_t hwdep, fns::snd_hwdep_poll_descriptors_revents_arg1_t pfds, fns::snd_hwdep_poll_descriptors_revents_arg2_t nfds, fns::snd_hwdep_poll_descriptors_revents_arg3_t revents)
{
  return fns::call<fns::snd_hwdep_poll_descriptors_revents>(hwdep, pfds, nfds, revents);
}

namespace fns
{

using snd_hwdep_nonblock_arg0_t = snd_hwdep_t *;
using snd_hwdep_nonblock_arg1_t = int;
struct snd_hwdep_nonblock
{
  const char* name = "snd_hwdep_nonblock";
  const std::vector<const char*> args = {"hwdep", "nonblock"};
  using type = int(*)(snd_hwdep_t *, int);
};

}

extern "C" int snd_hwdep_nonblock(fns::snd_hwdep_nonblock_arg0_t hwdep, fns::snd_hwdep_nonblock_arg1_t nonblock)
{
  return fns::call<fns::snd_hwdep_nonblock>(hwdep, nonblock);
}

namespace fns
{

using snd_hwdep_info_arg0_t = snd_hwdep_t *;
using snd_hwdep_info_arg1_t = snd_hwdep_info_t *;
struct snd_hwdep_info
{
  const char* name = "snd_hwdep_info";
  const std::vector<const char*> args = {"hwdep", "info"};
  using type = int(*)(snd_hwdep_t *, snd_hwdep_info_t *);
};

}

extern "C" int snd_hwdep_info(fns::snd_hwdep_info_arg0_t hwdep, fns::snd_hwdep_info_arg1_t info)
{
  return fns::call<fns::snd_hwdep_info>(hwdep, info);
}

namespace fns
{

using snd_hwdep_dsp_status_arg0_t = snd_hwdep_t *;
using snd_hwdep_dsp_status_arg1_t = snd_hwdep_dsp_status_t *;
struct snd_hwdep_dsp_status
{
  const char* name = "snd_hwdep_dsp_status";
  const std::vector<const char*> args = {"hwdep", "status"};
  using type = int(*)(snd_hwdep_t *, snd_hwdep_dsp_status_t *);
};

}

extern "C" int snd_hwdep_dsp_status(fns::snd_hwdep_dsp_status_arg0_t hwdep, fns::snd_hwdep_dsp_status_arg1_t status)
{
  return fns::call<fns::snd_hwdep_dsp_status>(hwdep, status);
}

namespace fns
{

using snd_hwdep_dsp_load_arg0_t = snd_hwdep_t *;
using snd_hwdep_dsp_load_arg1_t = snd_hwdep_dsp_image_t *;
struct snd_hwdep_dsp_load
{
  const char* name = "snd_hwdep_dsp_load";
  const std::vector<const char*> args = {"hwdep", "block"};
  using type = int(*)(snd_hwdep_t *, snd_hwdep_dsp_image_t *);
};

}

extern "C" int snd_hwdep_dsp_load(fns::snd_hwdep_dsp_load_arg0_t hwdep, fns::snd_hwdep_dsp_load_arg1_t block)
{
  return fns::call<fns::snd_hwdep_dsp_load>(hwdep, block);
}

namespace fns
{

using snd_hwdep_ioctl_arg0_t = snd_hwdep_t *;
using snd_hwdep_ioctl_arg1_t = unsigned int;
using snd_hwdep_ioctl_arg2_t = void *;
struct snd_hwdep_ioctl
{
  const char* name = "snd_hwdep_ioctl";
  const std::vector<const char*> args = {"hwdep", "request", "arg"};
  using type = int(*)(snd_hwdep_t *, unsigned int, void *);
};

}

extern "C" int snd_hwdep_ioctl(fns::snd_hwdep_ioctl_arg0_t hwdep, fns::snd_hwdep_ioctl_arg1_t request, fns::snd_hwdep_ioctl_arg2_t arg)
{
  return fns::call<fns::snd_hwdep_ioctl>(hwdep, request, arg);
}

namespace fns
{

using snd_hwdep_write_arg0_t = snd_hwdep_t *;
using snd_hwdep_write_arg1_t = const void *;
using snd_hwdep_write_arg2_t = size_t;
struct snd_hwdep_write
{
  const char* name = "snd_hwdep_write";
  const std::vector<const char*> args = {"hwdep", "buffer", "size"};
  using type = ssize_t(*)(snd_hwdep_t *, const void *, size_t);
};

}

extern "C" ssize_t snd_hwdep_write(fns::snd_hwdep_write_arg0_t hwdep, fns::snd_hwdep_write_arg1_t buffer, fns::snd_hwdep_write_arg2_t size)
{
  return fns::call<fns::snd_hwdep_write>(hwdep, buffer, size);
}

namespace fns
{

using snd_hwdep_read_arg0_t = snd_hwdep_t *;
using snd_hwdep_read_arg1_t = void *;
using snd_hwdep_read_arg2_t = size_t;
struct snd_hwdep_read
{
  const char* name = "snd_hwdep_read";
  const std::vector<const char*> args = {"hwdep", "buffer", "size"};
  using type = ssize_t(*)(snd_hwdep_t *, void *, size_t);
};

}

extern "C" ssize_t snd_hwdep_read(fns::snd_hwdep_read_arg0_t hwdep, fns::snd_hwdep_read_arg1_t buffer, fns::snd_hwdep_read_arg2_t size)
{
  return fns::call<fns::snd_hwdep_read>(hwdep, buffer, size);
}

namespace fns
{

struct snd_hwdep_info_sizeof
{
  const char* name = "snd_hwdep_info_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_hwdep_info_sizeof()
{
  return fns::call<fns::snd_hwdep_info_sizeof>();
}

namespace fns
{

using snd_hwdep_info_malloc_arg0_t = snd_hwdep_info_t **;
struct snd_hwdep_info_malloc
{
  const char* name = "snd_hwdep_info_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_hwdep_info_t **);
};

}

extern "C" int snd_hwdep_info_malloc(fns::snd_hwdep_info_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_hwdep_info_malloc>(ptr);
}

namespace fns
{

using snd_hwdep_info_free_arg0_t = snd_hwdep_info_t *;
struct snd_hwdep_info_free
{
  const char* name = "snd_hwdep_info_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_hwdep_info_t *);
};

}

extern "C" void snd_hwdep_info_free(fns::snd_hwdep_info_free_arg0_t obj)
{
  return fns::call_void<fns::snd_hwdep_info_free>(obj);
}

namespace fns
{

using snd_hwdep_info_copy_arg0_t = snd_hwdep_info_t *;
using snd_hwdep_info_copy_arg1_t = const snd_hwdep_info_t *;
struct snd_hwdep_info_copy
{
  const char* name = "snd_hwdep_info_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_hwdep_info_t *, const snd_hwdep_info_t *);
};

}

extern "C" void snd_hwdep_info_copy(fns::snd_hwdep_info_copy_arg0_t dst, fns::snd_hwdep_info_copy_arg1_t src)
{
  return fns::call_void<fns::snd_hwdep_info_copy>(dst, src);
}

namespace fns
{

using snd_hwdep_info_get_device_arg0_t = const snd_hwdep_info_t *;
struct snd_hwdep_info_get_device
{
  const char* name = "snd_hwdep_info_get_device";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_hwdep_info_t *);
};

}

extern "C" unsigned int snd_hwdep_info_get_device(fns::snd_hwdep_info_get_device_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_info_get_device>(obj);
}

namespace fns
{

using snd_hwdep_info_get_card_arg0_t = const snd_hwdep_info_t *;
struct snd_hwdep_info_get_card
{
  const char* name = "snd_hwdep_info_get_card";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_hwdep_info_t *);
};

}

extern "C" int snd_hwdep_info_get_card(fns::snd_hwdep_info_get_card_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_info_get_card>(obj);
}

namespace fns
{

using snd_hwdep_info_get_id_arg0_t = const snd_hwdep_info_t *;
struct snd_hwdep_info_get_id
{
  const char* name = "snd_hwdep_info_get_id";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_hwdep_info_t *);
};

}

extern "C" const char * snd_hwdep_info_get_id(fns::snd_hwdep_info_get_id_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_info_get_id>(obj);
}

namespace fns
{

using snd_hwdep_info_get_name_arg0_t = const snd_hwdep_info_t *;
struct snd_hwdep_info_get_name
{
  const char* name = "snd_hwdep_info_get_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_hwdep_info_t *);
};

}

extern "C" const char * snd_hwdep_info_get_name(fns::snd_hwdep_info_get_name_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_info_get_name>(obj);
}

namespace fns
{

using snd_hwdep_info_get_iface_arg0_t = const snd_hwdep_info_t *;
struct snd_hwdep_info_get_iface
{
  const char* name = "snd_hwdep_info_get_iface";
  const std::vector<const char*> args = {"obj"};
  using type = snd_hwdep_iface_t(*)(const snd_hwdep_info_t *);
};

}

extern "C" snd_hwdep_iface_t snd_hwdep_info_get_iface(fns::snd_hwdep_info_get_iface_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_info_get_iface>(obj);
}

namespace fns
{

using snd_hwdep_info_set_device_arg0_t = snd_hwdep_info_t *;
using snd_hwdep_info_set_device_arg1_t = unsigned int;
struct snd_hwdep_info_set_device
{
  const char* name = "snd_hwdep_info_set_device";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_hwdep_info_t *, unsigned int);
};

}

extern "C" void snd_hwdep_info_set_device(fns::snd_hwdep_info_set_device_arg0_t obj, fns::snd_hwdep_info_set_device_arg1_t val)
{
  return fns::call_void<fns::snd_hwdep_info_set_device>(obj, val);
}

namespace fns
{

struct snd_hwdep_dsp_status_sizeof
{
  const char* name = "snd_hwdep_dsp_status_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_hwdep_dsp_status_sizeof()
{
  return fns::call<fns::snd_hwdep_dsp_status_sizeof>();
}

namespace fns
{

using snd_hwdep_dsp_status_malloc_arg0_t = snd_hwdep_dsp_status_t **;
struct snd_hwdep_dsp_status_malloc
{
  const char* name = "snd_hwdep_dsp_status_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_hwdep_dsp_status_t **);
};

}

extern "C" int snd_hwdep_dsp_status_malloc(fns::snd_hwdep_dsp_status_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_hwdep_dsp_status_malloc>(ptr);
}

namespace fns
{

using snd_hwdep_dsp_status_free_arg0_t = snd_hwdep_dsp_status_t *;
struct snd_hwdep_dsp_status_free
{
  const char* name = "snd_hwdep_dsp_status_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_hwdep_dsp_status_t *);
};

}

extern "C" void snd_hwdep_dsp_status_free(fns::snd_hwdep_dsp_status_free_arg0_t obj)
{
  return fns::call_void<fns::snd_hwdep_dsp_status_free>(obj);
}

namespace fns
{

using snd_hwdep_dsp_status_copy_arg0_t = snd_hwdep_dsp_status_t *;
using snd_hwdep_dsp_status_copy_arg1_t = const snd_hwdep_dsp_status_t *;
struct snd_hwdep_dsp_status_copy
{
  const char* name = "snd_hwdep_dsp_status_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_hwdep_dsp_status_t *, const snd_hwdep_dsp_status_t *);
};

}

extern "C" void snd_hwdep_dsp_status_copy(fns::snd_hwdep_dsp_status_copy_arg0_t dst, fns::snd_hwdep_dsp_status_copy_arg1_t src)
{
  return fns::call_void<fns::snd_hwdep_dsp_status_copy>(dst, src);
}

namespace fns
{

using snd_hwdep_dsp_status_get_version_arg0_t = const snd_hwdep_dsp_status_t *;
struct snd_hwdep_dsp_status_get_version
{
  const char* name = "snd_hwdep_dsp_status_get_version";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_hwdep_dsp_status_t *);
};

}

extern "C" unsigned int snd_hwdep_dsp_status_get_version(fns::snd_hwdep_dsp_status_get_version_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_dsp_status_get_version>(obj);
}

namespace fns
{

using snd_hwdep_dsp_status_get_id_arg0_t = const snd_hwdep_dsp_status_t *;
struct snd_hwdep_dsp_status_get_id
{
  const char* name = "snd_hwdep_dsp_status_get_id";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_hwdep_dsp_status_t *);
};

}

extern "C" const char * snd_hwdep_dsp_status_get_id(fns::snd_hwdep_dsp_status_get_id_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_dsp_status_get_id>(obj);
}

namespace fns
{

using snd_hwdep_dsp_status_get_num_dsps_arg0_t = const snd_hwdep_dsp_status_t *;
struct snd_hwdep_dsp_status_get_num_dsps
{
  const char* name = "snd_hwdep_dsp_status_get_num_dsps";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_hwdep_dsp_status_t *);
};

}

extern "C" unsigned int snd_hwdep_dsp_status_get_num_dsps(fns::snd_hwdep_dsp_status_get_num_dsps_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_dsp_status_get_num_dsps>(obj);
}

namespace fns
{

using snd_hwdep_dsp_status_get_dsp_loaded_arg0_t = const snd_hwdep_dsp_status_t *;
struct snd_hwdep_dsp_status_get_dsp_loaded
{
  const char* name = "snd_hwdep_dsp_status_get_dsp_loaded";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_hwdep_dsp_status_t *);
};

}

extern "C" unsigned int snd_hwdep_dsp_status_get_dsp_loaded(fns::snd_hwdep_dsp_status_get_dsp_loaded_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_dsp_status_get_dsp_loaded>(obj);
}

namespace fns
{

using snd_hwdep_dsp_status_get_chip_ready_arg0_t = const snd_hwdep_dsp_status_t *;
struct snd_hwdep_dsp_status_get_chip_ready
{
  const char* name = "snd_hwdep_dsp_status_get_chip_ready";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_hwdep_dsp_status_t *);
};

}

extern "C" unsigned int snd_hwdep_dsp_status_get_chip_ready(fns::snd_hwdep_dsp_status_get_chip_ready_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_dsp_status_get_chip_ready>(obj);
}

namespace fns
{

struct snd_hwdep_dsp_image_sizeof
{
  const char* name = "snd_hwdep_dsp_image_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_hwdep_dsp_image_sizeof()
{
  return fns::call<fns::snd_hwdep_dsp_image_sizeof>();
}

namespace fns
{

using snd_hwdep_dsp_image_malloc_arg0_t = snd_hwdep_dsp_image_t **;
struct snd_hwdep_dsp_image_malloc
{
  const char* name = "snd_hwdep_dsp_image_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_hwdep_dsp_image_t **);
};

}

extern "C" int snd_hwdep_dsp_image_malloc(fns::snd_hwdep_dsp_image_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_hwdep_dsp_image_malloc>(ptr);
}

namespace fns
{

using snd_hwdep_dsp_image_free_arg0_t = snd_hwdep_dsp_image_t *;
struct snd_hwdep_dsp_image_free
{
  const char* name = "snd_hwdep_dsp_image_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_hwdep_dsp_image_t *);
};

}

extern "C" void snd_hwdep_dsp_image_free(fns::snd_hwdep_dsp_image_free_arg0_t obj)
{
  return fns::call_void<fns::snd_hwdep_dsp_image_free>(obj);
}

namespace fns
{

using snd_hwdep_dsp_image_copy_arg0_t = snd_hwdep_dsp_image_t *;
using snd_hwdep_dsp_image_copy_arg1_t = const snd_hwdep_dsp_image_t *;
struct snd_hwdep_dsp_image_copy
{
  const char* name = "snd_hwdep_dsp_image_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_hwdep_dsp_image_t *, const snd_hwdep_dsp_image_t *);
};

}

extern "C" void snd_hwdep_dsp_image_copy(fns::snd_hwdep_dsp_image_copy_arg0_t dst, fns::snd_hwdep_dsp_image_copy_arg1_t src)
{
  return fns::call_void<fns::snd_hwdep_dsp_image_copy>(dst, src);
}

namespace fns
{

using snd_hwdep_dsp_image_get_index_arg0_t = const snd_hwdep_dsp_image_t *;
struct snd_hwdep_dsp_image_get_index
{
  const char* name = "snd_hwdep_dsp_image_get_index";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_hwdep_dsp_image_t *);
};

}

extern "C" unsigned int snd_hwdep_dsp_image_get_index(fns::snd_hwdep_dsp_image_get_index_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_dsp_image_get_index>(obj);
}

namespace fns
{

using snd_hwdep_dsp_image_get_name_arg0_t = const snd_hwdep_dsp_image_t *;
struct snd_hwdep_dsp_image_get_name
{
  const char* name = "snd_hwdep_dsp_image_get_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_hwdep_dsp_image_t *);
};

}

extern "C" const char * snd_hwdep_dsp_image_get_name(fns::snd_hwdep_dsp_image_get_name_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_dsp_image_get_name>(obj);
}

namespace fns
{

using snd_hwdep_dsp_image_get_image_arg0_t = const snd_hwdep_dsp_image_t *;
struct snd_hwdep_dsp_image_get_image
{
  const char* name = "snd_hwdep_dsp_image_get_image";
  const std::vector<const char*> args = {"obj"};
  using type = const void *(*)(const snd_hwdep_dsp_image_t *);
};

}

extern "C" const void * snd_hwdep_dsp_image_get_image(fns::snd_hwdep_dsp_image_get_image_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_dsp_image_get_image>(obj);
}

namespace fns
{

using snd_hwdep_dsp_image_get_length_arg0_t = const snd_hwdep_dsp_image_t *;
struct snd_hwdep_dsp_image_get_length
{
  const char* name = "snd_hwdep_dsp_image_get_length";
  const std::vector<const char*> args = {"obj"};
  using type = size_t(*)(const snd_hwdep_dsp_image_t *);
};

}

extern "C" size_t snd_hwdep_dsp_image_get_length(fns::snd_hwdep_dsp_image_get_length_arg0_t obj)
{
  return fns::call<fns::snd_hwdep_dsp_image_get_length>(obj);
}

namespace fns
{

using snd_hwdep_dsp_image_set_index_arg0_t = snd_hwdep_dsp_image_t *;
using snd_hwdep_dsp_image_set_index_arg1_t = unsigned int;
struct snd_hwdep_dsp_image_set_index
{
  const char* name = "snd_hwdep_dsp_image_set_index";
  const std::vector<const char*> args = {"obj", "_index"};
  using type = void(*)(snd_hwdep_dsp_image_t *, unsigned int);
};

}

extern "C" void snd_hwdep_dsp_image_set_index(fns::snd_hwdep_dsp_image_set_index_arg0_t obj, fns::snd_hwdep_dsp_image_set_index_arg1_t _index)
{
  return fns::call_void<fns::snd_hwdep_dsp_image_set_index>(obj, _index);
}

namespace fns
{

using snd_hwdep_dsp_image_set_name_arg0_t = snd_hwdep_dsp_image_t *;
using snd_hwdep_dsp_image_set_name_arg1_t = const char *;
struct snd_hwdep_dsp_image_set_name
{
  const char* name = "snd_hwdep_dsp_image_set_name";
  const std::vector<const char*> args = {"obj", "name"};
  using type = void(*)(snd_hwdep_dsp_image_t *, const char *);
};

}

extern "C" void snd_hwdep_dsp_image_set_name(fns::snd_hwdep_dsp_image_set_name_arg0_t obj, fns::snd_hwdep_dsp_image_set_name_arg1_t name)
{
  return fns::call_void<fns::snd_hwdep_dsp_image_set_name>(obj, name);
}

namespace fns
{

using snd_hwdep_dsp_image_set_image_arg0_t = snd_hwdep_dsp_image_t *;
using snd_hwdep_dsp_image_set_image_arg1_t = void *;
struct snd_hwdep_dsp_image_set_image
{
  const char* name = "snd_hwdep_dsp_image_set_image";
  const std::vector<const char*> args = {"obj", "buffer"};
  using type = void(*)(snd_hwdep_dsp_image_t *, void *);
};

}

extern "C" void snd_hwdep_dsp_image_set_image(fns::snd_hwdep_dsp_image_set_image_arg0_t obj, fns::snd_hwdep_dsp_image_set_image_arg1_t buffer)
{
  return fns::call_void<fns::snd_hwdep_dsp_image_set_image>(obj, buffer);
}

namespace fns
{

using snd_hwdep_dsp_image_set_length_arg0_t = snd_hwdep_dsp_image_t *;
using snd_hwdep_dsp_image_set_length_arg1_t = size_t;
struct snd_hwdep_dsp_image_set_length
{
  const char* name = "snd_hwdep_dsp_image_set_length";
  const std::vector<const char*> args = {"obj", "length"};
  using type = void(*)(snd_hwdep_dsp_image_t *, size_t);
};

}

extern "C" void snd_hwdep_dsp_image_set_length(fns::snd_hwdep_dsp_image_set_length_arg0_t obj, fns::snd_hwdep_dsp_image_set_length_arg1_t length)
{
  return fns::call_void<fns::snd_hwdep_dsp_image_set_length>(obj, length);
}

namespace fns
{

using snd_card_load_arg0_t = int;
struct snd_card_load
{
  const char* name = "snd_card_load";
  const std::vector<const char*> args = {"card"};
  using type = int(*)(int);
};

}

extern "C" int snd_card_load(fns::snd_card_load_arg0_t card)
{
  return fns::call<fns::snd_card_load>(card);
}

namespace fns
{

using snd_card_next_arg0_t = int *;
struct snd_card_next
{
  const char* name = "snd_card_next";
  const std::vector<const char*> args = {"card"};
  using type = int(*)(int *);
};

}

extern "C" int snd_card_next(fns::snd_card_next_arg0_t card)
{
  return fns::call<fns::snd_card_next>(card);
}

namespace fns
{

using snd_card_get_index_arg0_t = const char *;
struct snd_card_get_index
{
  const char* name = "snd_card_get_index";
  const std::vector<const char*> args = {"name"};
  using type = int(*)(const char *);
};

}

extern "C" int snd_card_get_index(fns::snd_card_get_index_arg0_t name)
{
  return fns::call<fns::snd_card_get_index>(name);
}

namespace fns
{

using snd_card_get_name_arg0_t = int;
using snd_card_get_name_arg1_t = char **;
struct snd_card_get_name
{
  const char* name = "snd_card_get_name";
  const std::vector<const char*> args = {"card", "name"};
  using type = int(*)(int, char **);
};

}

extern "C" int snd_card_get_name(fns::snd_card_get_name_arg0_t card, fns::snd_card_get_name_arg1_t name)
{
  return fns::call<fns::snd_card_get_name>(card, name);
}

namespace fns
{

using snd_card_get_longname_arg0_t = int;
using snd_card_get_longname_arg1_t = char **;
struct snd_card_get_longname
{
  const char* name = "snd_card_get_longname";
  const std::vector<const char*> args = {"card", "name"};
  using type = int(*)(int, char **);
};

}

extern "C" int snd_card_get_longname(fns::snd_card_get_longname_arg0_t card, fns::snd_card_get_longname_arg1_t name)
{
  return fns::call<fns::snd_card_get_longname>(card, name);
}

namespace fns
{

using snd_device_name_hint_arg0_t = int;
using snd_device_name_hint_arg1_t = const char *;
using snd_device_name_hint_arg2_t = void ***;
struct snd_device_name_hint
{
  const char* name = "snd_device_name_hint";
  const std::vector<const char*> args = {"card", "iface", "hints"};
  using type = int(*)(int, const char *, void ***);
};

}

extern "C" int snd_device_name_hint(fns::snd_device_name_hint_arg0_t card, fns::snd_device_name_hint_arg1_t iface, fns::snd_device_name_hint_arg2_t hints)
{
  return fns::call<fns::snd_device_name_hint>(card, iface, hints);
}

namespace fns
{

using snd_device_name_free_hint_arg0_t = void **;
struct snd_device_name_free_hint
{
  const char* name = "snd_device_name_free_hint";
  const std::vector<const char*> args = {"hints"};
  using type = int(*)(void **);
};

}

extern "C" int snd_device_name_free_hint(fns::snd_device_name_free_hint_arg0_t hints)
{
  return fns::call<fns::snd_device_name_free_hint>(hints);
}

namespace fns
{

using snd_device_name_get_hint_arg0_t = const void *;
using snd_device_name_get_hint_arg1_t = const char *;
struct snd_device_name_get_hint
{
  const char* name = "snd_device_name_get_hint";
  const std::vector<const char*> args = {"hint", "id"};
  using type = char *(*)(const void *, const char *);
};

}

extern "C" char * snd_device_name_get_hint(fns::snd_device_name_get_hint_arg0_t hint, fns::snd_device_name_get_hint_arg1_t id)
{
  return fns::call<fns::snd_device_name_get_hint>(hint, id);
}

namespace fns
{

using snd_ctl_open_arg0_t = snd_ctl_t **;
using snd_ctl_open_arg1_t = const char *;
using snd_ctl_open_arg2_t = int;
struct snd_ctl_open
{
  const char* name = "snd_ctl_open";
  const std::vector<const char*> args = {"ctl", "name", "mode"};
  using type = int(*)(snd_ctl_t **, const char *, int);
};

}

extern "C" int snd_ctl_open(fns::snd_ctl_open_arg0_t ctl, fns::snd_ctl_open_arg1_t name, fns::snd_ctl_open_arg2_t mode)
{
  return fns::call<fns::snd_ctl_open>(ctl, name, mode);
}

namespace fns
{

using snd_ctl_open_lconf_arg0_t = snd_ctl_t **;
using snd_ctl_open_lconf_arg1_t = const char *;
using snd_ctl_open_lconf_arg2_t = int;
using snd_ctl_open_lconf_arg3_t = snd_config_t *;
struct snd_ctl_open_lconf
{
  const char* name = "snd_ctl_open_lconf";
  const std::vector<const char*> args = {"ctl", "name", "mode", "lconf"};
  using type = int(*)(snd_ctl_t **, const char *, int, snd_config_t *);
};

}

extern "C" int snd_ctl_open_lconf(fns::snd_ctl_open_lconf_arg0_t ctl, fns::snd_ctl_open_lconf_arg1_t name, fns::snd_ctl_open_lconf_arg2_t mode, fns::snd_ctl_open_lconf_arg3_t lconf)
{
  return fns::call<fns::snd_ctl_open_lconf>(ctl, name, mode, lconf);
}

namespace fns
{

using snd_ctl_open_fallback_arg0_t = snd_ctl_t **;
using snd_ctl_open_fallback_arg1_t = snd_config_t *;
using snd_ctl_open_fallback_arg2_t = const char *;
using snd_ctl_open_fallback_arg3_t = const char *;
using snd_ctl_open_fallback_arg4_t = int;
struct snd_ctl_open_fallback
{
  const char* name = "snd_ctl_open_fallback";
  const std::vector<const char*> args = {"ctl", "root", "name", "orig_name", "mode"};
  using type = int(*)(snd_ctl_t **, snd_config_t *, const char *, const char *, int);
};

}

extern "C" int snd_ctl_open_fallback(fns::snd_ctl_open_fallback_arg0_t ctl, fns::snd_ctl_open_fallback_arg1_t root, fns::snd_ctl_open_fallback_arg2_t name, fns::snd_ctl_open_fallback_arg3_t orig_name, fns::snd_ctl_open_fallback_arg4_t mode)
{
  return fns::call<fns::snd_ctl_open_fallback>(ctl, root, name, orig_name, mode);
}

namespace fns
{

using snd_ctl_close_arg0_t = snd_ctl_t *;
struct snd_ctl_close
{
  const char* name = "snd_ctl_close";
  const std::vector<const char*> args = {"ctl"};
  using type = int(*)(snd_ctl_t *);
};

}

extern "C" int snd_ctl_close(fns::snd_ctl_close_arg0_t ctl)
{
  return fns::call<fns::snd_ctl_close>(ctl);
}

namespace fns
{

using snd_ctl_nonblock_arg0_t = snd_ctl_t *;
using snd_ctl_nonblock_arg1_t = int;
struct snd_ctl_nonblock
{
  const char* name = "snd_ctl_nonblock";
  const std::vector<const char*> args = {"ctl", "nonblock"};
  using type = int(*)(snd_ctl_t *, int);
};

}

extern "C" int snd_ctl_nonblock(fns::snd_ctl_nonblock_arg0_t ctl, fns::snd_ctl_nonblock_arg1_t nonblock)
{
  return fns::call<fns::snd_ctl_nonblock>(ctl, nonblock);
}

// Skipping snd_ctl_abort because it is defined

namespace fns
{

using snd_async_add_ctl_handler_arg0_t = snd_async_handler_t **;
using snd_async_add_ctl_handler_arg1_t = snd_ctl_t *;
using snd_async_add_ctl_handler_arg2_t = snd_async_callback_t;
using snd_async_add_ctl_handler_arg3_t = void *;
struct snd_async_add_ctl_handler
{
  const char* name = "snd_async_add_ctl_handler";
  const std::vector<const char*> args = {"handler", "ctl", "callback", "private_data"};
  using type = int(*)(snd_async_handler_t **, snd_ctl_t *, snd_async_callback_t, void *);
};

}

extern "C" int snd_async_add_ctl_handler(fns::snd_async_add_ctl_handler_arg0_t handler, fns::snd_async_add_ctl_handler_arg1_t ctl, fns::snd_async_add_ctl_handler_arg2_t callback, fns::snd_async_add_ctl_handler_arg3_t private_data)
{
  return fns::call<fns::snd_async_add_ctl_handler>(handler, ctl, callback, private_data);
}

namespace fns
{

using snd_async_handler_get_ctl_arg0_t = snd_async_handler_t *;
struct snd_async_handler_get_ctl
{
  const char* name = "snd_async_handler_get_ctl";
  const std::vector<const char*> args = {"handler"};
  using type = snd_ctl_t *(*)(snd_async_handler_t *);
};

}

extern "C" snd_ctl_t * snd_async_handler_get_ctl(fns::snd_async_handler_get_ctl_arg0_t handler)
{
  return fns::call<fns::snd_async_handler_get_ctl>(handler);
}

namespace fns
{

using snd_ctl_poll_descriptors_count_arg0_t = snd_ctl_t *;
struct snd_ctl_poll_descriptors_count
{
  const char* name = "snd_ctl_poll_descriptors_count";
  const std::vector<const char*> args = {"ctl"};
  using type = int(*)(snd_ctl_t *);
};

}

extern "C" int snd_ctl_poll_descriptors_count(fns::snd_ctl_poll_descriptors_count_arg0_t ctl)
{
  return fns::call<fns::snd_ctl_poll_descriptors_count>(ctl);
}

namespace fns
{

using snd_ctl_poll_descriptors_arg0_t = snd_ctl_t *;
using snd_ctl_poll_descriptors_arg1_t = struct pollfd *;
using snd_ctl_poll_descriptors_arg2_t = unsigned int;
struct snd_ctl_poll_descriptors
{
  const char* name = "snd_ctl_poll_descriptors";
  const std::vector<const char*> args = {"ctl", "pfds", "space"};
  using type = int(*)(snd_ctl_t *, struct pollfd *, unsigned int);
};

}

extern "C" int snd_ctl_poll_descriptors(fns::snd_ctl_poll_descriptors_arg0_t ctl, fns::snd_ctl_poll_descriptors_arg1_t pfds, fns::snd_ctl_poll_descriptors_arg2_t space)
{
  return fns::call<fns::snd_ctl_poll_descriptors>(ctl, pfds, space);
}

namespace fns
{

using snd_ctl_poll_descriptors_revents_arg0_t = snd_ctl_t *;
using snd_ctl_poll_descriptors_revents_arg1_t = struct pollfd *;
using snd_ctl_poll_descriptors_revents_arg2_t = unsigned int;
using snd_ctl_poll_descriptors_revents_arg3_t = unsigned short *;
struct snd_ctl_poll_descriptors_revents
{
  const char* name = "snd_ctl_poll_descriptors_revents";
  const std::vector<const char*> args = {"ctl", "pfds", "nfds", "revents"};
  using type = int(*)(snd_ctl_t *, struct pollfd *, unsigned int, unsigned short *);
};

}

extern "C" int snd_ctl_poll_descriptors_revents(fns::snd_ctl_poll_descriptors_revents_arg0_t ctl, fns::snd_ctl_poll_descriptors_revents_arg1_t pfds, fns::snd_ctl_poll_descriptors_revents_arg2_t nfds, fns::snd_ctl_poll_descriptors_revents_arg3_t revents)
{
  return fns::call<fns::snd_ctl_poll_descriptors_revents>(ctl, pfds, nfds, revents);
}

namespace fns
{

using snd_ctl_subscribe_events_arg0_t = snd_ctl_t *;
using snd_ctl_subscribe_events_arg1_t = int;
struct snd_ctl_subscribe_events
{
  const char* name = "snd_ctl_subscribe_events";
  const std::vector<const char*> args = {"ctl", "subscribe"};
  using type = int(*)(snd_ctl_t *, int);
};

}

extern "C" int snd_ctl_subscribe_events(fns::snd_ctl_subscribe_events_arg0_t ctl, fns::snd_ctl_subscribe_events_arg1_t subscribe)
{
  return fns::call<fns::snd_ctl_subscribe_events>(ctl, subscribe);
}

namespace fns
{

using snd_ctl_card_info_arg0_t = snd_ctl_t *;
using snd_ctl_card_info_arg1_t = snd_ctl_card_info_t *;
struct snd_ctl_card_info
{
  const char* name = "snd_ctl_card_info";
  const std::vector<const char*> args = {"ctl", "info"};
  using type = int(*)(snd_ctl_t *, snd_ctl_card_info_t *);
};

}

extern "C" int snd_ctl_card_info(fns::snd_ctl_card_info_arg0_t ctl, fns::snd_ctl_card_info_arg1_t info)
{
  return fns::call<fns::snd_ctl_card_info>(ctl, info);
}

namespace fns
{

using snd_ctl_elem_list_arg0_t = snd_ctl_t *;
using snd_ctl_elem_list_arg1_t = snd_ctl_elem_list_t *;
struct snd_ctl_elem_list
{
  const char* name = "snd_ctl_elem_list";
  const std::vector<const char*> args = {"ctl", "list"};
  using type = int(*)(snd_ctl_t *, snd_ctl_elem_list_t *);
};

}

extern "C" int snd_ctl_elem_list(fns::snd_ctl_elem_list_arg0_t ctl, fns::snd_ctl_elem_list_arg1_t list)
{
  return fns::call<fns::snd_ctl_elem_list>(ctl, list);
}

namespace fns
{

using snd_ctl_elem_info_arg0_t = snd_ctl_t *;
using snd_ctl_elem_info_arg1_t = snd_ctl_elem_info_t *;
struct snd_ctl_elem_info
{
  const char* name = "snd_ctl_elem_info";
  const std::vector<const char*> args = {"ctl", "info"};
  using type = int(*)(snd_ctl_t *, snd_ctl_elem_info_t *);
};

}

extern "C" int snd_ctl_elem_info(fns::snd_ctl_elem_info_arg0_t ctl, fns::snd_ctl_elem_info_arg1_t info)
{
  return fns::call<fns::snd_ctl_elem_info>(ctl, info);
}

namespace fns
{

using snd_ctl_elem_read_arg0_t = snd_ctl_t *;
using snd_ctl_elem_read_arg1_t = snd_ctl_elem_value_t *;
struct snd_ctl_elem_read
{
  const char* name = "snd_ctl_elem_read";
  const std::vector<const char*> args = {"ctl", "value"};
  using type = int(*)(snd_ctl_t *, snd_ctl_elem_value_t *);
};

}

extern "C" int snd_ctl_elem_read(fns::snd_ctl_elem_read_arg0_t ctl, fns::snd_ctl_elem_read_arg1_t value)
{
  return fns::call<fns::snd_ctl_elem_read>(ctl, value);
}

namespace fns
{

using snd_ctl_elem_write_arg0_t = snd_ctl_t *;
using snd_ctl_elem_write_arg1_t = snd_ctl_elem_value_t *;
struct snd_ctl_elem_write
{
  const char* name = "snd_ctl_elem_write";
  const std::vector<const char*> args = {"ctl", "value"};
  using type = int(*)(snd_ctl_t *, snd_ctl_elem_value_t *);
};

}

extern "C" int snd_ctl_elem_write(fns::snd_ctl_elem_write_arg0_t ctl, fns::snd_ctl_elem_write_arg1_t value)
{
  return fns::call<fns::snd_ctl_elem_write>(ctl, value);
}

namespace fns
{

using snd_ctl_elem_lock_arg0_t = snd_ctl_t *;
using snd_ctl_elem_lock_arg1_t = snd_ctl_elem_id_t *;
struct snd_ctl_elem_lock
{
  const char* name = "snd_ctl_elem_lock";
  const std::vector<const char*> args = {"ctl", "id"};
  using type = int(*)(snd_ctl_t *, snd_ctl_elem_id_t *);
};

}

extern "C" int snd_ctl_elem_lock(fns::snd_ctl_elem_lock_arg0_t ctl, fns::snd_ctl_elem_lock_arg1_t id)
{
  return fns::call<fns::snd_ctl_elem_lock>(ctl, id);
}

namespace fns
{

using snd_ctl_elem_unlock_arg0_t = snd_ctl_t *;
using snd_ctl_elem_unlock_arg1_t = snd_ctl_elem_id_t *;
struct snd_ctl_elem_unlock
{
  const char* name = "snd_ctl_elem_unlock";
  const std::vector<const char*> args = {"ctl", "id"};
  using type = int(*)(snd_ctl_t *, snd_ctl_elem_id_t *);
};

}

extern "C" int snd_ctl_elem_unlock(fns::snd_ctl_elem_unlock_arg0_t ctl, fns::snd_ctl_elem_unlock_arg1_t id)
{
  return fns::call<fns::snd_ctl_elem_unlock>(ctl, id);
}

namespace fns
{

using snd_ctl_elem_tlv_read_arg0_t = snd_ctl_t *;
using snd_ctl_elem_tlv_read_arg1_t = const snd_ctl_elem_id_t *;
using snd_ctl_elem_tlv_read_arg2_t = unsigned int *;
using snd_ctl_elem_tlv_read_arg3_t = unsigned int;
struct snd_ctl_elem_tlv_read
{
  const char* name = "snd_ctl_elem_tlv_read";
  const std::vector<const char*> args = {"ctl", "id", "tlv", "tlv_size"};
  using type = int(*)(snd_ctl_t *, const snd_ctl_elem_id_t *, unsigned int *, unsigned int);
};

}

extern "C" int snd_ctl_elem_tlv_read(fns::snd_ctl_elem_tlv_read_arg0_t ctl, fns::snd_ctl_elem_tlv_read_arg1_t id, fns::snd_ctl_elem_tlv_read_arg2_t tlv, fns::snd_ctl_elem_tlv_read_arg3_t tlv_size)
{
  return fns::call<fns::snd_ctl_elem_tlv_read>(ctl, id, tlv, tlv_size);
}

namespace fns
{

using snd_ctl_elem_tlv_write_arg0_t = snd_ctl_t *;
using snd_ctl_elem_tlv_write_arg1_t = const snd_ctl_elem_id_t *;
using snd_ctl_elem_tlv_write_arg2_t = const unsigned int *;
struct snd_ctl_elem_tlv_write
{
  const char* name = "snd_ctl_elem_tlv_write";
  const std::vector<const char*> args = {"ctl", "id", "tlv"};
  using type = int(*)(snd_ctl_t *, const snd_ctl_elem_id_t *, const unsigned int *);
};

}

extern "C" int snd_ctl_elem_tlv_write(fns::snd_ctl_elem_tlv_write_arg0_t ctl, fns::snd_ctl_elem_tlv_write_arg1_t id, fns::snd_ctl_elem_tlv_write_arg2_t tlv)
{
  return fns::call<fns::snd_ctl_elem_tlv_write>(ctl, id, tlv);
}

namespace fns
{

using snd_ctl_elem_tlv_command_arg0_t = snd_ctl_t *;
using snd_ctl_elem_tlv_command_arg1_t = const snd_ctl_elem_id_t *;
using snd_ctl_elem_tlv_command_arg2_t = const unsigned int *;
struct snd_ctl_elem_tlv_command
{
  const char* name = "snd_ctl_elem_tlv_command";
  const std::vector<const char*> args = {"ctl", "id", "tlv"};
  using type = int(*)(snd_ctl_t *, const snd_ctl_elem_id_t *, const unsigned int *);
};

}

extern "C" int snd_ctl_elem_tlv_command(fns::snd_ctl_elem_tlv_command_arg0_t ctl, fns::snd_ctl_elem_tlv_command_arg1_t id, fns::snd_ctl_elem_tlv_command_arg2_t tlv)
{
  return fns::call<fns::snd_ctl_elem_tlv_command>(ctl, id, tlv);
}

namespace fns
{

using snd_ctl_hwdep_next_device_arg0_t = snd_ctl_t *;
using snd_ctl_hwdep_next_device_arg1_t = int *;
struct snd_ctl_hwdep_next_device
{
  const char* name = "snd_ctl_hwdep_next_device";
  const std::vector<const char*> args = {"ctl", "device"};
  using type = int(*)(snd_ctl_t *, int *);
};

}

extern "C" int snd_ctl_hwdep_next_device(fns::snd_ctl_hwdep_next_device_arg0_t ctl, fns::snd_ctl_hwdep_next_device_arg1_t device)
{
  return fns::call<fns::snd_ctl_hwdep_next_device>(ctl, device);
}

namespace fns
{

using snd_ctl_hwdep_info_arg0_t = snd_ctl_t *;
using snd_ctl_hwdep_info_arg1_t = snd_hwdep_info_t *;
struct snd_ctl_hwdep_info
{
  const char* name = "snd_ctl_hwdep_info";
  const std::vector<const char*> args = {"ctl", "info"};
  using type = int(*)(snd_ctl_t *, snd_hwdep_info_t *);
};

}

extern "C" int snd_ctl_hwdep_info(fns::snd_ctl_hwdep_info_arg0_t ctl, fns::snd_ctl_hwdep_info_arg1_t info)
{
  return fns::call<fns::snd_ctl_hwdep_info>(ctl, info);
}

namespace fns
{

using snd_ctl_pcm_next_device_arg0_t = snd_ctl_t *;
using snd_ctl_pcm_next_device_arg1_t = int *;
struct snd_ctl_pcm_next_device
{
  const char* name = "snd_ctl_pcm_next_device";
  const std::vector<const char*> args = {"ctl", "device"};
  using type = int(*)(snd_ctl_t *, int *);
};

}

extern "C" int snd_ctl_pcm_next_device(fns::snd_ctl_pcm_next_device_arg0_t ctl, fns::snd_ctl_pcm_next_device_arg1_t device)
{
  return fns::call<fns::snd_ctl_pcm_next_device>(ctl, device);
}

namespace fns
{

using snd_ctl_pcm_info_arg0_t = snd_ctl_t *;
using snd_ctl_pcm_info_arg1_t = snd_pcm_info_t *;
struct snd_ctl_pcm_info
{
  const char* name = "snd_ctl_pcm_info";
  const std::vector<const char*> args = {"ctl", "info"};
  using type = int(*)(snd_ctl_t *, snd_pcm_info_t *);
};

}

extern "C" int snd_ctl_pcm_info(fns::snd_ctl_pcm_info_arg0_t ctl, fns::snd_ctl_pcm_info_arg1_t info)
{
  return fns::call<fns::snd_ctl_pcm_info>(ctl, info);
}

namespace fns
{

using snd_ctl_pcm_prefer_subdevice_arg0_t = snd_ctl_t *;
using snd_ctl_pcm_prefer_subdevice_arg1_t = int;
struct snd_ctl_pcm_prefer_subdevice
{
  const char* name = "snd_ctl_pcm_prefer_subdevice";
  const std::vector<const char*> args = {"ctl", "subdev"};
  using type = int(*)(snd_ctl_t *, int);
};

}

extern "C" int snd_ctl_pcm_prefer_subdevice(fns::snd_ctl_pcm_prefer_subdevice_arg0_t ctl, fns::snd_ctl_pcm_prefer_subdevice_arg1_t subdev)
{
  return fns::call<fns::snd_ctl_pcm_prefer_subdevice>(ctl, subdev);
}

namespace fns
{

using snd_ctl_rawmidi_next_device_arg0_t = snd_ctl_t *;
using snd_ctl_rawmidi_next_device_arg1_t = int *;
struct snd_ctl_rawmidi_next_device
{
  const char* name = "snd_ctl_rawmidi_next_device";
  const std::vector<const char*> args = {"ctl", "device"};
  using type = int(*)(snd_ctl_t *, int *);
};

}

extern "C" int snd_ctl_rawmidi_next_device(fns::snd_ctl_rawmidi_next_device_arg0_t ctl, fns::snd_ctl_rawmidi_next_device_arg1_t device)
{
  return fns::call<fns::snd_ctl_rawmidi_next_device>(ctl, device);
}

namespace fns
{

using snd_ctl_rawmidi_info_arg0_t = snd_ctl_t *;
using snd_ctl_rawmidi_info_arg1_t = snd_rawmidi_info_t *;
struct snd_ctl_rawmidi_info
{
  const char* name = "snd_ctl_rawmidi_info";
  const std::vector<const char*> args = {"ctl", "info"};
  using type = int(*)(snd_ctl_t *, snd_rawmidi_info_t *);
};

}

extern "C" int snd_ctl_rawmidi_info(fns::snd_ctl_rawmidi_info_arg0_t ctl, fns::snd_ctl_rawmidi_info_arg1_t info)
{
  return fns::call<fns::snd_ctl_rawmidi_info>(ctl, info);
}

namespace fns
{

using snd_ctl_rawmidi_prefer_subdevice_arg0_t = snd_ctl_t *;
using snd_ctl_rawmidi_prefer_subdevice_arg1_t = int;
struct snd_ctl_rawmidi_prefer_subdevice
{
  const char* name = "snd_ctl_rawmidi_prefer_subdevice";
  const std::vector<const char*> args = {"ctl", "subdev"};
  using type = int(*)(snd_ctl_t *, int);
};

}

extern "C" int snd_ctl_rawmidi_prefer_subdevice(fns::snd_ctl_rawmidi_prefer_subdevice_arg0_t ctl, fns::snd_ctl_rawmidi_prefer_subdevice_arg1_t subdev)
{
  return fns::call<fns::snd_ctl_rawmidi_prefer_subdevice>(ctl, subdev);
}

namespace fns
{

using snd_ctl_set_power_state_arg0_t = snd_ctl_t *;
using snd_ctl_set_power_state_arg1_t = unsigned int;
struct snd_ctl_set_power_state
{
  const char* name = "snd_ctl_set_power_state";
  const std::vector<const char*> args = {"ctl", "state"};
  using type = int(*)(snd_ctl_t *, unsigned int);
};

}

extern "C" int snd_ctl_set_power_state(fns::snd_ctl_set_power_state_arg0_t ctl, fns::snd_ctl_set_power_state_arg1_t state)
{
  return fns::call<fns::snd_ctl_set_power_state>(ctl, state);
}

namespace fns
{

using snd_ctl_get_power_state_arg0_t = snd_ctl_t *;
using snd_ctl_get_power_state_arg1_t = unsigned int *;
struct snd_ctl_get_power_state
{
  const char* name = "snd_ctl_get_power_state";
  const std::vector<const char*> args = {"ctl", "state"};
  using type = int(*)(snd_ctl_t *, unsigned int *);
};

}

extern "C" int snd_ctl_get_power_state(fns::snd_ctl_get_power_state_arg0_t ctl, fns::snd_ctl_get_power_state_arg1_t state)
{
  return fns::call<fns::snd_ctl_get_power_state>(ctl, state);
}

namespace fns
{

using snd_ctl_read_arg0_t = snd_ctl_t *;
using snd_ctl_read_arg1_t = snd_ctl_event_t *;
struct snd_ctl_read
{
  const char* name = "snd_ctl_read";
  const std::vector<const char*> args = {"ctl", "event"};
  using type = int(*)(snd_ctl_t *, snd_ctl_event_t *);
};

}

extern "C" int snd_ctl_read(fns::snd_ctl_read_arg0_t ctl, fns::snd_ctl_read_arg1_t event)
{
  return fns::call<fns::snd_ctl_read>(ctl, event);
}

namespace fns
{

using snd_ctl_wait_arg0_t = snd_ctl_t *;
using snd_ctl_wait_arg1_t = int;
struct snd_ctl_wait
{
  const char* name = "snd_ctl_wait";
  const std::vector<const char*> args = {"ctl", "timeout"};
  using type = int(*)(snd_ctl_t *, int);
};

}

extern "C" int snd_ctl_wait(fns::snd_ctl_wait_arg0_t ctl, fns::snd_ctl_wait_arg1_t timeout)
{
  return fns::call<fns::snd_ctl_wait>(ctl, timeout);
}

namespace fns
{

using snd_ctl_name_arg0_t = snd_ctl_t *;
struct snd_ctl_name
{
  const char* name = "snd_ctl_name";
  const std::vector<const char*> args = {"ctl"};
  using type = const char *(*)(snd_ctl_t *);
};

}

extern "C" const char * snd_ctl_name(fns::snd_ctl_name_arg0_t ctl)
{
  return fns::call<fns::snd_ctl_name>(ctl);
}

namespace fns
{

using snd_ctl_type_arg0_t = snd_ctl_t *;
struct snd_ctl_type
{
  const char* name = "snd_ctl_type";
  const std::vector<const char*> args = {"ctl"};
  using type = snd_ctl_type_t(*)(snd_ctl_t *);
};

}

extern "C" snd_ctl_type_t snd_ctl_type(fns::snd_ctl_type_arg0_t ctl)
{
  return fns::call<fns::snd_ctl_type>(ctl);
}

namespace fns
{

using snd_ctl_elem_type_name_arg0_t = snd_ctl_elem_type_t;
struct snd_ctl_elem_type_name
{
  const char* name = "snd_ctl_elem_type_name";
  const std::vector<const char*> args = {"type"};
  using type = const char *(*)(snd_ctl_elem_type_t);
};

}

extern "C" const char * snd_ctl_elem_type_name(fns::snd_ctl_elem_type_name_arg0_t type)
{
  return fns::call<fns::snd_ctl_elem_type_name>(type);
}

namespace fns
{

using snd_ctl_elem_iface_name_arg0_t = snd_ctl_elem_iface_t;
struct snd_ctl_elem_iface_name
{
  const char* name = "snd_ctl_elem_iface_name";
  const std::vector<const char*> args = {"iface"};
  using type = const char *(*)(snd_ctl_elem_iface_t);
};

}

extern "C" const char * snd_ctl_elem_iface_name(fns::snd_ctl_elem_iface_name_arg0_t iface)
{
  return fns::call<fns::snd_ctl_elem_iface_name>(iface);
}

namespace fns
{

using snd_ctl_event_type_name_arg0_t = snd_ctl_event_type_t;
struct snd_ctl_event_type_name
{
  const char* name = "snd_ctl_event_type_name";
  const std::vector<const char*> args = {"type"};
  using type = const char *(*)(snd_ctl_event_type_t);
};

}

extern "C" const char * snd_ctl_event_type_name(fns::snd_ctl_event_type_name_arg0_t type)
{
  return fns::call<fns::snd_ctl_event_type_name>(type);
}

namespace fns
{

using snd_ctl_event_elem_get_mask_arg0_t = const snd_ctl_event_t *;
struct snd_ctl_event_elem_get_mask
{
  const char* name = "snd_ctl_event_elem_get_mask";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_event_t *);
};

}

extern "C" unsigned int snd_ctl_event_elem_get_mask(fns::snd_ctl_event_elem_get_mask_arg0_t obj)
{
  return fns::call<fns::snd_ctl_event_elem_get_mask>(obj);
}

namespace fns
{

using snd_ctl_event_elem_get_numid_arg0_t = const snd_ctl_event_t *;
struct snd_ctl_event_elem_get_numid
{
  const char* name = "snd_ctl_event_elem_get_numid";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_event_t *);
};

}

extern "C" unsigned int snd_ctl_event_elem_get_numid(fns::snd_ctl_event_elem_get_numid_arg0_t obj)
{
  return fns::call<fns::snd_ctl_event_elem_get_numid>(obj);
}

namespace fns
{

using snd_ctl_event_elem_get_id_arg0_t = const snd_ctl_event_t *;
using snd_ctl_event_elem_get_id_arg1_t = snd_ctl_elem_id_t *;
struct snd_ctl_event_elem_get_id
{
  const char* name = "snd_ctl_event_elem_get_id";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(const snd_ctl_event_t *, snd_ctl_elem_id_t *);
};

}

extern "C" void snd_ctl_event_elem_get_id(fns::snd_ctl_event_elem_get_id_arg0_t obj, fns::snd_ctl_event_elem_get_id_arg1_t ptr)
{
  return fns::call_void<fns::snd_ctl_event_elem_get_id>(obj, ptr);
}

namespace fns
{

using snd_ctl_event_elem_get_interface_arg0_t = const snd_ctl_event_t *;
struct snd_ctl_event_elem_get_interface
{
  const char* name = "snd_ctl_event_elem_get_interface";
  const std::vector<const char*> args = {"obj"};
  using type = snd_ctl_elem_iface_t(*)(const snd_ctl_event_t *);
};

}

extern "C" snd_ctl_elem_iface_t snd_ctl_event_elem_get_interface(fns::snd_ctl_event_elem_get_interface_arg0_t obj)
{
  return fns::call<fns::snd_ctl_event_elem_get_interface>(obj);
}

namespace fns
{

using snd_ctl_event_elem_get_device_arg0_t = const snd_ctl_event_t *;
struct snd_ctl_event_elem_get_device
{
  const char* name = "snd_ctl_event_elem_get_device";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_event_t *);
};

}

extern "C" unsigned int snd_ctl_event_elem_get_device(fns::snd_ctl_event_elem_get_device_arg0_t obj)
{
  return fns::call<fns::snd_ctl_event_elem_get_device>(obj);
}

namespace fns
{

using snd_ctl_event_elem_get_subdevice_arg0_t = const snd_ctl_event_t *;
struct snd_ctl_event_elem_get_subdevice
{
  const char* name = "snd_ctl_event_elem_get_subdevice";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_event_t *);
};

}

extern "C" unsigned int snd_ctl_event_elem_get_subdevice(fns::snd_ctl_event_elem_get_subdevice_arg0_t obj)
{
  return fns::call<fns::snd_ctl_event_elem_get_subdevice>(obj);
}

namespace fns
{

using snd_ctl_event_elem_get_name_arg0_t = const snd_ctl_event_t *;
struct snd_ctl_event_elem_get_name
{
  const char* name = "snd_ctl_event_elem_get_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_ctl_event_t *);
};

}

extern "C" const char * snd_ctl_event_elem_get_name(fns::snd_ctl_event_elem_get_name_arg0_t obj)
{
  return fns::call<fns::snd_ctl_event_elem_get_name>(obj);
}

namespace fns
{

using snd_ctl_event_elem_get_index_arg0_t = const snd_ctl_event_t *;
struct snd_ctl_event_elem_get_index
{
  const char* name = "snd_ctl_event_elem_get_index";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_event_t *);
};

}

extern "C" unsigned int snd_ctl_event_elem_get_index(fns::snd_ctl_event_elem_get_index_arg0_t obj)
{
  return fns::call<fns::snd_ctl_event_elem_get_index>(obj);
}

namespace fns
{

using snd_ctl_elem_list_alloc_space_arg0_t = snd_ctl_elem_list_t *;
using snd_ctl_elem_list_alloc_space_arg1_t = unsigned int;
struct snd_ctl_elem_list_alloc_space
{
  const char* name = "snd_ctl_elem_list_alloc_space";
  const std::vector<const char*> args = {"obj", "entries"};
  using type = int(*)(snd_ctl_elem_list_t *, unsigned int);
};

}

extern "C" int snd_ctl_elem_list_alloc_space(fns::snd_ctl_elem_list_alloc_space_arg0_t obj, fns::snd_ctl_elem_list_alloc_space_arg1_t entries)
{
  return fns::call<fns::snd_ctl_elem_list_alloc_space>(obj, entries);
}

namespace fns
{

using snd_ctl_elem_list_free_space_arg0_t = snd_ctl_elem_list_t *;
struct snd_ctl_elem_list_free_space
{
  const char* name = "snd_ctl_elem_list_free_space";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_elem_list_t *);
};

}

extern "C" void snd_ctl_elem_list_free_space(fns::snd_ctl_elem_list_free_space_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_elem_list_free_space>(obj);
}

namespace fns
{

using snd_ctl_ascii_elem_id_get_arg0_t = snd_ctl_elem_id_t *;
struct snd_ctl_ascii_elem_id_get
{
  const char* name = "snd_ctl_ascii_elem_id_get";
  const std::vector<const char*> args = {"id"};
  using type = char *(*)(snd_ctl_elem_id_t *);
};

}

extern "C" char * snd_ctl_ascii_elem_id_get(fns::snd_ctl_ascii_elem_id_get_arg0_t id)
{
  return fns::call<fns::snd_ctl_ascii_elem_id_get>(id);
}

namespace fns
{

using snd_ctl_ascii_elem_id_parse_arg0_t = snd_ctl_elem_id_t *;
using snd_ctl_ascii_elem_id_parse_arg1_t = const char *;
struct snd_ctl_ascii_elem_id_parse
{
  const char* name = "snd_ctl_ascii_elem_id_parse";
  const std::vector<const char*> args = {"dst", "str"};
  using type = int(*)(snd_ctl_elem_id_t *, const char *);
};

}

extern "C" int snd_ctl_ascii_elem_id_parse(fns::snd_ctl_ascii_elem_id_parse_arg0_t dst, fns::snd_ctl_ascii_elem_id_parse_arg1_t str)
{
  return fns::call<fns::snd_ctl_ascii_elem_id_parse>(dst, str);
}

namespace fns
{

using snd_ctl_ascii_value_parse_arg0_t = snd_ctl_t *;
using snd_ctl_ascii_value_parse_arg1_t = snd_ctl_elem_value_t *;
using snd_ctl_ascii_value_parse_arg2_t = snd_ctl_elem_info_t *;
using snd_ctl_ascii_value_parse_arg3_t = const char *;
struct snd_ctl_ascii_value_parse
{
  const char* name = "snd_ctl_ascii_value_parse";
  const std::vector<const char*> args = {"handle", "dst", "info", "value"};
  using type = int(*)(snd_ctl_t *, snd_ctl_elem_value_t *, snd_ctl_elem_info_t *, const char *);
};

}

extern "C" int snd_ctl_ascii_value_parse(fns::snd_ctl_ascii_value_parse_arg0_t handle, fns::snd_ctl_ascii_value_parse_arg1_t dst, fns::snd_ctl_ascii_value_parse_arg2_t info, fns::snd_ctl_ascii_value_parse_arg3_t value)
{
  return fns::call<fns::snd_ctl_ascii_value_parse>(handle, dst, info, value);
}

namespace fns
{

struct snd_ctl_elem_id_sizeof
{
  const char* name = "snd_ctl_elem_id_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_ctl_elem_id_sizeof()
{
  return fns::call<fns::snd_ctl_elem_id_sizeof>();
}

namespace fns
{

using snd_ctl_elem_id_malloc_arg0_t = snd_ctl_elem_id_t **;
struct snd_ctl_elem_id_malloc
{
  const char* name = "snd_ctl_elem_id_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_ctl_elem_id_t **);
};

}

extern "C" int snd_ctl_elem_id_malloc(fns::snd_ctl_elem_id_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_ctl_elem_id_malloc>(ptr);
}

namespace fns
{

using snd_ctl_elem_id_free_arg0_t = snd_ctl_elem_id_t *;
struct snd_ctl_elem_id_free
{
  const char* name = "snd_ctl_elem_id_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_elem_id_t *);
};

}

extern "C" void snd_ctl_elem_id_free(fns::snd_ctl_elem_id_free_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_elem_id_free>(obj);
}

namespace fns
{

using snd_ctl_elem_id_clear_arg0_t = snd_ctl_elem_id_t *;
struct snd_ctl_elem_id_clear
{
  const char* name = "snd_ctl_elem_id_clear";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_elem_id_t *);
};

}

extern "C" void snd_ctl_elem_id_clear(fns::snd_ctl_elem_id_clear_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_elem_id_clear>(obj);
}

namespace fns
{

using snd_ctl_elem_id_copy_arg0_t = snd_ctl_elem_id_t *;
using snd_ctl_elem_id_copy_arg1_t = const snd_ctl_elem_id_t *;
struct snd_ctl_elem_id_copy
{
  const char* name = "snd_ctl_elem_id_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_ctl_elem_id_t *, const snd_ctl_elem_id_t *);
};

}

extern "C" void snd_ctl_elem_id_copy(fns::snd_ctl_elem_id_copy_arg0_t dst, fns::snd_ctl_elem_id_copy_arg1_t src)
{
  return fns::call_void<fns::snd_ctl_elem_id_copy>(dst, src);
}

namespace fns
{

using snd_ctl_elem_id_get_numid_arg0_t = const snd_ctl_elem_id_t *;
struct snd_ctl_elem_id_get_numid
{
  const char* name = "snd_ctl_elem_id_get_numid";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_id_t *);
};

}

extern "C" unsigned int snd_ctl_elem_id_get_numid(fns::snd_ctl_elem_id_get_numid_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_id_get_numid>(obj);
}

namespace fns
{

using snd_ctl_elem_id_get_interface_arg0_t = const snd_ctl_elem_id_t *;
struct snd_ctl_elem_id_get_interface
{
  const char* name = "snd_ctl_elem_id_get_interface";
  const std::vector<const char*> args = {"obj"};
  using type = snd_ctl_elem_iface_t(*)(const snd_ctl_elem_id_t *);
};

}

extern "C" snd_ctl_elem_iface_t snd_ctl_elem_id_get_interface(fns::snd_ctl_elem_id_get_interface_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_id_get_interface>(obj);
}

namespace fns
{

using snd_ctl_elem_id_get_device_arg0_t = const snd_ctl_elem_id_t *;
struct snd_ctl_elem_id_get_device
{
  const char* name = "snd_ctl_elem_id_get_device";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_id_t *);
};

}

extern "C" unsigned int snd_ctl_elem_id_get_device(fns::snd_ctl_elem_id_get_device_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_id_get_device>(obj);
}

namespace fns
{

using snd_ctl_elem_id_get_subdevice_arg0_t = const snd_ctl_elem_id_t *;
struct snd_ctl_elem_id_get_subdevice
{
  const char* name = "snd_ctl_elem_id_get_subdevice";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_id_t *);
};

}

extern "C" unsigned int snd_ctl_elem_id_get_subdevice(fns::snd_ctl_elem_id_get_subdevice_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_id_get_subdevice>(obj);
}

namespace fns
{

using snd_ctl_elem_id_get_name_arg0_t = const snd_ctl_elem_id_t *;
struct snd_ctl_elem_id_get_name
{
  const char* name = "snd_ctl_elem_id_get_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_ctl_elem_id_t *);
};

}

extern "C" const char * snd_ctl_elem_id_get_name(fns::snd_ctl_elem_id_get_name_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_id_get_name>(obj);
}

namespace fns
{

using snd_ctl_elem_id_get_index_arg0_t = const snd_ctl_elem_id_t *;
struct snd_ctl_elem_id_get_index
{
  const char* name = "snd_ctl_elem_id_get_index";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_id_t *);
};

}

extern "C" unsigned int snd_ctl_elem_id_get_index(fns::snd_ctl_elem_id_get_index_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_id_get_index>(obj);
}

namespace fns
{

using snd_ctl_elem_id_set_numid_arg0_t = snd_ctl_elem_id_t *;
using snd_ctl_elem_id_set_numid_arg1_t = unsigned int;
struct snd_ctl_elem_id_set_numid
{
  const char* name = "snd_ctl_elem_id_set_numid";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_id_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_id_set_numid(fns::snd_ctl_elem_id_set_numid_arg0_t obj, fns::snd_ctl_elem_id_set_numid_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_id_set_numid>(obj, val);
}

namespace fns
{

using snd_ctl_elem_id_set_interface_arg0_t = snd_ctl_elem_id_t *;
using snd_ctl_elem_id_set_interface_arg1_t = snd_ctl_elem_iface_t;
struct snd_ctl_elem_id_set_interface
{
  const char* name = "snd_ctl_elem_id_set_interface";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_id_t *, snd_ctl_elem_iface_t);
};

}

extern "C" void snd_ctl_elem_id_set_interface(fns::snd_ctl_elem_id_set_interface_arg0_t obj, fns::snd_ctl_elem_id_set_interface_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_id_set_interface>(obj, val);
}

namespace fns
{

using snd_ctl_elem_id_set_device_arg0_t = snd_ctl_elem_id_t *;
using snd_ctl_elem_id_set_device_arg1_t = unsigned int;
struct snd_ctl_elem_id_set_device
{
  const char* name = "snd_ctl_elem_id_set_device";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_id_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_id_set_device(fns::snd_ctl_elem_id_set_device_arg0_t obj, fns::snd_ctl_elem_id_set_device_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_id_set_device>(obj, val);
}

namespace fns
{

using snd_ctl_elem_id_set_subdevice_arg0_t = snd_ctl_elem_id_t *;
using snd_ctl_elem_id_set_subdevice_arg1_t = unsigned int;
struct snd_ctl_elem_id_set_subdevice
{
  const char* name = "snd_ctl_elem_id_set_subdevice";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_id_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_id_set_subdevice(fns::snd_ctl_elem_id_set_subdevice_arg0_t obj, fns::snd_ctl_elem_id_set_subdevice_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_id_set_subdevice>(obj, val);
}

namespace fns
{

using snd_ctl_elem_id_set_name_arg0_t = snd_ctl_elem_id_t *;
using snd_ctl_elem_id_set_name_arg1_t = const char *;
struct snd_ctl_elem_id_set_name
{
  const char* name = "snd_ctl_elem_id_set_name";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_id_t *, const char *);
};

}

extern "C" void snd_ctl_elem_id_set_name(fns::snd_ctl_elem_id_set_name_arg0_t obj, fns::snd_ctl_elem_id_set_name_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_id_set_name>(obj, val);
}

namespace fns
{

using snd_ctl_elem_id_set_index_arg0_t = snd_ctl_elem_id_t *;
using snd_ctl_elem_id_set_index_arg1_t = unsigned int;
struct snd_ctl_elem_id_set_index
{
  const char* name = "snd_ctl_elem_id_set_index";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_id_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_id_set_index(fns::snd_ctl_elem_id_set_index_arg0_t obj, fns::snd_ctl_elem_id_set_index_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_id_set_index>(obj, val);
}

namespace fns
{

struct snd_ctl_card_info_sizeof
{
  const char* name = "snd_ctl_card_info_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_ctl_card_info_sizeof()
{
  return fns::call<fns::snd_ctl_card_info_sizeof>();
}

namespace fns
{

using snd_ctl_card_info_malloc_arg0_t = snd_ctl_card_info_t **;
struct snd_ctl_card_info_malloc
{
  const char* name = "snd_ctl_card_info_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_ctl_card_info_t **);
};

}

extern "C" int snd_ctl_card_info_malloc(fns::snd_ctl_card_info_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_ctl_card_info_malloc>(ptr);
}

namespace fns
{

using snd_ctl_card_info_free_arg0_t = snd_ctl_card_info_t *;
struct snd_ctl_card_info_free
{
  const char* name = "snd_ctl_card_info_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_card_info_t *);
};

}

extern "C" void snd_ctl_card_info_free(fns::snd_ctl_card_info_free_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_card_info_free>(obj);
}

namespace fns
{

using snd_ctl_card_info_clear_arg0_t = snd_ctl_card_info_t *;
struct snd_ctl_card_info_clear
{
  const char* name = "snd_ctl_card_info_clear";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_card_info_t *);
};

}

extern "C" void snd_ctl_card_info_clear(fns::snd_ctl_card_info_clear_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_card_info_clear>(obj);
}

namespace fns
{

using snd_ctl_card_info_copy_arg0_t = snd_ctl_card_info_t *;
using snd_ctl_card_info_copy_arg1_t = const snd_ctl_card_info_t *;
struct snd_ctl_card_info_copy
{
  const char* name = "snd_ctl_card_info_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_ctl_card_info_t *, const snd_ctl_card_info_t *);
};

}

extern "C" void snd_ctl_card_info_copy(fns::snd_ctl_card_info_copy_arg0_t dst, fns::snd_ctl_card_info_copy_arg1_t src)
{
  return fns::call_void<fns::snd_ctl_card_info_copy>(dst, src);
}

namespace fns
{

using snd_ctl_card_info_get_card_arg0_t = const snd_ctl_card_info_t *;
struct snd_ctl_card_info_get_card
{
  const char* name = "snd_ctl_card_info_get_card";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_ctl_card_info_t *);
};

}

extern "C" int snd_ctl_card_info_get_card(fns::snd_ctl_card_info_get_card_arg0_t obj)
{
  return fns::call<fns::snd_ctl_card_info_get_card>(obj);
}

namespace fns
{

using snd_ctl_card_info_get_id_arg0_t = const snd_ctl_card_info_t *;
struct snd_ctl_card_info_get_id
{
  const char* name = "snd_ctl_card_info_get_id";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_ctl_card_info_t *);
};

}

extern "C" const char * snd_ctl_card_info_get_id(fns::snd_ctl_card_info_get_id_arg0_t obj)
{
  return fns::call<fns::snd_ctl_card_info_get_id>(obj);
}

namespace fns
{

using snd_ctl_card_info_get_driver_arg0_t = const snd_ctl_card_info_t *;
struct snd_ctl_card_info_get_driver
{
  const char* name = "snd_ctl_card_info_get_driver";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_ctl_card_info_t *);
};

}

extern "C" const char * snd_ctl_card_info_get_driver(fns::snd_ctl_card_info_get_driver_arg0_t obj)
{
  return fns::call<fns::snd_ctl_card_info_get_driver>(obj);
}

namespace fns
{

using snd_ctl_card_info_get_name_arg0_t = const snd_ctl_card_info_t *;
struct snd_ctl_card_info_get_name
{
  const char* name = "snd_ctl_card_info_get_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_ctl_card_info_t *);
};

}

extern "C" const char * snd_ctl_card_info_get_name(fns::snd_ctl_card_info_get_name_arg0_t obj)
{
  return fns::call<fns::snd_ctl_card_info_get_name>(obj);
}

namespace fns
{

using snd_ctl_card_info_get_longname_arg0_t = const snd_ctl_card_info_t *;
struct snd_ctl_card_info_get_longname
{
  const char* name = "snd_ctl_card_info_get_longname";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_ctl_card_info_t *);
};

}

extern "C" const char * snd_ctl_card_info_get_longname(fns::snd_ctl_card_info_get_longname_arg0_t obj)
{
  return fns::call<fns::snd_ctl_card_info_get_longname>(obj);
}

namespace fns
{

using snd_ctl_card_info_get_mixername_arg0_t = const snd_ctl_card_info_t *;
struct snd_ctl_card_info_get_mixername
{
  const char* name = "snd_ctl_card_info_get_mixername";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_ctl_card_info_t *);
};

}

extern "C" const char * snd_ctl_card_info_get_mixername(fns::snd_ctl_card_info_get_mixername_arg0_t obj)
{
  return fns::call<fns::snd_ctl_card_info_get_mixername>(obj);
}

namespace fns
{

using snd_ctl_card_info_get_components_arg0_t = const snd_ctl_card_info_t *;
struct snd_ctl_card_info_get_components
{
  const char* name = "snd_ctl_card_info_get_components";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_ctl_card_info_t *);
};

}

extern "C" const char * snd_ctl_card_info_get_components(fns::snd_ctl_card_info_get_components_arg0_t obj)
{
  return fns::call<fns::snd_ctl_card_info_get_components>(obj);
}

namespace fns
{

struct snd_ctl_event_sizeof
{
  const char* name = "snd_ctl_event_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_ctl_event_sizeof()
{
  return fns::call<fns::snd_ctl_event_sizeof>();
}

namespace fns
{

using snd_ctl_event_malloc_arg0_t = snd_ctl_event_t **;
struct snd_ctl_event_malloc
{
  const char* name = "snd_ctl_event_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_ctl_event_t **);
};

}

extern "C" int snd_ctl_event_malloc(fns::snd_ctl_event_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_ctl_event_malloc>(ptr);
}

namespace fns
{

using snd_ctl_event_free_arg0_t = snd_ctl_event_t *;
struct snd_ctl_event_free
{
  const char* name = "snd_ctl_event_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_event_t *);
};

}

extern "C" void snd_ctl_event_free(fns::snd_ctl_event_free_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_event_free>(obj);
}

namespace fns
{

using snd_ctl_event_clear_arg0_t = snd_ctl_event_t *;
struct snd_ctl_event_clear
{
  const char* name = "snd_ctl_event_clear";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_event_t *);
};

}

extern "C" void snd_ctl_event_clear(fns::snd_ctl_event_clear_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_event_clear>(obj);
}

namespace fns
{

using snd_ctl_event_copy_arg0_t = snd_ctl_event_t *;
using snd_ctl_event_copy_arg1_t = const snd_ctl_event_t *;
struct snd_ctl_event_copy
{
  const char* name = "snd_ctl_event_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_ctl_event_t *, const snd_ctl_event_t *);
};

}

extern "C" void snd_ctl_event_copy(fns::snd_ctl_event_copy_arg0_t dst, fns::snd_ctl_event_copy_arg1_t src)
{
  return fns::call_void<fns::snd_ctl_event_copy>(dst, src);
}

namespace fns
{

using snd_ctl_event_get_type_arg0_t = const snd_ctl_event_t *;
struct snd_ctl_event_get_type
{
  const char* name = "snd_ctl_event_get_type";
  const std::vector<const char*> args = {"obj"};
  using type = snd_ctl_event_type_t(*)(const snd_ctl_event_t *);
};

}

extern "C" snd_ctl_event_type_t snd_ctl_event_get_type(fns::snd_ctl_event_get_type_arg0_t obj)
{
  return fns::call<fns::snd_ctl_event_get_type>(obj);
}

namespace fns
{

struct snd_ctl_elem_list_sizeof
{
  const char* name = "snd_ctl_elem_list_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_ctl_elem_list_sizeof()
{
  return fns::call<fns::snd_ctl_elem_list_sizeof>();
}

namespace fns
{

using snd_ctl_elem_list_malloc_arg0_t = snd_ctl_elem_list_t **;
struct snd_ctl_elem_list_malloc
{
  const char* name = "snd_ctl_elem_list_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_ctl_elem_list_t **);
};

}

extern "C" int snd_ctl_elem_list_malloc(fns::snd_ctl_elem_list_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_ctl_elem_list_malloc>(ptr);
}

namespace fns
{

using snd_ctl_elem_list_free_arg0_t = snd_ctl_elem_list_t *;
struct snd_ctl_elem_list_free
{
  const char* name = "snd_ctl_elem_list_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_elem_list_t *);
};

}

extern "C" void snd_ctl_elem_list_free(fns::snd_ctl_elem_list_free_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_elem_list_free>(obj);
}

namespace fns
{

using snd_ctl_elem_list_clear_arg0_t = snd_ctl_elem_list_t *;
struct snd_ctl_elem_list_clear
{
  const char* name = "snd_ctl_elem_list_clear";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_elem_list_t *);
};

}

extern "C" void snd_ctl_elem_list_clear(fns::snd_ctl_elem_list_clear_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_elem_list_clear>(obj);
}

namespace fns
{

using snd_ctl_elem_list_copy_arg0_t = snd_ctl_elem_list_t *;
using snd_ctl_elem_list_copy_arg1_t = const snd_ctl_elem_list_t *;
struct snd_ctl_elem_list_copy
{
  const char* name = "snd_ctl_elem_list_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_ctl_elem_list_t *, const snd_ctl_elem_list_t *);
};

}

extern "C" void snd_ctl_elem_list_copy(fns::snd_ctl_elem_list_copy_arg0_t dst, fns::snd_ctl_elem_list_copy_arg1_t src)
{
  return fns::call_void<fns::snd_ctl_elem_list_copy>(dst, src);
}

namespace fns
{

using snd_ctl_elem_list_set_offset_arg0_t = snd_ctl_elem_list_t *;
using snd_ctl_elem_list_set_offset_arg1_t = unsigned int;
struct snd_ctl_elem_list_set_offset
{
  const char* name = "snd_ctl_elem_list_set_offset";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_list_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_list_set_offset(fns::snd_ctl_elem_list_set_offset_arg0_t obj, fns::snd_ctl_elem_list_set_offset_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_list_set_offset>(obj, val);
}

namespace fns
{

using snd_ctl_elem_list_get_used_arg0_t = const snd_ctl_elem_list_t *;
struct snd_ctl_elem_list_get_used
{
  const char* name = "snd_ctl_elem_list_get_used";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_list_t *);
};

}

extern "C" unsigned int snd_ctl_elem_list_get_used(fns::snd_ctl_elem_list_get_used_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_list_get_used>(obj);
}

namespace fns
{

using snd_ctl_elem_list_get_count_arg0_t = const snd_ctl_elem_list_t *;
struct snd_ctl_elem_list_get_count
{
  const char* name = "snd_ctl_elem_list_get_count";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_list_t *);
};

}

extern "C" unsigned int snd_ctl_elem_list_get_count(fns::snd_ctl_elem_list_get_count_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_list_get_count>(obj);
}

namespace fns
{

using snd_ctl_elem_list_get_id_arg0_t = const snd_ctl_elem_list_t *;
using snd_ctl_elem_list_get_id_arg1_t = unsigned int;
using snd_ctl_elem_list_get_id_arg2_t = snd_ctl_elem_id_t *;
struct snd_ctl_elem_list_get_id
{
  const char* name = "snd_ctl_elem_list_get_id";
  const std::vector<const char*> args = {"obj", "idx", "ptr"};
  using type = void(*)(const snd_ctl_elem_list_t *, unsigned int, snd_ctl_elem_id_t *);
};

}

extern "C" void snd_ctl_elem_list_get_id(fns::snd_ctl_elem_list_get_id_arg0_t obj, fns::snd_ctl_elem_list_get_id_arg1_t idx, fns::snd_ctl_elem_list_get_id_arg2_t ptr)
{
  return fns::call_void<fns::snd_ctl_elem_list_get_id>(obj, idx, ptr);
}

namespace fns
{

using snd_ctl_elem_list_get_numid_arg0_t = const snd_ctl_elem_list_t *;
using snd_ctl_elem_list_get_numid_arg1_t = unsigned int;
struct snd_ctl_elem_list_get_numid
{
  const char* name = "snd_ctl_elem_list_get_numid";
  const std::vector<const char*> args = {"obj", "idx"};
  using type = unsigned int(*)(const snd_ctl_elem_list_t *, unsigned int);
};

}

extern "C" unsigned int snd_ctl_elem_list_get_numid(fns::snd_ctl_elem_list_get_numid_arg0_t obj, fns::snd_ctl_elem_list_get_numid_arg1_t idx)
{
  return fns::call<fns::snd_ctl_elem_list_get_numid>(obj, idx);
}

namespace fns
{

using snd_ctl_elem_list_get_interface_arg0_t = const snd_ctl_elem_list_t *;
using snd_ctl_elem_list_get_interface_arg1_t = unsigned int;
struct snd_ctl_elem_list_get_interface
{
  const char* name = "snd_ctl_elem_list_get_interface";
  const std::vector<const char*> args = {"obj", "idx"};
  using type = snd_ctl_elem_iface_t(*)(const snd_ctl_elem_list_t *, unsigned int);
};

}

extern "C" snd_ctl_elem_iface_t snd_ctl_elem_list_get_interface(fns::snd_ctl_elem_list_get_interface_arg0_t obj, fns::snd_ctl_elem_list_get_interface_arg1_t idx)
{
  return fns::call<fns::snd_ctl_elem_list_get_interface>(obj, idx);
}

namespace fns
{

using snd_ctl_elem_list_get_device_arg0_t = const snd_ctl_elem_list_t *;
using snd_ctl_elem_list_get_device_arg1_t = unsigned int;
struct snd_ctl_elem_list_get_device
{
  const char* name = "snd_ctl_elem_list_get_device";
  const std::vector<const char*> args = {"obj", "idx"};
  using type = unsigned int(*)(const snd_ctl_elem_list_t *, unsigned int);
};

}

extern "C" unsigned int snd_ctl_elem_list_get_device(fns::snd_ctl_elem_list_get_device_arg0_t obj, fns::snd_ctl_elem_list_get_device_arg1_t idx)
{
  return fns::call<fns::snd_ctl_elem_list_get_device>(obj, idx);
}

namespace fns
{

using snd_ctl_elem_list_get_subdevice_arg0_t = const snd_ctl_elem_list_t *;
using snd_ctl_elem_list_get_subdevice_arg1_t = unsigned int;
struct snd_ctl_elem_list_get_subdevice
{
  const char* name = "snd_ctl_elem_list_get_subdevice";
  const std::vector<const char*> args = {"obj", "idx"};
  using type = unsigned int(*)(const snd_ctl_elem_list_t *, unsigned int);
};

}

extern "C" unsigned int snd_ctl_elem_list_get_subdevice(fns::snd_ctl_elem_list_get_subdevice_arg0_t obj, fns::snd_ctl_elem_list_get_subdevice_arg1_t idx)
{
  return fns::call<fns::snd_ctl_elem_list_get_subdevice>(obj, idx);
}

namespace fns
{

using snd_ctl_elem_list_get_name_arg0_t = const snd_ctl_elem_list_t *;
using snd_ctl_elem_list_get_name_arg1_t = unsigned int;
struct snd_ctl_elem_list_get_name
{
  const char* name = "snd_ctl_elem_list_get_name";
  const std::vector<const char*> args = {"obj", "idx"};
  using type = const char *(*)(const snd_ctl_elem_list_t *, unsigned int);
};

}

extern "C" const char * snd_ctl_elem_list_get_name(fns::snd_ctl_elem_list_get_name_arg0_t obj, fns::snd_ctl_elem_list_get_name_arg1_t idx)
{
  return fns::call<fns::snd_ctl_elem_list_get_name>(obj, idx);
}

namespace fns
{

using snd_ctl_elem_list_get_index_arg0_t = const snd_ctl_elem_list_t *;
using snd_ctl_elem_list_get_index_arg1_t = unsigned int;
struct snd_ctl_elem_list_get_index
{
  const char* name = "snd_ctl_elem_list_get_index";
  const std::vector<const char*> args = {"obj", "idx"};
  using type = unsigned int(*)(const snd_ctl_elem_list_t *, unsigned int);
};

}

extern "C" unsigned int snd_ctl_elem_list_get_index(fns::snd_ctl_elem_list_get_index_arg0_t obj, fns::snd_ctl_elem_list_get_index_arg1_t idx)
{
  return fns::call<fns::snd_ctl_elem_list_get_index>(obj, idx);
}

namespace fns
{

struct snd_ctl_elem_info_sizeof
{
  const char* name = "snd_ctl_elem_info_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_ctl_elem_info_sizeof()
{
  return fns::call<fns::snd_ctl_elem_info_sizeof>();
}

namespace fns
{

using snd_ctl_elem_info_malloc_arg0_t = snd_ctl_elem_info_t **;
struct snd_ctl_elem_info_malloc
{
  const char* name = "snd_ctl_elem_info_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_ctl_elem_info_t **);
};

}

extern "C" int snd_ctl_elem_info_malloc(fns::snd_ctl_elem_info_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_ctl_elem_info_malloc>(ptr);
}

namespace fns
{

using snd_ctl_elem_info_free_arg0_t = snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_free
{
  const char* name = "snd_ctl_elem_info_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_elem_info_t *);
};

}

extern "C" void snd_ctl_elem_info_free(fns::snd_ctl_elem_info_free_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_elem_info_free>(obj);
}

namespace fns
{

using snd_ctl_elem_info_clear_arg0_t = snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_clear
{
  const char* name = "snd_ctl_elem_info_clear";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_elem_info_t *);
};

}

extern "C" void snd_ctl_elem_info_clear(fns::snd_ctl_elem_info_clear_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_elem_info_clear>(obj);
}

namespace fns
{

using snd_ctl_elem_info_copy_arg0_t = snd_ctl_elem_info_t *;
using snd_ctl_elem_info_copy_arg1_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_copy
{
  const char* name = "snd_ctl_elem_info_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_ctl_elem_info_t *, const snd_ctl_elem_info_t *);
};

}

extern "C" void snd_ctl_elem_info_copy(fns::snd_ctl_elem_info_copy_arg0_t dst, fns::snd_ctl_elem_info_copy_arg1_t src)
{
  return fns::call_void<fns::snd_ctl_elem_info_copy>(dst, src);
}

namespace fns
{

using snd_ctl_elem_info_get_type_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_type
{
  const char* name = "snd_ctl_elem_info_get_type";
  const std::vector<const char*> args = {"obj"};
  using type = snd_ctl_elem_type_t(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" snd_ctl_elem_type_t snd_ctl_elem_info_get_type(fns::snd_ctl_elem_info_get_type_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_type>(obj);
}

namespace fns
{

using snd_ctl_elem_info_is_readable_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_is_readable
{
  const char* name = "snd_ctl_elem_info_is_readable";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" int snd_ctl_elem_info_is_readable(fns::snd_ctl_elem_info_is_readable_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_is_readable>(obj);
}

namespace fns
{

using snd_ctl_elem_info_is_writable_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_is_writable
{
  const char* name = "snd_ctl_elem_info_is_writable";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" int snd_ctl_elem_info_is_writable(fns::snd_ctl_elem_info_is_writable_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_is_writable>(obj);
}

namespace fns
{

using snd_ctl_elem_info_is_volatile_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_is_volatile
{
  const char* name = "snd_ctl_elem_info_is_volatile";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" int snd_ctl_elem_info_is_volatile(fns::snd_ctl_elem_info_is_volatile_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_is_volatile>(obj);
}

namespace fns
{

using snd_ctl_elem_info_is_inactive_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_is_inactive
{
  const char* name = "snd_ctl_elem_info_is_inactive";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" int snd_ctl_elem_info_is_inactive(fns::snd_ctl_elem_info_is_inactive_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_is_inactive>(obj);
}

namespace fns
{

using snd_ctl_elem_info_is_locked_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_is_locked
{
  const char* name = "snd_ctl_elem_info_is_locked";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" int snd_ctl_elem_info_is_locked(fns::snd_ctl_elem_info_is_locked_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_is_locked>(obj);
}

namespace fns
{

using snd_ctl_elem_info_is_tlv_readable_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_is_tlv_readable
{
  const char* name = "snd_ctl_elem_info_is_tlv_readable";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" int snd_ctl_elem_info_is_tlv_readable(fns::snd_ctl_elem_info_is_tlv_readable_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_is_tlv_readable>(obj);
}

namespace fns
{

using snd_ctl_elem_info_is_tlv_writable_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_is_tlv_writable
{
  const char* name = "snd_ctl_elem_info_is_tlv_writable";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" int snd_ctl_elem_info_is_tlv_writable(fns::snd_ctl_elem_info_is_tlv_writable_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_is_tlv_writable>(obj);
}

namespace fns
{

using snd_ctl_elem_info_is_tlv_commandable_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_is_tlv_commandable
{
  const char* name = "snd_ctl_elem_info_is_tlv_commandable";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" int snd_ctl_elem_info_is_tlv_commandable(fns::snd_ctl_elem_info_is_tlv_commandable_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_is_tlv_commandable>(obj);
}

namespace fns
{

using snd_ctl_elem_info_is_owner_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_is_owner
{
  const char* name = "snd_ctl_elem_info_is_owner";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" int snd_ctl_elem_info_is_owner(fns::snd_ctl_elem_info_is_owner_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_is_owner>(obj);
}

namespace fns
{

using snd_ctl_elem_info_is_user_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_is_user
{
  const char* name = "snd_ctl_elem_info_is_user";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" int snd_ctl_elem_info_is_user(fns::snd_ctl_elem_info_is_user_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_is_user>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_owner_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_owner
{
  const char* name = "snd_ctl_elem_info_get_owner";
  const std::vector<const char*> args = {"obj"};
  using type = pid_t(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" pid_t snd_ctl_elem_info_get_owner(fns::snd_ctl_elem_info_get_owner_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_owner>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_count_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_count
{
  const char* name = "snd_ctl_elem_info_get_count";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" unsigned int snd_ctl_elem_info_get_count(fns::snd_ctl_elem_info_get_count_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_count>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_min_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_min
{
  const char* name = "snd_ctl_elem_info_get_min";
  const std::vector<const char*> args = {"obj"};
  using type = long(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" long snd_ctl_elem_info_get_min(fns::snd_ctl_elem_info_get_min_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_min>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_max_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_max
{
  const char* name = "snd_ctl_elem_info_get_max";
  const std::vector<const char*> args = {"obj"};
  using type = long(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" long snd_ctl_elem_info_get_max(fns::snd_ctl_elem_info_get_max_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_max>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_step_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_step
{
  const char* name = "snd_ctl_elem_info_get_step";
  const std::vector<const char*> args = {"obj"};
  using type = long(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" long snd_ctl_elem_info_get_step(fns::snd_ctl_elem_info_get_step_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_step>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_min64_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_min64
{
  const char* name = "snd_ctl_elem_info_get_min64";
  const std::vector<const char*> args = {"obj"};
  using type = long long(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" long long snd_ctl_elem_info_get_min64(fns::snd_ctl_elem_info_get_min64_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_min64>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_max64_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_max64
{
  const char* name = "snd_ctl_elem_info_get_max64";
  const std::vector<const char*> args = {"obj"};
  using type = long long(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" long long snd_ctl_elem_info_get_max64(fns::snd_ctl_elem_info_get_max64_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_max64>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_step64_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_step64
{
  const char* name = "snd_ctl_elem_info_get_step64";
  const std::vector<const char*> args = {"obj"};
  using type = long long(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" long long snd_ctl_elem_info_get_step64(fns::snd_ctl_elem_info_get_step64_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_step64>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_items_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_items
{
  const char* name = "snd_ctl_elem_info_get_items";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" unsigned int snd_ctl_elem_info_get_items(fns::snd_ctl_elem_info_get_items_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_items>(obj);
}

namespace fns
{

using snd_ctl_elem_info_set_item_arg0_t = snd_ctl_elem_info_t *;
using snd_ctl_elem_info_set_item_arg1_t = unsigned int;
struct snd_ctl_elem_info_set_item
{
  const char* name = "snd_ctl_elem_info_set_item";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_info_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_info_set_item(fns::snd_ctl_elem_info_set_item_arg0_t obj, fns::snd_ctl_elem_info_set_item_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_info_set_item>(obj, val);
}

namespace fns
{

using snd_ctl_elem_info_get_item_name_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_item_name
{
  const char* name = "snd_ctl_elem_info_get_item_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" const char * snd_ctl_elem_info_get_item_name(fns::snd_ctl_elem_info_get_item_name_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_item_name>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_dimensions_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_dimensions
{
  const char* name = "snd_ctl_elem_info_get_dimensions";
  const std::vector<const char*> args = {"obj"};
  using type = int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" int snd_ctl_elem_info_get_dimensions(fns::snd_ctl_elem_info_get_dimensions_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_dimensions>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_dimension_arg0_t = const snd_ctl_elem_info_t *;
using snd_ctl_elem_info_get_dimension_arg1_t = unsigned int;
struct snd_ctl_elem_info_get_dimension
{
  const char* name = "snd_ctl_elem_info_get_dimension";
  const std::vector<const char*> args = {"obj", "idx"};
  using type = int(*)(const snd_ctl_elem_info_t *, unsigned int);
};

}

extern "C" int snd_ctl_elem_info_get_dimension(fns::snd_ctl_elem_info_get_dimension_arg0_t obj, fns::snd_ctl_elem_info_get_dimension_arg1_t idx)
{
  return fns::call<fns::snd_ctl_elem_info_get_dimension>(obj, idx);
}

namespace fns
{

using snd_ctl_elem_info_get_id_arg0_t = const snd_ctl_elem_info_t *;
using snd_ctl_elem_info_get_id_arg1_t = snd_ctl_elem_id_t *;
struct snd_ctl_elem_info_get_id
{
  const char* name = "snd_ctl_elem_info_get_id";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(const snd_ctl_elem_info_t *, snd_ctl_elem_id_t *);
};

}

extern "C" void snd_ctl_elem_info_get_id(fns::snd_ctl_elem_info_get_id_arg0_t obj, fns::snd_ctl_elem_info_get_id_arg1_t ptr)
{
  return fns::call_void<fns::snd_ctl_elem_info_get_id>(obj, ptr);
}

namespace fns
{

using snd_ctl_elem_info_get_numid_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_numid
{
  const char* name = "snd_ctl_elem_info_get_numid";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" unsigned int snd_ctl_elem_info_get_numid(fns::snd_ctl_elem_info_get_numid_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_numid>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_interface_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_interface
{
  const char* name = "snd_ctl_elem_info_get_interface";
  const std::vector<const char*> args = {"obj"};
  using type = snd_ctl_elem_iface_t(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" snd_ctl_elem_iface_t snd_ctl_elem_info_get_interface(fns::snd_ctl_elem_info_get_interface_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_interface>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_device_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_device
{
  const char* name = "snd_ctl_elem_info_get_device";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" unsigned int snd_ctl_elem_info_get_device(fns::snd_ctl_elem_info_get_device_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_device>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_subdevice_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_subdevice
{
  const char* name = "snd_ctl_elem_info_get_subdevice";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" unsigned int snd_ctl_elem_info_get_subdevice(fns::snd_ctl_elem_info_get_subdevice_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_subdevice>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_name_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_name
{
  const char* name = "snd_ctl_elem_info_get_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" const char * snd_ctl_elem_info_get_name(fns::snd_ctl_elem_info_get_name_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_name>(obj);
}

namespace fns
{

using snd_ctl_elem_info_get_index_arg0_t = const snd_ctl_elem_info_t *;
struct snd_ctl_elem_info_get_index
{
  const char* name = "snd_ctl_elem_info_get_index";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_info_t *);
};

}

extern "C" unsigned int snd_ctl_elem_info_get_index(fns::snd_ctl_elem_info_get_index_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_info_get_index>(obj);
}

namespace fns
{

using snd_ctl_elem_info_set_id_arg0_t = snd_ctl_elem_info_t *;
using snd_ctl_elem_info_set_id_arg1_t = const snd_ctl_elem_id_t *;
struct snd_ctl_elem_info_set_id
{
  const char* name = "snd_ctl_elem_info_set_id";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(snd_ctl_elem_info_t *, const snd_ctl_elem_id_t *);
};

}

extern "C" void snd_ctl_elem_info_set_id(fns::snd_ctl_elem_info_set_id_arg0_t obj, fns::snd_ctl_elem_info_set_id_arg1_t ptr)
{
  return fns::call_void<fns::snd_ctl_elem_info_set_id>(obj, ptr);
}

namespace fns
{

using snd_ctl_elem_info_set_numid_arg0_t = snd_ctl_elem_info_t *;
using snd_ctl_elem_info_set_numid_arg1_t = unsigned int;
struct snd_ctl_elem_info_set_numid
{
  const char* name = "snd_ctl_elem_info_set_numid";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_info_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_info_set_numid(fns::snd_ctl_elem_info_set_numid_arg0_t obj, fns::snd_ctl_elem_info_set_numid_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_info_set_numid>(obj, val);
}

namespace fns
{

using snd_ctl_elem_info_set_interface_arg0_t = snd_ctl_elem_info_t *;
using snd_ctl_elem_info_set_interface_arg1_t = snd_ctl_elem_iface_t;
struct snd_ctl_elem_info_set_interface
{
  const char* name = "snd_ctl_elem_info_set_interface";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_info_t *, snd_ctl_elem_iface_t);
};

}

extern "C" void snd_ctl_elem_info_set_interface(fns::snd_ctl_elem_info_set_interface_arg0_t obj, fns::snd_ctl_elem_info_set_interface_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_info_set_interface>(obj, val);
}

namespace fns
{

using snd_ctl_elem_info_set_device_arg0_t = snd_ctl_elem_info_t *;
using snd_ctl_elem_info_set_device_arg1_t = unsigned int;
struct snd_ctl_elem_info_set_device
{
  const char* name = "snd_ctl_elem_info_set_device";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_info_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_info_set_device(fns::snd_ctl_elem_info_set_device_arg0_t obj, fns::snd_ctl_elem_info_set_device_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_info_set_device>(obj, val);
}

namespace fns
{

using snd_ctl_elem_info_set_subdevice_arg0_t = snd_ctl_elem_info_t *;
using snd_ctl_elem_info_set_subdevice_arg1_t = unsigned int;
struct snd_ctl_elem_info_set_subdevice
{
  const char* name = "snd_ctl_elem_info_set_subdevice";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_info_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_info_set_subdevice(fns::snd_ctl_elem_info_set_subdevice_arg0_t obj, fns::snd_ctl_elem_info_set_subdevice_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_info_set_subdevice>(obj, val);
}

namespace fns
{

using snd_ctl_elem_info_set_name_arg0_t = snd_ctl_elem_info_t *;
using snd_ctl_elem_info_set_name_arg1_t = const char *;
struct snd_ctl_elem_info_set_name
{
  const char* name = "snd_ctl_elem_info_set_name";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_info_t *, const char *);
};

}

extern "C" void snd_ctl_elem_info_set_name(fns::snd_ctl_elem_info_set_name_arg0_t obj, fns::snd_ctl_elem_info_set_name_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_info_set_name>(obj, val);
}

namespace fns
{

using snd_ctl_elem_info_set_index_arg0_t = snd_ctl_elem_info_t *;
using snd_ctl_elem_info_set_index_arg1_t = unsigned int;
struct snd_ctl_elem_info_set_index
{
  const char* name = "snd_ctl_elem_info_set_index";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_info_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_info_set_index(fns::snd_ctl_elem_info_set_index_arg0_t obj, fns::snd_ctl_elem_info_set_index_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_info_set_index>(obj, val);
}

namespace fns
{

using snd_ctl_elem_add_integer_arg0_t = snd_ctl_t *;
using snd_ctl_elem_add_integer_arg1_t = const snd_ctl_elem_id_t *;
using snd_ctl_elem_add_integer_arg2_t = unsigned int;
using snd_ctl_elem_add_integer_arg3_t = long;
using snd_ctl_elem_add_integer_arg4_t = long;
using snd_ctl_elem_add_integer_arg5_t = long;
struct snd_ctl_elem_add_integer
{
  const char* name = "snd_ctl_elem_add_integer";
  const std::vector<const char*> args = {"ctl", "id", "count", "imin", "imax", "istep"};
  using type = int(*)(snd_ctl_t *, const snd_ctl_elem_id_t *, unsigned int, long, long, long);
};

}

extern "C" int snd_ctl_elem_add_integer(fns::snd_ctl_elem_add_integer_arg0_t ctl, fns::snd_ctl_elem_add_integer_arg1_t id, fns::snd_ctl_elem_add_integer_arg2_t count, fns::snd_ctl_elem_add_integer_arg3_t imin, fns::snd_ctl_elem_add_integer_arg4_t imax, fns::snd_ctl_elem_add_integer_arg5_t istep)
{
  return fns::call<fns::snd_ctl_elem_add_integer>(ctl, id, count, imin, imax, istep);
}

namespace fns
{

using snd_ctl_elem_add_integer64_arg0_t = snd_ctl_t *;
using snd_ctl_elem_add_integer64_arg1_t = const snd_ctl_elem_id_t *;
using snd_ctl_elem_add_integer64_arg2_t = unsigned int;
using snd_ctl_elem_add_integer64_arg3_t = long long;
using snd_ctl_elem_add_integer64_arg4_t = long long;
using snd_ctl_elem_add_integer64_arg5_t = long long;
struct snd_ctl_elem_add_integer64
{
  const char* name = "snd_ctl_elem_add_integer64";
  const std::vector<const char*> args = {"ctl", "id", "count", "imin", "imax", "istep"};
  using type = int(*)(snd_ctl_t *, const snd_ctl_elem_id_t *, unsigned int, long long, long long, long long);
};

}

extern "C" int snd_ctl_elem_add_integer64(fns::snd_ctl_elem_add_integer64_arg0_t ctl, fns::snd_ctl_elem_add_integer64_arg1_t id, fns::snd_ctl_elem_add_integer64_arg2_t count, fns::snd_ctl_elem_add_integer64_arg3_t imin, fns::snd_ctl_elem_add_integer64_arg4_t imax, fns::snd_ctl_elem_add_integer64_arg5_t istep)
{
  return fns::call<fns::snd_ctl_elem_add_integer64>(ctl, id, count, imin, imax, istep);
}

namespace fns
{

using snd_ctl_elem_add_boolean_arg0_t = snd_ctl_t *;
using snd_ctl_elem_add_boolean_arg1_t = const snd_ctl_elem_id_t *;
using snd_ctl_elem_add_boolean_arg2_t = unsigned int;
struct snd_ctl_elem_add_boolean
{
  const char* name = "snd_ctl_elem_add_boolean";
  const std::vector<const char*> args = {"ctl", "id", "count"};
  using type = int(*)(snd_ctl_t *, const snd_ctl_elem_id_t *, unsigned int);
};

}

extern "C" int snd_ctl_elem_add_boolean(fns::snd_ctl_elem_add_boolean_arg0_t ctl, fns::snd_ctl_elem_add_boolean_arg1_t id, fns::snd_ctl_elem_add_boolean_arg2_t count)
{
  return fns::call<fns::snd_ctl_elem_add_boolean>(ctl, id, count);
}

namespace fns
{

using snd_ctl_elem_add_enumerated_arg0_t = snd_ctl_t *;
using snd_ctl_elem_add_enumerated_arg1_t = const snd_ctl_elem_id_t *;
using snd_ctl_elem_add_enumerated_arg2_t = unsigned int;
using snd_ctl_elem_add_enumerated_arg3_t = unsigned int;
using snd_ctl_elem_add_enumerated_arg4_t = const char *const [];
struct snd_ctl_elem_add_enumerated
{
  const char* name = "snd_ctl_elem_add_enumerated";
  const std::vector<const char*> args = {"ctl", "id", "count", "items", "names"};
  using type = int(*)(snd_ctl_t *, const snd_ctl_elem_id_t *, unsigned int, unsigned int, const char *const []);
};

}

extern "C" int snd_ctl_elem_add_enumerated(fns::snd_ctl_elem_add_enumerated_arg0_t ctl, fns::snd_ctl_elem_add_enumerated_arg1_t id, fns::snd_ctl_elem_add_enumerated_arg2_t count, fns::snd_ctl_elem_add_enumerated_arg3_t items, fns::snd_ctl_elem_add_enumerated_arg4_t names)
{
  return fns::call<fns::snd_ctl_elem_add_enumerated>(ctl, id, count, items, names);
}

namespace fns
{

using snd_ctl_elem_add_iec958_arg0_t = snd_ctl_t *;
using snd_ctl_elem_add_iec958_arg1_t = const snd_ctl_elem_id_t *;
struct snd_ctl_elem_add_iec958
{
  const char* name = "snd_ctl_elem_add_iec958";
  const std::vector<const char*> args = {"ctl", "id"};
  using type = int(*)(snd_ctl_t *, const snd_ctl_elem_id_t *);
};

}

extern "C" int snd_ctl_elem_add_iec958(fns::snd_ctl_elem_add_iec958_arg0_t ctl, fns::snd_ctl_elem_add_iec958_arg1_t id)
{
  return fns::call<fns::snd_ctl_elem_add_iec958>(ctl, id);
}

namespace fns
{

using snd_ctl_elem_remove_arg0_t = snd_ctl_t *;
using snd_ctl_elem_remove_arg1_t = snd_ctl_elem_id_t *;
struct snd_ctl_elem_remove
{
  const char* name = "snd_ctl_elem_remove";
  const std::vector<const char*> args = {"ctl", "id"};
  using type = int(*)(snd_ctl_t *, snd_ctl_elem_id_t *);
};

}

extern "C" int snd_ctl_elem_remove(fns::snd_ctl_elem_remove_arg0_t ctl, fns::snd_ctl_elem_remove_arg1_t id)
{
  return fns::call<fns::snd_ctl_elem_remove>(ctl, id);
}

namespace fns
{

struct snd_ctl_elem_value_sizeof
{
  const char* name = "snd_ctl_elem_value_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_ctl_elem_value_sizeof()
{
  return fns::call<fns::snd_ctl_elem_value_sizeof>();
}

namespace fns
{

using snd_ctl_elem_value_malloc_arg0_t = snd_ctl_elem_value_t **;
struct snd_ctl_elem_value_malloc
{
  const char* name = "snd_ctl_elem_value_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_ctl_elem_value_t **);
};

}

extern "C" int snd_ctl_elem_value_malloc(fns::snd_ctl_elem_value_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_ctl_elem_value_malloc>(ptr);
}

namespace fns
{

using snd_ctl_elem_value_free_arg0_t = snd_ctl_elem_value_t *;
struct snd_ctl_elem_value_free
{
  const char* name = "snd_ctl_elem_value_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_elem_value_t *);
};

}

extern "C" void snd_ctl_elem_value_free(fns::snd_ctl_elem_value_free_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_elem_value_free>(obj);
}

namespace fns
{

using snd_ctl_elem_value_clear_arg0_t = snd_ctl_elem_value_t *;
struct snd_ctl_elem_value_clear
{
  const char* name = "snd_ctl_elem_value_clear";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_ctl_elem_value_t *);
};

}

extern "C" void snd_ctl_elem_value_clear(fns::snd_ctl_elem_value_clear_arg0_t obj)
{
  return fns::call_void<fns::snd_ctl_elem_value_clear>(obj);
}

namespace fns
{

using snd_ctl_elem_value_copy_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_copy_arg1_t = const snd_ctl_elem_value_t *;
struct snd_ctl_elem_value_copy
{
  const char* name = "snd_ctl_elem_value_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_ctl_elem_value_t *, const snd_ctl_elem_value_t *);
};

}

extern "C" void snd_ctl_elem_value_copy(fns::snd_ctl_elem_value_copy_arg0_t dst, fns::snd_ctl_elem_value_copy_arg1_t src)
{
  return fns::call_void<fns::snd_ctl_elem_value_copy>(dst, src);
}

namespace fns
{

using snd_ctl_elem_value_compare_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_compare_arg1_t = const snd_ctl_elem_value_t *;
struct snd_ctl_elem_value_compare
{
  const char* name = "snd_ctl_elem_value_compare";
  const std::vector<const char*> args = {"left", "right"};
  using type = int(*)(snd_ctl_elem_value_t *, const snd_ctl_elem_value_t *);
};

}

extern "C" int snd_ctl_elem_value_compare(fns::snd_ctl_elem_value_compare_arg0_t left, fns::snd_ctl_elem_value_compare_arg1_t right)
{
  return fns::call<fns::snd_ctl_elem_value_compare>(left, right);
}

namespace fns
{

using snd_ctl_elem_value_get_id_arg0_t = const snd_ctl_elem_value_t *;
using snd_ctl_elem_value_get_id_arg1_t = snd_ctl_elem_id_t *;
struct snd_ctl_elem_value_get_id
{
  const char* name = "snd_ctl_elem_value_get_id";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(const snd_ctl_elem_value_t *, snd_ctl_elem_id_t *);
};

}

extern "C" void snd_ctl_elem_value_get_id(fns::snd_ctl_elem_value_get_id_arg0_t obj, fns::snd_ctl_elem_value_get_id_arg1_t ptr)
{
  return fns::call_void<fns::snd_ctl_elem_value_get_id>(obj, ptr);
}

namespace fns
{

using snd_ctl_elem_value_get_numid_arg0_t = const snd_ctl_elem_value_t *;
struct snd_ctl_elem_value_get_numid
{
  const char* name = "snd_ctl_elem_value_get_numid";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_value_t *);
};

}

extern "C" unsigned int snd_ctl_elem_value_get_numid(fns::snd_ctl_elem_value_get_numid_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_value_get_numid>(obj);
}

namespace fns
{

using snd_ctl_elem_value_get_interface_arg0_t = const snd_ctl_elem_value_t *;
struct snd_ctl_elem_value_get_interface
{
  const char* name = "snd_ctl_elem_value_get_interface";
  const std::vector<const char*> args = {"obj"};
  using type = snd_ctl_elem_iface_t(*)(const snd_ctl_elem_value_t *);
};

}

extern "C" snd_ctl_elem_iface_t snd_ctl_elem_value_get_interface(fns::snd_ctl_elem_value_get_interface_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_value_get_interface>(obj);
}

namespace fns
{

using snd_ctl_elem_value_get_device_arg0_t = const snd_ctl_elem_value_t *;
struct snd_ctl_elem_value_get_device
{
  const char* name = "snd_ctl_elem_value_get_device";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_value_t *);
};

}

extern "C" unsigned int snd_ctl_elem_value_get_device(fns::snd_ctl_elem_value_get_device_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_value_get_device>(obj);
}

namespace fns
{

using snd_ctl_elem_value_get_subdevice_arg0_t = const snd_ctl_elem_value_t *;
struct snd_ctl_elem_value_get_subdevice
{
  const char* name = "snd_ctl_elem_value_get_subdevice";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_value_t *);
};

}

extern "C" unsigned int snd_ctl_elem_value_get_subdevice(fns::snd_ctl_elem_value_get_subdevice_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_value_get_subdevice>(obj);
}

namespace fns
{

using snd_ctl_elem_value_get_name_arg0_t = const snd_ctl_elem_value_t *;
struct snd_ctl_elem_value_get_name
{
  const char* name = "snd_ctl_elem_value_get_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_ctl_elem_value_t *);
};

}

extern "C" const char * snd_ctl_elem_value_get_name(fns::snd_ctl_elem_value_get_name_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_value_get_name>(obj);
}

namespace fns
{

using snd_ctl_elem_value_get_index_arg0_t = const snd_ctl_elem_value_t *;
struct snd_ctl_elem_value_get_index
{
  const char* name = "snd_ctl_elem_value_get_index";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_ctl_elem_value_t *);
};

}

extern "C" unsigned int snd_ctl_elem_value_get_index(fns::snd_ctl_elem_value_get_index_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_value_get_index>(obj);
}

namespace fns
{

using snd_ctl_elem_value_set_id_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_id_arg1_t = const snd_ctl_elem_id_t *;
struct snd_ctl_elem_value_set_id
{
  const char* name = "snd_ctl_elem_value_set_id";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(snd_ctl_elem_value_t *, const snd_ctl_elem_id_t *);
};

}

extern "C" void snd_ctl_elem_value_set_id(fns::snd_ctl_elem_value_set_id_arg0_t obj, fns::snd_ctl_elem_value_set_id_arg1_t ptr)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_id>(obj, ptr);
}

namespace fns
{

using snd_ctl_elem_value_set_numid_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_numid_arg1_t = unsigned int;
struct snd_ctl_elem_value_set_numid
{
  const char* name = "snd_ctl_elem_value_set_numid";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_value_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_value_set_numid(fns::snd_ctl_elem_value_set_numid_arg0_t obj, fns::snd_ctl_elem_value_set_numid_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_numid>(obj, val);
}

namespace fns
{

using snd_ctl_elem_value_set_interface_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_interface_arg1_t = snd_ctl_elem_iface_t;
struct snd_ctl_elem_value_set_interface
{
  const char* name = "snd_ctl_elem_value_set_interface";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_value_t *, snd_ctl_elem_iface_t);
};

}

extern "C" void snd_ctl_elem_value_set_interface(fns::snd_ctl_elem_value_set_interface_arg0_t obj, fns::snd_ctl_elem_value_set_interface_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_interface>(obj, val);
}

namespace fns
{

using snd_ctl_elem_value_set_device_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_device_arg1_t = unsigned int;
struct snd_ctl_elem_value_set_device
{
  const char* name = "snd_ctl_elem_value_set_device";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_value_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_value_set_device(fns::snd_ctl_elem_value_set_device_arg0_t obj, fns::snd_ctl_elem_value_set_device_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_device>(obj, val);
}

namespace fns
{

using snd_ctl_elem_value_set_subdevice_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_subdevice_arg1_t = unsigned int;
struct snd_ctl_elem_value_set_subdevice
{
  const char* name = "snd_ctl_elem_value_set_subdevice";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_value_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_value_set_subdevice(fns::snd_ctl_elem_value_set_subdevice_arg0_t obj, fns::snd_ctl_elem_value_set_subdevice_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_subdevice>(obj, val);
}

namespace fns
{

using snd_ctl_elem_value_set_name_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_name_arg1_t = const char *;
struct snd_ctl_elem_value_set_name
{
  const char* name = "snd_ctl_elem_value_set_name";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_value_t *, const char *);
};

}

extern "C" void snd_ctl_elem_value_set_name(fns::snd_ctl_elem_value_set_name_arg0_t obj, fns::snd_ctl_elem_value_set_name_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_name>(obj, val);
}

namespace fns
{

using snd_ctl_elem_value_set_index_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_index_arg1_t = unsigned int;
struct snd_ctl_elem_value_set_index
{
  const char* name = "snd_ctl_elem_value_set_index";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_ctl_elem_value_t *, unsigned int);
};

}

extern "C" void snd_ctl_elem_value_set_index(fns::snd_ctl_elem_value_set_index_arg0_t obj, fns::snd_ctl_elem_value_set_index_arg1_t val)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_index>(obj, val);
}

namespace fns
{

using snd_ctl_elem_value_get_boolean_arg0_t = const snd_ctl_elem_value_t *;
using snd_ctl_elem_value_get_boolean_arg1_t = unsigned int;
struct snd_ctl_elem_value_get_boolean
{
  const char* name = "snd_ctl_elem_value_get_boolean";
  const std::vector<const char*> args = {"obj", "idx"};
  using type = int(*)(const snd_ctl_elem_value_t *, unsigned int);
};

}

extern "C" int snd_ctl_elem_value_get_boolean(fns::snd_ctl_elem_value_get_boolean_arg0_t obj, fns::snd_ctl_elem_value_get_boolean_arg1_t idx)
{
  return fns::call<fns::snd_ctl_elem_value_get_boolean>(obj, idx);
}

namespace fns
{

using snd_ctl_elem_value_get_integer_arg0_t = const snd_ctl_elem_value_t *;
using snd_ctl_elem_value_get_integer_arg1_t = unsigned int;
struct snd_ctl_elem_value_get_integer
{
  const char* name = "snd_ctl_elem_value_get_integer";
  const std::vector<const char*> args = {"obj", "idx"};
  using type = long(*)(const snd_ctl_elem_value_t *, unsigned int);
};

}

extern "C" long snd_ctl_elem_value_get_integer(fns::snd_ctl_elem_value_get_integer_arg0_t obj, fns::snd_ctl_elem_value_get_integer_arg1_t idx)
{
  return fns::call<fns::snd_ctl_elem_value_get_integer>(obj, idx);
}

namespace fns
{

using snd_ctl_elem_value_get_integer64_arg0_t = const snd_ctl_elem_value_t *;
using snd_ctl_elem_value_get_integer64_arg1_t = unsigned int;
struct snd_ctl_elem_value_get_integer64
{
  const char* name = "snd_ctl_elem_value_get_integer64";
  const std::vector<const char*> args = {"obj", "idx"};
  using type = long long(*)(const snd_ctl_elem_value_t *, unsigned int);
};

}

extern "C" long long snd_ctl_elem_value_get_integer64(fns::snd_ctl_elem_value_get_integer64_arg0_t obj, fns::snd_ctl_elem_value_get_integer64_arg1_t idx)
{
  return fns::call<fns::snd_ctl_elem_value_get_integer64>(obj, idx);
}

namespace fns
{

using snd_ctl_elem_value_get_enumerated_arg0_t = const snd_ctl_elem_value_t *;
using snd_ctl_elem_value_get_enumerated_arg1_t = unsigned int;
struct snd_ctl_elem_value_get_enumerated
{
  const char* name = "snd_ctl_elem_value_get_enumerated";
  const std::vector<const char*> args = {"obj", "idx"};
  using type = unsigned int(*)(const snd_ctl_elem_value_t *, unsigned int);
};

}

extern "C" unsigned int snd_ctl_elem_value_get_enumerated(fns::snd_ctl_elem_value_get_enumerated_arg0_t obj, fns::snd_ctl_elem_value_get_enumerated_arg1_t idx)
{
  return fns::call<fns::snd_ctl_elem_value_get_enumerated>(obj, idx);
}

namespace fns
{

using snd_ctl_elem_value_get_byte_arg0_t = const snd_ctl_elem_value_t *;
using snd_ctl_elem_value_get_byte_arg1_t = unsigned int;
struct snd_ctl_elem_value_get_byte
{
  const char* name = "snd_ctl_elem_value_get_byte";
  const std::vector<const char*> args = {"obj", "idx"};
  using type = unsigned char(*)(const snd_ctl_elem_value_t *, unsigned int);
};

}

extern "C" unsigned char snd_ctl_elem_value_get_byte(fns::snd_ctl_elem_value_get_byte_arg0_t obj, fns::snd_ctl_elem_value_get_byte_arg1_t idx)
{
  return fns::call<fns::snd_ctl_elem_value_get_byte>(obj, idx);
}

namespace fns
{

using snd_ctl_elem_value_set_boolean_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_boolean_arg1_t = unsigned int;
using snd_ctl_elem_value_set_boolean_arg2_t = long;
struct snd_ctl_elem_value_set_boolean
{
  const char* name = "snd_ctl_elem_value_set_boolean";
  const std::vector<const char*> args = {"obj", "idx", "val"};
  using type = void(*)(snd_ctl_elem_value_t *, unsigned int, long);
};

}

extern "C" void snd_ctl_elem_value_set_boolean(fns::snd_ctl_elem_value_set_boolean_arg0_t obj, fns::snd_ctl_elem_value_set_boolean_arg1_t idx, fns::snd_ctl_elem_value_set_boolean_arg2_t val)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_boolean>(obj, idx, val);
}

namespace fns
{

using snd_ctl_elem_value_set_integer_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_integer_arg1_t = unsigned int;
using snd_ctl_elem_value_set_integer_arg2_t = long;
struct snd_ctl_elem_value_set_integer
{
  const char* name = "snd_ctl_elem_value_set_integer";
  const std::vector<const char*> args = {"obj", "idx", "val"};
  using type = void(*)(snd_ctl_elem_value_t *, unsigned int, long);
};

}

extern "C" void snd_ctl_elem_value_set_integer(fns::snd_ctl_elem_value_set_integer_arg0_t obj, fns::snd_ctl_elem_value_set_integer_arg1_t idx, fns::snd_ctl_elem_value_set_integer_arg2_t val)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_integer>(obj, idx, val);
}

namespace fns
{

using snd_ctl_elem_value_set_integer64_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_integer64_arg1_t = unsigned int;
using snd_ctl_elem_value_set_integer64_arg2_t = long long;
struct snd_ctl_elem_value_set_integer64
{
  const char* name = "snd_ctl_elem_value_set_integer64";
  const std::vector<const char*> args = {"obj", "idx", "val"};
  using type = void(*)(snd_ctl_elem_value_t *, unsigned int, long long);
};

}

extern "C" void snd_ctl_elem_value_set_integer64(fns::snd_ctl_elem_value_set_integer64_arg0_t obj, fns::snd_ctl_elem_value_set_integer64_arg1_t idx, fns::snd_ctl_elem_value_set_integer64_arg2_t val)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_integer64>(obj, idx, val);
}

namespace fns
{

using snd_ctl_elem_value_set_enumerated_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_enumerated_arg1_t = unsigned int;
using snd_ctl_elem_value_set_enumerated_arg2_t = unsigned int;
struct snd_ctl_elem_value_set_enumerated
{
  const char* name = "snd_ctl_elem_value_set_enumerated";
  const std::vector<const char*> args = {"obj", "idx", "val"};
  using type = void(*)(snd_ctl_elem_value_t *, unsigned int, unsigned int);
};

}

extern "C" void snd_ctl_elem_value_set_enumerated(fns::snd_ctl_elem_value_set_enumerated_arg0_t obj, fns::snd_ctl_elem_value_set_enumerated_arg1_t idx, fns::snd_ctl_elem_value_set_enumerated_arg2_t val)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_enumerated>(obj, idx, val);
}

namespace fns
{

using snd_ctl_elem_value_set_byte_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_byte_arg1_t = unsigned int;
using snd_ctl_elem_value_set_byte_arg2_t = unsigned char;
struct snd_ctl_elem_value_set_byte
{
  const char* name = "snd_ctl_elem_value_set_byte";
  const std::vector<const char*> args = {"obj", "idx", "val"};
  using type = void(*)(snd_ctl_elem_value_t *, unsigned int, unsigned char);
};

}

extern "C" void snd_ctl_elem_value_set_byte(fns::snd_ctl_elem_value_set_byte_arg0_t obj, fns::snd_ctl_elem_value_set_byte_arg1_t idx, fns::snd_ctl_elem_value_set_byte_arg2_t val)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_byte>(obj, idx, val);
}

namespace fns
{

using snd_ctl_elem_set_bytes_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_set_bytes_arg1_t = void *;
using snd_ctl_elem_set_bytes_arg2_t = size_t;
struct snd_ctl_elem_set_bytes
{
  const char* name = "snd_ctl_elem_set_bytes";
  const std::vector<const char*> args = {"obj", "data", "size"};
  using type = void(*)(snd_ctl_elem_value_t *, void *, size_t);
};

}

extern "C" void snd_ctl_elem_set_bytes(fns::snd_ctl_elem_set_bytes_arg0_t obj, fns::snd_ctl_elem_set_bytes_arg1_t data, fns::snd_ctl_elem_set_bytes_arg2_t size)
{
  return fns::call_void<fns::snd_ctl_elem_set_bytes>(obj, data, size);
}

namespace fns
{

using snd_ctl_elem_value_get_bytes_arg0_t = const snd_ctl_elem_value_t *;
struct snd_ctl_elem_value_get_bytes
{
  const char* name = "snd_ctl_elem_value_get_bytes";
  const std::vector<const char*> args = {"obj"};
  using type = const void *(*)(const snd_ctl_elem_value_t *);
};

}

extern "C" const void * snd_ctl_elem_value_get_bytes(fns::snd_ctl_elem_value_get_bytes_arg0_t obj)
{
  return fns::call<fns::snd_ctl_elem_value_get_bytes>(obj);
}

namespace fns
{

using snd_ctl_elem_value_get_iec958_arg0_t = const snd_ctl_elem_value_t *;
using snd_ctl_elem_value_get_iec958_arg1_t = snd_aes_iec958_t *;
struct snd_ctl_elem_value_get_iec958
{
  const char* name = "snd_ctl_elem_value_get_iec958";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(const snd_ctl_elem_value_t *, snd_aes_iec958_t *);
};

}

extern "C" void snd_ctl_elem_value_get_iec958(fns::snd_ctl_elem_value_get_iec958_arg0_t obj, fns::snd_ctl_elem_value_get_iec958_arg1_t ptr)
{
  return fns::call_void<fns::snd_ctl_elem_value_get_iec958>(obj, ptr);
}

namespace fns
{

using snd_ctl_elem_value_set_iec958_arg0_t = snd_ctl_elem_value_t *;
using snd_ctl_elem_value_set_iec958_arg1_t = const snd_aes_iec958_t *;
struct snd_ctl_elem_value_set_iec958
{
  const char* name = "snd_ctl_elem_value_set_iec958";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(snd_ctl_elem_value_t *, const snd_aes_iec958_t *);
};

}

extern "C" void snd_ctl_elem_value_set_iec958(fns::snd_ctl_elem_value_set_iec958_arg0_t obj, fns::snd_ctl_elem_value_set_iec958_arg1_t ptr)
{
  return fns::call_void<fns::snd_ctl_elem_value_set_iec958>(obj, ptr);
}

namespace fns
{

using snd_tlv_parse_dB_info_arg0_t = unsigned int *;
using snd_tlv_parse_dB_info_arg1_t = unsigned int;
using snd_tlv_parse_dB_info_arg2_t = unsigned int **;
struct snd_tlv_parse_dB_info
{
  const char* name = "snd_tlv_parse_dB_info";
  const std::vector<const char*> args = {"tlv", "tlv_size", "db_tlvp"};
  using type = int(*)(unsigned int *, unsigned int, unsigned int **);
};

}

extern "C" int snd_tlv_parse_dB_info(fns::snd_tlv_parse_dB_info_arg0_t tlv, fns::snd_tlv_parse_dB_info_arg1_t tlv_size, fns::snd_tlv_parse_dB_info_arg2_t db_tlvp)
{
  return fns::call<fns::snd_tlv_parse_dB_info>(tlv, tlv_size, db_tlvp);
}

namespace fns
{

using snd_tlv_get_dB_range_arg0_t = unsigned int *;
using snd_tlv_get_dB_range_arg1_t = long;
using snd_tlv_get_dB_range_arg2_t = long;
using snd_tlv_get_dB_range_arg3_t = long *;
using snd_tlv_get_dB_range_arg4_t = long *;
struct snd_tlv_get_dB_range
{
  const char* name = "snd_tlv_get_dB_range";
  const std::vector<const char*> args = {"tlv", "rangemin", "rangemax", "min", "max"};
  using type = int(*)(unsigned int *, long, long, long *, long *);
};

}

extern "C" int snd_tlv_get_dB_range(fns::snd_tlv_get_dB_range_arg0_t tlv, fns::snd_tlv_get_dB_range_arg1_t rangemin, fns::snd_tlv_get_dB_range_arg2_t rangemax, fns::snd_tlv_get_dB_range_arg3_t min, fns::snd_tlv_get_dB_range_arg4_t max)
{
  return fns::call<fns::snd_tlv_get_dB_range>(tlv, rangemin, rangemax, min, max);
}

namespace fns
{

using snd_tlv_convert_to_dB_arg0_t = unsigned int *;
using snd_tlv_convert_to_dB_arg1_t = long;
using snd_tlv_convert_to_dB_arg2_t = long;
using snd_tlv_convert_to_dB_arg3_t = long;
using snd_tlv_convert_to_dB_arg4_t = long *;
struct snd_tlv_convert_to_dB
{
  const char* name = "snd_tlv_convert_to_dB";
  const std::vector<const char*> args = {"tlv", "rangemin", "rangemax", "volume", "db_gain"};
  using type = int(*)(unsigned int *, long, long, long, long *);
};

}

extern "C" int snd_tlv_convert_to_dB(fns::snd_tlv_convert_to_dB_arg0_t tlv, fns::snd_tlv_convert_to_dB_arg1_t rangemin, fns::snd_tlv_convert_to_dB_arg2_t rangemax, fns::snd_tlv_convert_to_dB_arg3_t volume, fns::snd_tlv_convert_to_dB_arg4_t db_gain)
{
  return fns::call<fns::snd_tlv_convert_to_dB>(tlv, rangemin, rangemax, volume, db_gain);
}

namespace fns
{

using snd_tlv_convert_from_dB_arg0_t = unsigned int *;
using snd_tlv_convert_from_dB_arg1_t = long;
using snd_tlv_convert_from_dB_arg2_t = long;
using snd_tlv_convert_from_dB_arg3_t = long;
using snd_tlv_convert_from_dB_arg4_t = long *;
using snd_tlv_convert_from_dB_arg5_t = int;
struct snd_tlv_convert_from_dB
{
  const char* name = "snd_tlv_convert_from_dB";
  const std::vector<const char*> args = {"tlv", "rangemin", "rangemax", "db_gain", "value", "xdir"};
  using type = int(*)(unsigned int *, long, long, long, long *, int);
};

}

extern "C" int snd_tlv_convert_from_dB(fns::snd_tlv_convert_from_dB_arg0_t tlv, fns::snd_tlv_convert_from_dB_arg1_t rangemin, fns::snd_tlv_convert_from_dB_arg2_t rangemax, fns::snd_tlv_convert_from_dB_arg3_t db_gain, fns::snd_tlv_convert_from_dB_arg4_t value, fns::snd_tlv_convert_from_dB_arg5_t xdir)
{
  return fns::call<fns::snd_tlv_convert_from_dB>(tlv, rangemin, rangemax, db_gain, value, xdir);
}

namespace fns
{

using snd_ctl_get_dB_range_arg0_t = snd_ctl_t *;
using snd_ctl_get_dB_range_arg1_t = const snd_ctl_elem_id_t *;
using snd_ctl_get_dB_range_arg2_t = long *;
using snd_ctl_get_dB_range_arg3_t = long *;
struct snd_ctl_get_dB_range
{
  const char* name = "snd_ctl_get_dB_range";
  const std::vector<const char*> args = {"ctl", "id", "min", "max"};
  using type = int(*)(snd_ctl_t *, const snd_ctl_elem_id_t *, long *, long *);
};

}

extern "C" int snd_ctl_get_dB_range(fns::snd_ctl_get_dB_range_arg0_t ctl, fns::snd_ctl_get_dB_range_arg1_t id, fns::snd_ctl_get_dB_range_arg2_t min, fns::snd_ctl_get_dB_range_arg3_t max)
{
  return fns::call<fns::snd_ctl_get_dB_range>(ctl, id, min, max);
}

namespace fns
{

using snd_ctl_convert_to_dB_arg0_t = snd_ctl_t *;
using snd_ctl_convert_to_dB_arg1_t = const snd_ctl_elem_id_t *;
using snd_ctl_convert_to_dB_arg2_t = long;
using snd_ctl_convert_to_dB_arg3_t = long *;
struct snd_ctl_convert_to_dB
{
  const char* name = "snd_ctl_convert_to_dB";
  const std::vector<const char*> args = {"ctl", "id", "volume", "db_gain"};
  using type = int(*)(snd_ctl_t *, const snd_ctl_elem_id_t *, long, long *);
};

}

extern "C" int snd_ctl_convert_to_dB(fns::snd_ctl_convert_to_dB_arg0_t ctl, fns::snd_ctl_convert_to_dB_arg1_t id, fns::snd_ctl_convert_to_dB_arg2_t volume, fns::snd_ctl_convert_to_dB_arg3_t db_gain)
{
  return fns::call<fns::snd_ctl_convert_to_dB>(ctl, id, volume, db_gain);
}

namespace fns
{

using snd_ctl_convert_from_dB_arg0_t = snd_ctl_t *;
using snd_ctl_convert_from_dB_arg1_t = const snd_ctl_elem_id_t *;
using snd_ctl_convert_from_dB_arg2_t = long;
using snd_ctl_convert_from_dB_arg3_t = long *;
using snd_ctl_convert_from_dB_arg4_t = int;
struct snd_ctl_convert_from_dB
{
  const char* name = "snd_ctl_convert_from_dB";
  const std::vector<const char*> args = {"ctl", "id", "db_gain", "value", "xdir"};
  using type = int(*)(snd_ctl_t *, const snd_ctl_elem_id_t *, long, long *, int);
};

}

extern "C" int snd_ctl_convert_from_dB(fns::snd_ctl_convert_from_dB_arg0_t ctl, fns::snd_ctl_convert_from_dB_arg1_t id, fns::snd_ctl_convert_from_dB_arg2_t db_gain, fns::snd_ctl_convert_from_dB_arg3_t value, fns::snd_ctl_convert_from_dB_arg4_t xdir)
{
  return fns::call<fns::snd_ctl_convert_from_dB>(ctl, id, db_gain, value, xdir);
}

namespace fns
{

using snd_hctl_compare_fast_arg0_t = const snd_hctl_elem_t *;
using snd_hctl_compare_fast_arg1_t = const snd_hctl_elem_t *;
struct snd_hctl_compare_fast
{
  const char* name = "snd_hctl_compare_fast";
  const std::vector<const char*> args = {"c1", "c2"};
  using type = int(*)(const snd_hctl_elem_t *, const snd_hctl_elem_t *);
};

}

extern "C" int snd_hctl_compare_fast(fns::snd_hctl_compare_fast_arg0_t c1, fns::snd_hctl_compare_fast_arg1_t c2)
{
  return fns::call<fns::snd_hctl_compare_fast>(c1, c2);
}

namespace fns
{

using snd_hctl_open_arg0_t = snd_hctl_t **;
using snd_hctl_open_arg1_t = const char *;
using snd_hctl_open_arg2_t = int;
struct snd_hctl_open
{
  const char* name = "snd_hctl_open";
  const std::vector<const char*> args = {"hctl", "name", "mode"};
  using type = int(*)(snd_hctl_t **, const char *, int);
};

}

extern "C" int snd_hctl_open(fns::snd_hctl_open_arg0_t hctl, fns::snd_hctl_open_arg1_t name, fns::snd_hctl_open_arg2_t mode)
{
  return fns::call<fns::snd_hctl_open>(hctl, name, mode);
}

namespace fns
{

using snd_hctl_open_ctl_arg0_t = snd_hctl_t **;
using snd_hctl_open_ctl_arg1_t = snd_ctl_t *;
struct snd_hctl_open_ctl
{
  const char* name = "snd_hctl_open_ctl";
  const std::vector<const char*> args = {"hctlp", "ctl"};
  using type = int(*)(snd_hctl_t **, snd_ctl_t *);
};

}

extern "C" int snd_hctl_open_ctl(fns::snd_hctl_open_ctl_arg0_t hctlp, fns::snd_hctl_open_ctl_arg1_t ctl)
{
  return fns::call<fns::snd_hctl_open_ctl>(hctlp, ctl);
}

namespace fns
{

using snd_hctl_close_arg0_t = snd_hctl_t *;
struct snd_hctl_close
{
  const char* name = "snd_hctl_close";
  const std::vector<const char*> args = {"hctl"};
  using type = int(*)(snd_hctl_t *);
};

}

extern "C" int snd_hctl_close(fns::snd_hctl_close_arg0_t hctl)
{
  return fns::call<fns::snd_hctl_close>(hctl);
}

namespace fns
{

using snd_hctl_nonblock_arg0_t = snd_hctl_t *;
using snd_hctl_nonblock_arg1_t = int;
struct snd_hctl_nonblock
{
  const char* name = "snd_hctl_nonblock";
  const std::vector<const char*> args = {"hctl", "nonblock"};
  using type = int(*)(snd_hctl_t *, int);
};

}

extern "C" int snd_hctl_nonblock(fns::snd_hctl_nonblock_arg0_t hctl, fns::snd_hctl_nonblock_arg1_t nonblock)
{
  return fns::call<fns::snd_hctl_nonblock>(hctl, nonblock);
}

// Skipping snd_hctl_abort because it is defined

namespace fns
{

using snd_hctl_poll_descriptors_count_arg0_t = snd_hctl_t *;
struct snd_hctl_poll_descriptors_count
{
  const char* name = "snd_hctl_poll_descriptors_count";
  const std::vector<const char*> args = {"hctl"};
  using type = int(*)(snd_hctl_t *);
};

}

extern "C" int snd_hctl_poll_descriptors_count(fns::snd_hctl_poll_descriptors_count_arg0_t hctl)
{
  return fns::call<fns::snd_hctl_poll_descriptors_count>(hctl);
}

namespace fns
{

using snd_hctl_poll_descriptors_arg0_t = snd_hctl_t *;
using snd_hctl_poll_descriptors_arg1_t = struct pollfd *;
using snd_hctl_poll_descriptors_arg2_t = unsigned int;
struct snd_hctl_poll_descriptors
{
  const char* name = "snd_hctl_poll_descriptors";
  const std::vector<const char*> args = {"hctl", "pfds", "space"};
  using type = int(*)(snd_hctl_t *, struct pollfd *, unsigned int);
};

}

extern "C" int snd_hctl_poll_descriptors(fns::snd_hctl_poll_descriptors_arg0_t hctl, fns::snd_hctl_poll_descriptors_arg1_t pfds, fns::snd_hctl_poll_descriptors_arg2_t space)
{
  return fns::call<fns::snd_hctl_poll_descriptors>(hctl, pfds, space);
}

namespace fns
{

using snd_hctl_poll_descriptors_revents_arg0_t = snd_hctl_t *;
using snd_hctl_poll_descriptors_revents_arg1_t = struct pollfd *;
using snd_hctl_poll_descriptors_revents_arg2_t = unsigned int;
using snd_hctl_poll_descriptors_revents_arg3_t = unsigned short *;
struct snd_hctl_poll_descriptors_revents
{
  const char* name = "snd_hctl_poll_descriptors_revents";
  const std::vector<const char*> args = {"ctl", "pfds", "nfds", "revents"};
  using type = int(*)(snd_hctl_t *, struct pollfd *, unsigned int, unsigned short *);
};

}

extern "C" int snd_hctl_poll_descriptors_revents(fns::snd_hctl_poll_descriptors_revents_arg0_t ctl, fns::snd_hctl_poll_descriptors_revents_arg1_t pfds, fns::snd_hctl_poll_descriptors_revents_arg2_t nfds, fns::snd_hctl_poll_descriptors_revents_arg3_t revents)
{
  return fns::call<fns::snd_hctl_poll_descriptors_revents>(ctl, pfds, nfds, revents);
}

namespace fns
{

using snd_hctl_get_count_arg0_t = snd_hctl_t *;
struct snd_hctl_get_count
{
  const char* name = "snd_hctl_get_count";
  const std::vector<const char*> args = {"hctl"};
  using type = unsigned int(*)(snd_hctl_t *);
};

}

extern "C" unsigned int snd_hctl_get_count(fns::snd_hctl_get_count_arg0_t hctl)
{
  return fns::call<fns::snd_hctl_get_count>(hctl);
}

namespace fns
{

using snd_hctl_set_compare_arg0_t = snd_hctl_t *;
using snd_hctl_set_compare_arg1_t = snd_hctl_compare_t;
struct snd_hctl_set_compare
{
  const char* name = "snd_hctl_set_compare";
  const std::vector<const char*> args = {"hctl", "hsort"};
  using type = int(*)(snd_hctl_t *, snd_hctl_compare_t);
};

}

extern "C" int snd_hctl_set_compare(fns::snd_hctl_set_compare_arg0_t hctl, fns::snd_hctl_set_compare_arg1_t hsort)
{
  return fns::call<fns::snd_hctl_set_compare>(hctl, hsort);
}

namespace fns
{

using snd_hctl_first_elem_arg0_t = snd_hctl_t *;
struct snd_hctl_first_elem
{
  const char* name = "snd_hctl_first_elem";
  const std::vector<const char*> args = {"hctl"};
  using type = snd_hctl_elem_t *(*)(snd_hctl_t *);
};

}

extern "C" snd_hctl_elem_t * snd_hctl_first_elem(fns::snd_hctl_first_elem_arg0_t hctl)
{
  return fns::call<fns::snd_hctl_first_elem>(hctl);
}

namespace fns
{

using snd_hctl_last_elem_arg0_t = snd_hctl_t *;
struct snd_hctl_last_elem
{
  const char* name = "snd_hctl_last_elem";
  const std::vector<const char*> args = {"hctl"};
  using type = snd_hctl_elem_t *(*)(snd_hctl_t *);
};

}

extern "C" snd_hctl_elem_t * snd_hctl_last_elem(fns::snd_hctl_last_elem_arg0_t hctl)
{
  return fns::call<fns::snd_hctl_last_elem>(hctl);
}

namespace fns
{

using snd_hctl_find_elem_arg0_t = snd_hctl_t *;
using snd_hctl_find_elem_arg1_t = const snd_ctl_elem_id_t *;
struct snd_hctl_find_elem
{
  const char* name = "snd_hctl_find_elem";
  const std::vector<const char*> args = {"hctl", "id"};
  using type = snd_hctl_elem_t *(*)(snd_hctl_t *, const snd_ctl_elem_id_t *);
};

}

extern "C" snd_hctl_elem_t * snd_hctl_find_elem(fns::snd_hctl_find_elem_arg0_t hctl, fns::snd_hctl_find_elem_arg1_t id)
{
  return fns::call<fns::snd_hctl_find_elem>(hctl, id);
}

namespace fns
{

using snd_hctl_set_callback_arg0_t = snd_hctl_t *;
using snd_hctl_set_callback_arg1_t = snd_hctl_callback_t;
struct snd_hctl_set_callback
{
  const char* name = "snd_hctl_set_callback";
  const std::vector<const char*> args = {"hctl", "callback"};
  using type = void(*)(snd_hctl_t *, snd_hctl_callback_t);
};

}

extern "C" void snd_hctl_set_callback(fns::snd_hctl_set_callback_arg0_t hctl, fns::snd_hctl_set_callback_arg1_t callback)
{
  return fns::call_void<fns::snd_hctl_set_callback>(hctl, callback);
}

namespace fns
{

using snd_hctl_set_callback_private_arg0_t = snd_hctl_t *;
using snd_hctl_set_callback_private_arg1_t = void *;
struct snd_hctl_set_callback_private
{
  const char* name = "snd_hctl_set_callback_private";
  const std::vector<const char*> args = {"hctl", "data"};
  using type = void(*)(snd_hctl_t *, void *);
};

}

extern "C" void snd_hctl_set_callback_private(fns::snd_hctl_set_callback_private_arg0_t hctl, fns::snd_hctl_set_callback_private_arg1_t data)
{
  return fns::call_void<fns::snd_hctl_set_callback_private>(hctl, data);
}

namespace fns
{

using snd_hctl_get_callback_private_arg0_t = snd_hctl_t *;
struct snd_hctl_get_callback_private
{
  const char* name = "snd_hctl_get_callback_private";
  const std::vector<const char*> args = {"hctl"};
  using type = void *(*)(snd_hctl_t *);
};

}

extern "C" void * snd_hctl_get_callback_private(fns::snd_hctl_get_callback_private_arg0_t hctl)
{
  return fns::call<fns::snd_hctl_get_callback_private>(hctl);
}

namespace fns
{

using snd_hctl_load_arg0_t = snd_hctl_t *;
struct snd_hctl_load
{
  const char* name = "snd_hctl_load";
  const std::vector<const char*> args = {"hctl"};
  using type = int(*)(snd_hctl_t *);
};

}

extern "C" int snd_hctl_load(fns::snd_hctl_load_arg0_t hctl)
{
  return fns::call<fns::snd_hctl_load>(hctl);
}

namespace fns
{

using snd_hctl_free_arg0_t = snd_hctl_t *;
struct snd_hctl_free
{
  const char* name = "snd_hctl_free";
  const std::vector<const char*> args = {"hctl"};
  using type = int(*)(snd_hctl_t *);
};

}

extern "C" int snd_hctl_free(fns::snd_hctl_free_arg0_t hctl)
{
  return fns::call<fns::snd_hctl_free>(hctl);
}

namespace fns
{

using snd_hctl_handle_events_arg0_t = snd_hctl_t *;
struct snd_hctl_handle_events
{
  const char* name = "snd_hctl_handle_events";
  const std::vector<const char*> args = {"hctl"};
  using type = int(*)(snd_hctl_t *);
};

}

extern "C" int snd_hctl_handle_events(fns::snd_hctl_handle_events_arg0_t hctl)
{
  return fns::call<fns::snd_hctl_handle_events>(hctl);
}

namespace fns
{

using snd_hctl_name_arg0_t = snd_hctl_t *;
struct snd_hctl_name
{
  const char* name = "snd_hctl_name";
  const std::vector<const char*> args = {"hctl"};
  using type = const char *(*)(snd_hctl_t *);
};

}

extern "C" const char * snd_hctl_name(fns::snd_hctl_name_arg0_t hctl)
{
  return fns::call<fns::snd_hctl_name>(hctl);
}

namespace fns
{

using snd_hctl_wait_arg0_t = snd_hctl_t *;
using snd_hctl_wait_arg1_t = int;
struct snd_hctl_wait
{
  const char* name = "snd_hctl_wait";
  const std::vector<const char*> args = {"hctl", "timeout"};
  using type = int(*)(snd_hctl_t *, int);
};

}

extern "C" int snd_hctl_wait(fns::snd_hctl_wait_arg0_t hctl, fns::snd_hctl_wait_arg1_t timeout)
{
  return fns::call<fns::snd_hctl_wait>(hctl, timeout);
}

namespace fns
{

using snd_hctl_ctl_arg0_t = snd_hctl_t *;
struct snd_hctl_ctl
{
  const char* name = "snd_hctl_ctl";
  const std::vector<const char*> args = {"hctl"};
  using type = snd_ctl_t *(*)(snd_hctl_t *);
};

}

extern "C" snd_ctl_t * snd_hctl_ctl(fns::snd_hctl_ctl_arg0_t hctl)
{
  return fns::call<fns::snd_hctl_ctl>(hctl);
}

namespace fns
{

using snd_hctl_elem_next_arg0_t = snd_hctl_elem_t *;
struct snd_hctl_elem_next
{
  const char* name = "snd_hctl_elem_next";
  const std::vector<const char*> args = {"elem"};
  using type = snd_hctl_elem_t *(*)(snd_hctl_elem_t *);
};

}

extern "C" snd_hctl_elem_t * snd_hctl_elem_next(fns::snd_hctl_elem_next_arg0_t elem)
{
  return fns::call<fns::snd_hctl_elem_next>(elem);
}

namespace fns
{

using snd_hctl_elem_prev_arg0_t = snd_hctl_elem_t *;
struct snd_hctl_elem_prev
{
  const char* name = "snd_hctl_elem_prev";
  const std::vector<const char*> args = {"elem"};
  using type = snd_hctl_elem_t *(*)(snd_hctl_elem_t *);
};

}

extern "C" snd_hctl_elem_t * snd_hctl_elem_prev(fns::snd_hctl_elem_prev_arg0_t elem)
{
  return fns::call<fns::snd_hctl_elem_prev>(elem);
}

namespace fns
{

using snd_hctl_elem_info_arg0_t = snd_hctl_elem_t *;
using snd_hctl_elem_info_arg1_t = snd_ctl_elem_info_t *;
struct snd_hctl_elem_info
{
  const char* name = "snd_hctl_elem_info";
  const std::vector<const char*> args = {"elem", "info"};
  using type = int(*)(snd_hctl_elem_t *, snd_ctl_elem_info_t *);
};

}

extern "C" int snd_hctl_elem_info(fns::snd_hctl_elem_info_arg0_t elem, fns::snd_hctl_elem_info_arg1_t info)
{
  return fns::call<fns::snd_hctl_elem_info>(elem, info);
}

namespace fns
{

using snd_hctl_elem_read_arg0_t = snd_hctl_elem_t *;
using snd_hctl_elem_read_arg1_t = snd_ctl_elem_value_t *;
struct snd_hctl_elem_read
{
  const char* name = "snd_hctl_elem_read";
  const std::vector<const char*> args = {"elem", "value"};
  using type = int(*)(snd_hctl_elem_t *, snd_ctl_elem_value_t *);
};

}

extern "C" int snd_hctl_elem_read(fns::snd_hctl_elem_read_arg0_t elem, fns::snd_hctl_elem_read_arg1_t value)
{
  return fns::call<fns::snd_hctl_elem_read>(elem, value);
}

namespace fns
{

using snd_hctl_elem_write_arg0_t = snd_hctl_elem_t *;
using snd_hctl_elem_write_arg1_t = snd_ctl_elem_value_t *;
struct snd_hctl_elem_write
{
  const char* name = "snd_hctl_elem_write";
  const std::vector<const char*> args = {"elem", "value"};
  using type = int(*)(snd_hctl_elem_t *, snd_ctl_elem_value_t *);
};

}

extern "C" int snd_hctl_elem_write(fns::snd_hctl_elem_write_arg0_t elem, fns::snd_hctl_elem_write_arg1_t value)
{
  return fns::call<fns::snd_hctl_elem_write>(elem, value);
}

namespace fns
{

using snd_hctl_elem_tlv_read_arg0_t = snd_hctl_elem_t *;
using snd_hctl_elem_tlv_read_arg1_t = unsigned int *;
using snd_hctl_elem_tlv_read_arg2_t = unsigned int;
struct snd_hctl_elem_tlv_read
{
  const char* name = "snd_hctl_elem_tlv_read";
  const std::vector<const char*> args = {"elem", "tlv", "tlv_size"};
  using type = int(*)(snd_hctl_elem_t *, unsigned int *, unsigned int);
};

}

extern "C" int snd_hctl_elem_tlv_read(fns::snd_hctl_elem_tlv_read_arg0_t elem, fns::snd_hctl_elem_tlv_read_arg1_t tlv, fns::snd_hctl_elem_tlv_read_arg2_t tlv_size)
{
  return fns::call<fns::snd_hctl_elem_tlv_read>(elem, tlv, tlv_size);
}

namespace fns
{

using snd_hctl_elem_tlv_write_arg0_t = snd_hctl_elem_t *;
using snd_hctl_elem_tlv_write_arg1_t = const unsigned int *;
struct snd_hctl_elem_tlv_write
{
  const char* name = "snd_hctl_elem_tlv_write";
  const std::vector<const char*> args = {"elem", "tlv"};
  using type = int(*)(snd_hctl_elem_t *, const unsigned int *);
};

}

extern "C" int snd_hctl_elem_tlv_write(fns::snd_hctl_elem_tlv_write_arg0_t elem, fns::snd_hctl_elem_tlv_write_arg1_t tlv)
{
  return fns::call<fns::snd_hctl_elem_tlv_write>(elem, tlv);
}

namespace fns
{

using snd_hctl_elem_tlv_command_arg0_t = snd_hctl_elem_t *;
using snd_hctl_elem_tlv_command_arg1_t = const unsigned int *;
struct snd_hctl_elem_tlv_command
{
  const char* name = "snd_hctl_elem_tlv_command";
  const std::vector<const char*> args = {"elem", "tlv"};
  using type = int(*)(snd_hctl_elem_t *, const unsigned int *);
};

}

extern "C" int snd_hctl_elem_tlv_command(fns::snd_hctl_elem_tlv_command_arg0_t elem, fns::snd_hctl_elem_tlv_command_arg1_t tlv)
{
  return fns::call<fns::snd_hctl_elem_tlv_command>(elem, tlv);
}

namespace fns
{

using snd_hctl_elem_get_hctl_arg0_t = snd_hctl_elem_t *;
struct snd_hctl_elem_get_hctl
{
  const char* name = "snd_hctl_elem_get_hctl";
  const std::vector<const char*> args = {"elem"};
  using type = snd_hctl_t *(*)(snd_hctl_elem_t *);
};

}

extern "C" snd_hctl_t * snd_hctl_elem_get_hctl(fns::snd_hctl_elem_get_hctl_arg0_t elem)
{
  return fns::call<fns::snd_hctl_elem_get_hctl>(elem);
}

namespace fns
{

using snd_hctl_elem_get_id_arg0_t = const snd_hctl_elem_t *;
using snd_hctl_elem_get_id_arg1_t = snd_ctl_elem_id_t *;
struct snd_hctl_elem_get_id
{
  const char* name = "snd_hctl_elem_get_id";
  const std::vector<const char*> args = {"obj", "ptr"};
  using type = void(*)(const snd_hctl_elem_t *, snd_ctl_elem_id_t *);
};

}

extern "C" void snd_hctl_elem_get_id(fns::snd_hctl_elem_get_id_arg0_t obj, fns::snd_hctl_elem_get_id_arg1_t ptr)
{
  return fns::call_void<fns::snd_hctl_elem_get_id>(obj, ptr);
}

namespace fns
{

using snd_hctl_elem_get_numid_arg0_t = const snd_hctl_elem_t *;
struct snd_hctl_elem_get_numid
{
  const char* name = "snd_hctl_elem_get_numid";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_hctl_elem_t *);
};

}

extern "C" unsigned int snd_hctl_elem_get_numid(fns::snd_hctl_elem_get_numid_arg0_t obj)
{
  return fns::call<fns::snd_hctl_elem_get_numid>(obj);
}

namespace fns
{

using snd_hctl_elem_get_interface_arg0_t = const snd_hctl_elem_t *;
struct snd_hctl_elem_get_interface
{
  const char* name = "snd_hctl_elem_get_interface";
  const std::vector<const char*> args = {"obj"};
  using type = snd_ctl_elem_iface_t(*)(const snd_hctl_elem_t *);
};

}

extern "C" snd_ctl_elem_iface_t snd_hctl_elem_get_interface(fns::snd_hctl_elem_get_interface_arg0_t obj)
{
  return fns::call<fns::snd_hctl_elem_get_interface>(obj);
}

namespace fns
{

using snd_hctl_elem_get_device_arg0_t = const snd_hctl_elem_t *;
struct snd_hctl_elem_get_device
{
  const char* name = "snd_hctl_elem_get_device";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_hctl_elem_t *);
};

}

extern "C" unsigned int snd_hctl_elem_get_device(fns::snd_hctl_elem_get_device_arg0_t obj)
{
  return fns::call<fns::snd_hctl_elem_get_device>(obj);
}

namespace fns
{

using snd_hctl_elem_get_subdevice_arg0_t = const snd_hctl_elem_t *;
struct snd_hctl_elem_get_subdevice
{
  const char* name = "snd_hctl_elem_get_subdevice";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_hctl_elem_t *);
};

}

extern "C" unsigned int snd_hctl_elem_get_subdevice(fns::snd_hctl_elem_get_subdevice_arg0_t obj)
{
  return fns::call<fns::snd_hctl_elem_get_subdevice>(obj);
}

namespace fns
{

using snd_hctl_elem_get_name_arg0_t = const snd_hctl_elem_t *;
struct snd_hctl_elem_get_name
{
  const char* name = "snd_hctl_elem_get_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_hctl_elem_t *);
};

}

extern "C" const char * snd_hctl_elem_get_name(fns::snd_hctl_elem_get_name_arg0_t obj)
{
  return fns::call<fns::snd_hctl_elem_get_name>(obj);
}

namespace fns
{

using snd_hctl_elem_get_index_arg0_t = const snd_hctl_elem_t *;
struct snd_hctl_elem_get_index
{
  const char* name = "snd_hctl_elem_get_index";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_hctl_elem_t *);
};

}

extern "C" unsigned int snd_hctl_elem_get_index(fns::snd_hctl_elem_get_index_arg0_t obj)
{
  return fns::call<fns::snd_hctl_elem_get_index>(obj);
}

namespace fns
{

using snd_hctl_elem_set_callback_arg0_t = snd_hctl_elem_t *;
using snd_hctl_elem_set_callback_arg1_t = snd_hctl_elem_callback_t;
struct snd_hctl_elem_set_callback
{
  const char* name = "snd_hctl_elem_set_callback";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_hctl_elem_t *, snd_hctl_elem_callback_t);
};

}

extern "C" void snd_hctl_elem_set_callback(fns::snd_hctl_elem_set_callback_arg0_t obj, fns::snd_hctl_elem_set_callback_arg1_t val)
{
  return fns::call_void<fns::snd_hctl_elem_set_callback>(obj, val);
}

namespace fns
{

using snd_hctl_elem_get_callback_private_arg0_t = const snd_hctl_elem_t *;
struct snd_hctl_elem_get_callback_private
{
  const char* name = "snd_hctl_elem_get_callback_private";
  const std::vector<const char*> args = {"obj"};
  using type = void *(*)(const snd_hctl_elem_t *);
};

}

extern "C" void * snd_hctl_elem_get_callback_private(fns::snd_hctl_elem_get_callback_private_arg0_t obj)
{
  return fns::call<fns::snd_hctl_elem_get_callback_private>(obj);
}

namespace fns
{

using snd_hctl_elem_set_callback_private_arg0_t = snd_hctl_elem_t *;
using snd_hctl_elem_set_callback_private_arg1_t = void *;
struct snd_hctl_elem_set_callback_private
{
  const char* name = "snd_hctl_elem_set_callback_private";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_hctl_elem_t *, void *);
};

}

extern "C" void snd_hctl_elem_set_callback_private(fns::snd_hctl_elem_set_callback_private_arg0_t obj, fns::snd_hctl_elem_set_callback_private_arg1_t val)
{
  return fns::call_void<fns::snd_hctl_elem_set_callback_private>(obj, val);
}

namespace fns
{

using snd_sctl_build_arg0_t = snd_sctl_t **;
using snd_sctl_build_arg1_t = snd_ctl_t *;
using snd_sctl_build_arg2_t = snd_config_t *;
using snd_sctl_build_arg3_t = snd_config_t *;
using snd_sctl_build_arg4_t = int;
struct snd_sctl_build
{
  const char* name = "snd_sctl_build";
  const std::vector<const char*> args = {"ctl", "handle", "config", "private_data", "mode"};
  using type = int(*)(snd_sctl_t **, snd_ctl_t *, snd_config_t *, snd_config_t *, int);
};

}

extern "C" int snd_sctl_build(fns::snd_sctl_build_arg0_t ctl, fns::snd_sctl_build_arg1_t handle, fns::snd_sctl_build_arg2_t config, fns::snd_sctl_build_arg3_t private_data, fns::snd_sctl_build_arg4_t mode)
{
  return fns::call<fns::snd_sctl_build>(ctl, handle, config, private_data, mode);
}

namespace fns
{

using snd_sctl_free_arg0_t = snd_sctl_t *;
struct snd_sctl_free
{
  const char* name = "snd_sctl_free";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_sctl_t *);
};

}

extern "C" int snd_sctl_free(fns::snd_sctl_free_arg0_t handle)
{
  return fns::call<fns::snd_sctl_free>(handle);
}

namespace fns
{

using snd_sctl_install_arg0_t = snd_sctl_t *;
struct snd_sctl_install
{
  const char* name = "snd_sctl_install";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_sctl_t *);
};

}

extern "C" int snd_sctl_install(fns::snd_sctl_install_arg0_t handle)
{
  return fns::call<fns::snd_sctl_install>(handle);
}

namespace fns
{

using snd_sctl_remove_arg0_t = snd_sctl_t *;
struct snd_sctl_remove
{
  const char* name = "snd_sctl_remove";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_sctl_t *);
};

}

extern "C" int snd_sctl_remove(fns::snd_sctl_remove_arg0_t handle)
{
  return fns::call<fns::snd_sctl_remove>(handle);
}

namespace fns
{

using snd_mixer_open_arg0_t = snd_mixer_t **;
using snd_mixer_open_arg1_t = int;
struct snd_mixer_open
{
  const char* name = "snd_mixer_open";
  const std::vector<const char*> args = {"mixer", "mode"};
  using type = int(*)(snd_mixer_t **, int);
};

}

extern "C" int snd_mixer_open(fns::snd_mixer_open_arg0_t mixer, fns::snd_mixer_open_arg1_t mode)
{
  return fns::call<fns::snd_mixer_open>(mixer, mode);
}

namespace fns
{

using snd_mixer_close_arg0_t = snd_mixer_t *;
struct snd_mixer_close
{
  const char* name = "snd_mixer_close";
  const std::vector<const char*> args = {"mixer"};
  using type = int(*)(snd_mixer_t *);
};

}

extern "C" int snd_mixer_close(fns::snd_mixer_close_arg0_t mixer)
{
  return fns::call<fns::snd_mixer_close>(mixer);
}

namespace fns
{

using snd_mixer_first_elem_arg0_t = snd_mixer_t *;
struct snd_mixer_first_elem
{
  const char* name = "snd_mixer_first_elem";
  const std::vector<const char*> args = {"mixer"};
  using type = snd_mixer_elem_t *(*)(snd_mixer_t *);
};

}

extern "C" snd_mixer_elem_t * snd_mixer_first_elem(fns::snd_mixer_first_elem_arg0_t mixer)
{
  return fns::call<fns::snd_mixer_first_elem>(mixer);
}

namespace fns
{

using snd_mixer_last_elem_arg0_t = snd_mixer_t *;
struct snd_mixer_last_elem
{
  const char* name = "snd_mixer_last_elem";
  const std::vector<const char*> args = {"mixer"};
  using type = snd_mixer_elem_t *(*)(snd_mixer_t *);
};

}

extern "C" snd_mixer_elem_t * snd_mixer_last_elem(fns::snd_mixer_last_elem_arg0_t mixer)
{
  return fns::call<fns::snd_mixer_last_elem>(mixer);
}

namespace fns
{

using snd_mixer_handle_events_arg0_t = snd_mixer_t *;
struct snd_mixer_handle_events
{
  const char* name = "snd_mixer_handle_events";
  const std::vector<const char*> args = {"mixer"};
  using type = int(*)(snd_mixer_t *);
};

}

extern "C" int snd_mixer_handle_events(fns::snd_mixer_handle_events_arg0_t mixer)
{
  return fns::call<fns::snd_mixer_handle_events>(mixer);
}

namespace fns
{

using snd_mixer_attach_arg0_t = snd_mixer_t *;
using snd_mixer_attach_arg1_t = const char *;
struct snd_mixer_attach
{
  const char* name = "snd_mixer_attach";
  const std::vector<const char*> args = {"mixer", "name"};
  using type = int(*)(snd_mixer_t *, const char *);
};

}

extern "C" int snd_mixer_attach(fns::snd_mixer_attach_arg0_t mixer, fns::snd_mixer_attach_arg1_t name)
{
  return fns::call<fns::snd_mixer_attach>(mixer, name);
}

namespace fns
{

using snd_mixer_attach_hctl_arg0_t = snd_mixer_t *;
using snd_mixer_attach_hctl_arg1_t = snd_hctl_t *;
struct snd_mixer_attach_hctl
{
  const char* name = "snd_mixer_attach_hctl";
  const std::vector<const char*> args = {"mixer", "hctl"};
  using type = int(*)(snd_mixer_t *, snd_hctl_t *);
};

}

extern "C" int snd_mixer_attach_hctl(fns::snd_mixer_attach_hctl_arg0_t mixer, fns::snd_mixer_attach_hctl_arg1_t hctl)
{
  return fns::call<fns::snd_mixer_attach_hctl>(mixer, hctl);
}

namespace fns
{

using snd_mixer_detach_arg0_t = snd_mixer_t *;
using snd_mixer_detach_arg1_t = const char *;
struct snd_mixer_detach
{
  const char* name = "snd_mixer_detach";
  const std::vector<const char*> args = {"mixer", "name"};
  using type = int(*)(snd_mixer_t *, const char *);
};

}

extern "C" int snd_mixer_detach(fns::snd_mixer_detach_arg0_t mixer, fns::snd_mixer_detach_arg1_t name)
{
  return fns::call<fns::snd_mixer_detach>(mixer, name);
}

namespace fns
{

using snd_mixer_detach_hctl_arg0_t = snd_mixer_t *;
using snd_mixer_detach_hctl_arg1_t = snd_hctl_t *;
struct snd_mixer_detach_hctl
{
  const char* name = "snd_mixer_detach_hctl";
  const std::vector<const char*> args = {"mixer", "hctl"};
  using type = int(*)(snd_mixer_t *, snd_hctl_t *);
};

}

extern "C" int snd_mixer_detach_hctl(fns::snd_mixer_detach_hctl_arg0_t mixer, fns::snd_mixer_detach_hctl_arg1_t hctl)
{
  return fns::call<fns::snd_mixer_detach_hctl>(mixer, hctl);
}

namespace fns
{

using snd_mixer_get_hctl_arg0_t = snd_mixer_t *;
using snd_mixer_get_hctl_arg1_t = const char *;
using snd_mixer_get_hctl_arg2_t = snd_hctl_t **;
struct snd_mixer_get_hctl
{
  const char* name = "snd_mixer_get_hctl";
  const std::vector<const char*> args = {"mixer", "name", "hctl"};
  using type = int(*)(snd_mixer_t *, const char *, snd_hctl_t **);
};

}

extern "C" int snd_mixer_get_hctl(fns::snd_mixer_get_hctl_arg0_t mixer, fns::snd_mixer_get_hctl_arg1_t name, fns::snd_mixer_get_hctl_arg2_t hctl)
{
  return fns::call<fns::snd_mixer_get_hctl>(mixer, name, hctl);
}

namespace fns
{

using snd_mixer_poll_descriptors_count_arg0_t = snd_mixer_t *;
struct snd_mixer_poll_descriptors_count
{
  const char* name = "snd_mixer_poll_descriptors_count";
  const std::vector<const char*> args = {"mixer"};
  using type = int(*)(snd_mixer_t *);
};

}

extern "C" int snd_mixer_poll_descriptors_count(fns::snd_mixer_poll_descriptors_count_arg0_t mixer)
{
  return fns::call<fns::snd_mixer_poll_descriptors_count>(mixer);
}

namespace fns
{

using snd_mixer_poll_descriptors_arg0_t = snd_mixer_t *;
using snd_mixer_poll_descriptors_arg1_t = struct pollfd *;
using snd_mixer_poll_descriptors_arg2_t = unsigned int;
struct snd_mixer_poll_descriptors
{
  const char* name = "snd_mixer_poll_descriptors";
  const std::vector<const char*> args = {"mixer", "pfds", "space"};
  using type = int(*)(snd_mixer_t *, struct pollfd *, unsigned int);
};

}

extern "C" int snd_mixer_poll_descriptors(fns::snd_mixer_poll_descriptors_arg0_t mixer, fns::snd_mixer_poll_descriptors_arg1_t pfds, fns::snd_mixer_poll_descriptors_arg2_t space)
{
  return fns::call<fns::snd_mixer_poll_descriptors>(mixer, pfds, space);
}

namespace fns
{

using snd_mixer_poll_descriptors_revents_arg0_t = snd_mixer_t *;
using snd_mixer_poll_descriptors_revents_arg1_t = struct pollfd *;
using snd_mixer_poll_descriptors_revents_arg2_t = unsigned int;
using snd_mixer_poll_descriptors_revents_arg3_t = unsigned short *;
struct snd_mixer_poll_descriptors_revents
{
  const char* name = "snd_mixer_poll_descriptors_revents";
  const std::vector<const char*> args = {"mixer", "pfds", "nfds", "revents"};
  using type = int(*)(snd_mixer_t *, struct pollfd *, unsigned int, unsigned short *);
};

}

extern "C" int snd_mixer_poll_descriptors_revents(fns::snd_mixer_poll_descriptors_revents_arg0_t mixer, fns::snd_mixer_poll_descriptors_revents_arg1_t pfds, fns::snd_mixer_poll_descriptors_revents_arg2_t nfds, fns::snd_mixer_poll_descriptors_revents_arg3_t revents)
{
  return fns::call<fns::snd_mixer_poll_descriptors_revents>(mixer, pfds, nfds, revents);
}

namespace fns
{

using snd_mixer_load_arg0_t = snd_mixer_t *;
struct snd_mixer_load
{
  const char* name = "snd_mixer_load";
  const std::vector<const char*> args = {"mixer"};
  using type = int(*)(snd_mixer_t *);
};

}

extern "C" int snd_mixer_load(fns::snd_mixer_load_arg0_t mixer)
{
  return fns::call<fns::snd_mixer_load>(mixer);
}

namespace fns
{

using snd_mixer_free_arg0_t = snd_mixer_t *;
struct snd_mixer_free
{
  const char* name = "snd_mixer_free";
  const std::vector<const char*> args = {"mixer"};
  using type = void(*)(snd_mixer_t *);
};

}

extern "C" void snd_mixer_free(fns::snd_mixer_free_arg0_t mixer)
{
  return fns::call_void<fns::snd_mixer_free>(mixer);
}

namespace fns
{

using snd_mixer_wait_arg0_t = snd_mixer_t *;
using snd_mixer_wait_arg1_t = int;
struct snd_mixer_wait
{
  const char* name = "snd_mixer_wait";
  const std::vector<const char*> args = {"mixer", "timeout"};
  using type = int(*)(snd_mixer_t *, int);
};

}

extern "C" int snd_mixer_wait(fns::snd_mixer_wait_arg0_t mixer, fns::snd_mixer_wait_arg1_t timeout)
{
  return fns::call<fns::snd_mixer_wait>(mixer, timeout);
}

namespace fns
{

using snd_mixer_set_compare_arg0_t = snd_mixer_t *;
using snd_mixer_set_compare_arg1_t = snd_mixer_compare_t;
struct snd_mixer_set_compare
{
  const char* name = "snd_mixer_set_compare";
  const std::vector<const char*> args = {"mixer", "msort"};
  using type = int(*)(snd_mixer_t *, snd_mixer_compare_t);
};

}

extern "C" int snd_mixer_set_compare(fns::snd_mixer_set_compare_arg0_t mixer, fns::snd_mixer_set_compare_arg1_t msort)
{
  return fns::call<fns::snd_mixer_set_compare>(mixer, msort);
}

namespace fns
{

using snd_mixer_set_callback_arg0_t = snd_mixer_t *;
using snd_mixer_set_callback_arg1_t = snd_mixer_callback_t;
struct snd_mixer_set_callback
{
  const char* name = "snd_mixer_set_callback";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_mixer_t *, snd_mixer_callback_t);
};

}

extern "C" void snd_mixer_set_callback(fns::snd_mixer_set_callback_arg0_t obj, fns::snd_mixer_set_callback_arg1_t val)
{
  return fns::call_void<fns::snd_mixer_set_callback>(obj, val);
}

namespace fns
{

using snd_mixer_get_callback_private_arg0_t = const snd_mixer_t *;
struct snd_mixer_get_callback_private
{
  const char* name = "snd_mixer_get_callback_private";
  const std::vector<const char*> args = {"obj"};
  using type = void *(*)(const snd_mixer_t *);
};

}

extern "C" void * snd_mixer_get_callback_private(fns::snd_mixer_get_callback_private_arg0_t obj)
{
  return fns::call<fns::snd_mixer_get_callback_private>(obj);
}

namespace fns
{

using snd_mixer_set_callback_private_arg0_t = snd_mixer_t *;
using snd_mixer_set_callback_private_arg1_t = void *;
struct snd_mixer_set_callback_private
{
  const char* name = "snd_mixer_set_callback_private";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_mixer_t *, void *);
};

}

extern "C" void snd_mixer_set_callback_private(fns::snd_mixer_set_callback_private_arg0_t obj, fns::snd_mixer_set_callback_private_arg1_t val)
{
  return fns::call_void<fns::snd_mixer_set_callback_private>(obj, val);
}

namespace fns
{

using snd_mixer_get_count_arg0_t = const snd_mixer_t *;
struct snd_mixer_get_count
{
  const char* name = "snd_mixer_get_count";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_mixer_t *);
};

}

extern "C" unsigned int snd_mixer_get_count(fns::snd_mixer_get_count_arg0_t obj)
{
  return fns::call<fns::snd_mixer_get_count>(obj);
}

namespace fns
{

using snd_mixer_class_unregister_arg0_t = snd_mixer_class_t *;
struct snd_mixer_class_unregister
{
  const char* name = "snd_mixer_class_unregister";
  const std::vector<const char*> args = {"clss"};
  using type = int(*)(snd_mixer_class_t *);
};

}

extern "C" int snd_mixer_class_unregister(fns::snd_mixer_class_unregister_arg0_t clss)
{
  return fns::call<fns::snd_mixer_class_unregister>(clss);
}

namespace fns
{

using snd_mixer_elem_next_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_elem_next
{
  const char* name = "snd_mixer_elem_next";
  const std::vector<const char*> args = {"elem"};
  using type = snd_mixer_elem_t *(*)(snd_mixer_elem_t *);
};

}

extern "C" snd_mixer_elem_t * snd_mixer_elem_next(fns::snd_mixer_elem_next_arg0_t elem)
{
  return fns::call<fns::snd_mixer_elem_next>(elem);
}

namespace fns
{

using snd_mixer_elem_prev_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_elem_prev
{
  const char* name = "snd_mixer_elem_prev";
  const std::vector<const char*> args = {"elem"};
  using type = snd_mixer_elem_t *(*)(snd_mixer_elem_t *);
};

}

extern "C" snd_mixer_elem_t * snd_mixer_elem_prev(fns::snd_mixer_elem_prev_arg0_t elem)
{
  return fns::call<fns::snd_mixer_elem_prev>(elem);
}

namespace fns
{

using snd_mixer_elem_set_callback_arg0_t = snd_mixer_elem_t *;
using snd_mixer_elem_set_callback_arg1_t = snd_mixer_elem_callback_t;
struct snd_mixer_elem_set_callback
{
  const char* name = "snd_mixer_elem_set_callback";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_mixer_elem_t *, snd_mixer_elem_callback_t);
};

}

extern "C" void snd_mixer_elem_set_callback(fns::snd_mixer_elem_set_callback_arg0_t obj, fns::snd_mixer_elem_set_callback_arg1_t val)
{
  return fns::call_void<fns::snd_mixer_elem_set_callback>(obj, val);
}

namespace fns
{

using snd_mixer_elem_get_callback_private_arg0_t = const snd_mixer_elem_t *;
struct snd_mixer_elem_get_callback_private
{
  const char* name = "snd_mixer_elem_get_callback_private";
  const std::vector<const char*> args = {"obj"};
  using type = void *(*)(const snd_mixer_elem_t *);
};

}

extern "C" void * snd_mixer_elem_get_callback_private(fns::snd_mixer_elem_get_callback_private_arg0_t obj)
{
  return fns::call<fns::snd_mixer_elem_get_callback_private>(obj);
}

namespace fns
{

using snd_mixer_elem_set_callback_private_arg0_t = snd_mixer_elem_t *;
using snd_mixer_elem_set_callback_private_arg1_t = void *;
struct snd_mixer_elem_set_callback_private
{
  const char* name = "snd_mixer_elem_set_callback_private";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_mixer_elem_t *, void *);
};

}

extern "C" void snd_mixer_elem_set_callback_private(fns::snd_mixer_elem_set_callback_private_arg0_t obj, fns::snd_mixer_elem_set_callback_private_arg1_t val)
{
  return fns::call_void<fns::snd_mixer_elem_set_callback_private>(obj, val);
}

namespace fns
{

using snd_mixer_elem_get_type_arg0_t = const snd_mixer_elem_t *;
struct snd_mixer_elem_get_type
{
  const char* name = "snd_mixer_elem_get_type";
  const std::vector<const char*> args = {"obj"};
  using type = snd_mixer_elem_type_t(*)(const snd_mixer_elem_t *);
};

}

extern "C" snd_mixer_elem_type_t snd_mixer_elem_get_type(fns::snd_mixer_elem_get_type_arg0_t obj)
{
  return fns::call<fns::snd_mixer_elem_get_type>(obj);
}

namespace fns
{

using snd_mixer_class_register_arg0_t = snd_mixer_class_t *;
using snd_mixer_class_register_arg1_t = snd_mixer_t *;
struct snd_mixer_class_register
{
  const char* name = "snd_mixer_class_register";
  const std::vector<const char*> args = {"class_", "mixer"};
  using type = int(*)(snd_mixer_class_t *, snd_mixer_t *);
};

}

extern "C" int snd_mixer_class_register(fns::snd_mixer_class_register_arg0_t class_, fns::snd_mixer_class_register_arg1_t mixer)
{
  return fns::call<fns::snd_mixer_class_register>(class_, mixer);
}

namespace fns
{

using snd_mixer_elem_new_arg0_t = snd_mixer_elem_t **;
using snd_mixer_elem_new_arg1_t = snd_mixer_elem_type_t;
using snd_mixer_elem_new_arg2_t = int;
using snd_mixer_elem_new_arg3_t = void *;
using snd_mixer_elem_new_arg4_t = void (*)(snd_mixer_elem_t *);
struct snd_mixer_elem_new
{
  const char* name = "snd_mixer_elem_new";
  const std::vector<const char*> args = {"elem", "type", "compare_weight", "private_data", "private_free"};
  using type = int(*)(snd_mixer_elem_t **, snd_mixer_elem_type_t, int, void *, void (*)(snd_mixer_elem_t *));
};

}

extern "C" int snd_mixer_elem_new(fns::snd_mixer_elem_new_arg0_t elem, fns::snd_mixer_elem_new_arg1_t type, fns::snd_mixer_elem_new_arg2_t compare_weight, fns::snd_mixer_elem_new_arg3_t private_data, fns::snd_mixer_elem_new_arg4_t private_free)
{
  return fns::call<fns::snd_mixer_elem_new>(elem, type, compare_weight, private_data, private_free);
}

namespace fns
{

using snd_mixer_elem_add_arg0_t = snd_mixer_elem_t *;
using snd_mixer_elem_add_arg1_t = snd_mixer_class_t *;
struct snd_mixer_elem_add
{
  const char* name = "snd_mixer_elem_add";
  const std::vector<const char*> args = {"elem", "class_"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_class_t *);
};

}

extern "C" int snd_mixer_elem_add(fns::snd_mixer_elem_add_arg0_t elem, fns::snd_mixer_elem_add_arg1_t class_)
{
  return fns::call<fns::snd_mixer_elem_add>(elem, class_);
}

namespace fns
{

using snd_mixer_elem_remove_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_elem_remove
{
  const char* name = "snd_mixer_elem_remove";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_elem_remove(fns::snd_mixer_elem_remove_arg0_t elem)
{
  return fns::call<fns::snd_mixer_elem_remove>(elem);
}

namespace fns
{

using snd_mixer_elem_free_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_elem_free
{
  const char* name = "snd_mixer_elem_free";
  const std::vector<const char*> args = {"elem"};
  using type = void(*)(snd_mixer_elem_t *);
};

}

extern "C" void snd_mixer_elem_free(fns::snd_mixer_elem_free_arg0_t elem)
{
  return fns::call_void<fns::snd_mixer_elem_free>(elem);
}

namespace fns
{

using snd_mixer_elem_info_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_elem_info
{
  const char* name = "snd_mixer_elem_info";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_elem_info(fns::snd_mixer_elem_info_arg0_t elem)
{
  return fns::call<fns::snd_mixer_elem_info>(elem);
}

namespace fns
{

using snd_mixer_elem_value_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_elem_value
{
  const char* name = "snd_mixer_elem_value";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_elem_value(fns::snd_mixer_elem_value_arg0_t elem)
{
  return fns::call<fns::snd_mixer_elem_value>(elem);
}

namespace fns
{

using snd_mixer_elem_attach_arg0_t = snd_mixer_elem_t *;
using snd_mixer_elem_attach_arg1_t = snd_hctl_elem_t *;
struct snd_mixer_elem_attach
{
  const char* name = "snd_mixer_elem_attach";
  const std::vector<const char*> args = {"melem", "helem"};
  using type = int(*)(snd_mixer_elem_t *, snd_hctl_elem_t *);
};

}

extern "C" int snd_mixer_elem_attach(fns::snd_mixer_elem_attach_arg0_t melem, fns::snd_mixer_elem_attach_arg1_t helem)
{
  return fns::call<fns::snd_mixer_elem_attach>(melem, helem);
}

namespace fns
{

using snd_mixer_elem_detach_arg0_t = snd_mixer_elem_t *;
using snd_mixer_elem_detach_arg1_t = snd_hctl_elem_t *;
struct snd_mixer_elem_detach
{
  const char* name = "snd_mixer_elem_detach";
  const std::vector<const char*> args = {"melem", "helem"};
  using type = int(*)(snd_mixer_elem_t *, snd_hctl_elem_t *);
};

}

extern "C" int snd_mixer_elem_detach(fns::snd_mixer_elem_detach_arg0_t melem, fns::snd_mixer_elem_detach_arg1_t helem)
{
  return fns::call<fns::snd_mixer_elem_detach>(melem, helem);
}

namespace fns
{

using snd_mixer_elem_empty_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_elem_empty
{
  const char* name = "snd_mixer_elem_empty";
  const std::vector<const char*> args = {"melem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_elem_empty(fns::snd_mixer_elem_empty_arg0_t melem)
{
  return fns::call<fns::snd_mixer_elem_empty>(melem);
}

namespace fns
{

using snd_mixer_elem_get_private_arg0_t = const snd_mixer_elem_t *;
struct snd_mixer_elem_get_private
{
  const char* name = "snd_mixer_elem_get_private";
  const std::vector<const char*> args = {"melem"};
  using type = void *(*)(const snd_mixer_elem_t *);
};

}

extern "C" void * snd_mixer_elem_get_private(fns::snd_mixer_elem_get_private_arg0_t melem)
{
  return fns::call<fns::snd_mixer_elem_get_private>(melem);
}

namespace fns
{

struct snd_mixer_class_sizeof
{
  const char* name = "snd_mixer_class_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_mixer_class_sizeof()
{
  return fns::call<fns::snd_mixer_class_sizeof>();
}

namespace fns
{

using snd_mixer_class_malloc_arg0_t = snd_mixer_class_t **;
struct snd_mixer_class_malloc
{
  const char* name = "snd_mixer_class_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_mixer_class_t **);
};

}

extern "C" int snd_mixer_class_malloc(fns::snd_mixer_class_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_mixer_class_malloc>(ptr);
}

namespace fns
{

using snd_mixer_class_free_arg0_t = snd_mixer_class_t *;
struct snd_mixer_class_free
{
  const char* name = "snd_mixer_class_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_mixer_class_t *);
};

}

extern "C" void snd_mixer_class_free(fns::snd_mixer_class_free_arg0_t obj)
{
  return fns::call_void<fns::snd_mixer_class_free>(obj);
}

namespace fns
{

using snd_mixer_class_copy_arg0_t = snd_mixer_class_t *;
using snd_mixer_class_copy_arg1_t = const snd_mixer_class_t *;
struct snd_mixer_class_copy
{
  const char* name = "snd_mixer_class_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_mixer_class_t *, const snd_mixer_class_t *);
};

}

extern "C" void snd_mixer_class_copy(fns::snd_mixer_class_copy_arg0_t dst, fns::snd_mixer_class_copy_arg1_t src)
{
  return fns::call_void<fns::snd_mixer_class_copy>(dst, src);
}

namespace fns
{

using snd_mixer_class_get_mixer_arg0_t = const snd_mixer_class_t *;
struct snd_mixer_class_get_mixer
{
  const char* name = "snd_mixer_class_get_mixer";
  const std::vector<const char*> args = {"class_"};
  using type = snd_mixer_t *(*)(const snd_mixer_class_t *);
};

}

extern "C" snd_mixer_t * snd_mixer_class_get_mixer(fns::snd_mixer_class_get_mixer_arg0_t class_)
{
  return fns::call<fns::snd_mixer_class_get_mixer>(class_);
}

namespace fns
{

using snd_mixer_class_get_event_arg0_t = const snd_mixer_class_t *;
struct snd_mixer_class_get_event
{
  const char* name = "snd_mixer_class_get_event";
  const std::vector<const char*> args = {"class_"};
  using type = snd_mixer_event_t(*)(const snd_mixer_class_t *);
};

}

extern "C" snd_mixer_event_t snd_mixer_class_get_event(fns::snd_mixer_class_get_event_arg0_t class_)
{
  return fns::call<fns::snd_mixer_class_get_event>(class_);
}

namespace fns
{

using snd_mixer_class_get_private_arg0_t = const snd_mixer_class_t *;
struct snd_mixer_class_get_private
{
  const char* name = "snd_mixer_class_get_private";
  const std::vector<const char*> args = {"class_"};
  using type = void *(*)(const snd_mixer_class_t *);
};

}

extern "C" void * snd_mixer_class_get_private(fns::snd_mixer_class_get_private_arg0_t class_)
{
  return fns::call<fns::snd_mixer_class_get_private>(class_);
}

namespace fns
{

using snd_mixer_class_get_compare_arg0_t = const snd_mixer_class_t *;
struct snd_mixer_class_get_compare
{
  const char* name = "snd_mixer_class_get_compare";
  const std::vector<const char*> args = {"class_"};
  using type = snd_mixer_compare_t(*)(const snd_mixer_class_t *);
};

}

extern "C" snd_mixer_compare_t snd_mixer_class_get_compare(fns::snd_mixer_class_get_compare_arg0_t class_)
{
  return fns::call<fns::snd_mixer_class_get_compare>(class_);
}

namespace fns
{

using snd_mixer_class_set_event_arg0_t = snd_mixer_class_t *;
using snd_mixer_class_set_event_arg1_t = snd_mixer_event_t;
struct snd_mixer_class_set_event
{
  const char* name = "snd_mixer_class_set_event";
  const std::vector<const char*> args = {"class_", "event"};
  using type = int(*)(snd_mixer_class_t *, snd_mixer_event_t);
};

}

extern "C" int snd_mixer_class_set_event(fns::snd_mixer_class_set_event_arg0_t class_, fns::snd_mixer_class_set_event_arg1_t event)
{
  return fns::call<fns::snd_mixer_class_set_event>(class_, event);
}

namespace fns
{

using snd_mixer_class_set_private_arg0_t = snd_mixer_class_t *;
using snd_mixer_class_set_private_arg1_t = void *;
struct snd_mixer_class_set_private
{
  const char* name = "snd_mixer_class_set_private";
  const std::vector<const char*> args = {"class_", "private_data"};
  using type = int(*)(snd_mixer_class_t *, void *);
};

}

extern "C" int snd_mixer_class_set_private(fns::snd_mixer_class_set_private_arg0_t class_, fns::snd_mixer_class_set_private_arg1_t private_data)
{
  return fns::call<fns::snd_mixer_class_set_private>(class_, private_data);
}

namespace fns
{

using snd_mixer_class_set_private_free_arg0_t = snd_mixer_class_t *;
using snd_mixer_class_set_private_free_arg1_t = void (*)(snd_mixer_class_t *);
struct snd_mixer_class_set_private_free
{
  const char* name = "snd_mixer_class_set_private_free";
  const std::vector<const char*> args = {"class_", "private_free"};
  using type = int(*)(snd_mixer_class_t *, void (*)(snd_mixer_class_t *));
};

}

extern "C" int snd_mixer_class_set_private_free(fns::snd_mixer_class_set_private_free_arg0_t class_, fns::snd_mixer_class_set_private_free_arg1_t private_free)
{
  return fns::call<fns::snd_mixer_class_set_private_free>(class_, private_free);
}

namespace fns
{

using snd_mixer_class_set_compare_arg0_t = snd_mixer_class_t *;
using snd_mixer_class_set_compare_arg1_t = snd_mixer_compare_t;
struct snd_mixer_class_set_compare
{
  const char* name = "snd_mixer_class_set_compare";
  const std::vector<const char*> args = {"class_", "compare"};
  using type = int(*)(snd_mixer_class_t *, snd_mixer_compare_t);
};

}

extern "C" int snd_mixer_class_set_compare(fns::snd_mixer_class_set_compare_arg0_t class_, fns::snd_mixer_class_set_compare_arg1_t compare)
{
  return fns::call<fns::snd_mixer_class_set_compare>(class_, compare);
}

namespace fns
{

using snd_mixer_selem_channel_name_arg0_t = snd_mixer_selem_channel_id_t;
struct snd_mixer_selem_channel_name
{
  const char* name = "snd_mixer_selem_channel_name";
  const std::vector<const char*> args = {"channel"};
  using type = const char *(*)(snd_mixer_selem_channel_id_t);
};

}

extern "C" const char * snd_mixer_selem_channel_name(fns::snd_mixer_selem_channel_name_arg0_t channel)
{
  return fns::call<fns::snd_mixer_selem_channel_name>(channel);
}

namespace fns
{

using snd_mixer_selem_register_arg0_t = snd_mixer_t *;
using snd_mixer_selem_register_arg1_t = struct snd_mixer_selem_regopt *;
using snd_mixer_selem_register_arg2_t = snd_mixer_class_t **;
struct snd_mixer_selem_register
{
  const char* name = "snd_mixer_selem_register";
  const std::vector<const char*> args = {"mixer", "options", "classp"};
  using type = int(*)(snd_mixer_t *, struct snd_mixer_selem_regopt *, snd_mixer_class_t **);
};

}

extern "C" int snd_mixer_selem_register(fns::snd_mixer_selem_register_arg0_t mixer, fns::snd_mixer_selem_register_arg1_t options, fns::snd_mixer_selem_register_arg2_t classp)
{
  return fns::call<fns::snd_mixer_selem_register>(mixer, options, classp);
}

namespace fns
{

using snd_mixer_selem_get_id_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_id_arg1_t = snd_mixer_selem_id_t *;
struct snd_mixer_selem_get_id
{
  const char* name = "snd_mixer_selem_get_id";
  const std::vector<const char*> args = {"element", "id"};
  using type = void(*)(snd_mixer_elem_t *, snd_mixer_selem_id_t *);
};

}

extern "C" void snd_mixer_selem_get_id(fns::snd_mixer_selem_get_id_arg0_t element, fns::snd_mixer_selem_get_id_arg1_t id)
{
  return fns::call_void<fns::snd_mixer_selem_get_id>(element, id);
}

namespace fns
{

using snd_mixer_selem_get_name_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_get_name
{
  const char* name = "snd_mixer_selem_get_name";
  const std::vector<const char*> args = {"elem"};
  using type = const char *(*)(snd_mixer_elem_t *);
};

}

extern "C" const char * snd_mixer_selem_get_name(fns::snd_mixer_selem_get_name_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_get_name>(elem);
}

namespace fns
{

using snd_mixer_selem_get_index_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_get_index
{
  const char* name = "snd_mixer_selem_get_index";
  const std::vector<const char*> args = {"elem"};
  using type = unsigned int(*)(snd_mixer_elem_t *);
};

}

extern "C" unsigned int snd_mixer_selem_get_index(fns::snd_mixer_selem_get_index_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_get_index>(elem);
}

namespace fns
{

using snd_mixer_find_selem_arg0_t = snd_mixer_t *;
using snd_mixer_find_selem_arg1_t = const snd_mixer_selem_id_t *;
struct snd_mixer_find_selem
{
  const char* name = "snd_mixer_find_selem";
  const std::vector<const char*> args = {"mixer", "id"};
  using type = snd_mixer_elem_t *(*)(snd_mixer_t *, const snd_mixer_selem_id_t *);
};

}

extern "C" snd_mixer_elem_t * snd_mixer_find_selem(fns::snd_mixer_find_selem_arg0_t mixer, fns::snd_mixer_find_selem_arg1_t id)
{
  return fns::call<fns::snd_mixer_find_selem>(mixer, id);
}

namespace fns
{

using snd_mixer_selem_is_active_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_is_active
{
  const char* name = "snd_mixer_selem_is_active";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_is_active(fns::snd_mixer_selem_is_active_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_is_active>(elem);
}

namespace fns
{

using snd_mixer_selem_is_playback_mono_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_is_playback_mono
{
  const char* name = "snd_mixer_selem_is_playback_mono";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_is_playback_mono(fns::snd_mixer_selem_is_playback_mono_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_is_playback_mono>(elem);
}

namespace fns
{

using snd_mixer_selem_has_playback_channel_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_has_playback_channel_arg1_t = snd_mixer_selem_channel_id_t;
struct snd_mixer_selem_has_playback_channel
{
  const char* name = "snd_mixer_selem_has_playback_channel";
  const std::vector<const char*> args = {"obj", "channel"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t);
};

}

extern "C" int snd_mixer_selem_has_playback_channel(fns::snd_mixer_selem_has_playback_channel_arg0_t obj, fns::snd_mixer_selem_has_playback_channel_arg1_t channel)
{
  return fns::call<fns::snd_mixer_selem_has_playback_channel>(obj, channel);
}

namespace fns
{

using snd_mixer_selem_is_capture_mono_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_is_capture_mono
{
  const char* name = "snd_mixer_selem_is_capture_mono";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_is_capture_mono(fns::snd_mixer_selem_is_capture_mono_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_is_capture_mono>(elem);
}

namespace fns
{

using snd_mixer_selem_has_capture_channel_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_has_capture_channel_arg1_t = snd_mixer_selem_channel_id_t;
struct snd_mixer_selem_has_capture_channel
{
  const char* name = "snd_mixer_selem_has_capture_channel";
  const std::vector<const char*> args = {"obj", "channel"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t);
};

}

extern "C" int snd_mixer_selem_has_capture_channel(fns::snd_mixer_selem_has_capture_channel_arg0_t obj, fns::snd_mixer_selem_has_capture_channel_arg1_t channel)
{
  return fns::call<fns::snd_mixer_selem_has_capture_channel>(obj, channel);
}

namespace fns
{

using snd_mixer_selem_get_capture_group_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_get_capture_group
{
  const char* name = "snd_mixer_selem_get_capture_group";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_get_capture_group(fns::snd_mixer_selem_get_capture_group_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_get_capture_group>(elem);
}

namespace fns
{

using snd_mixer_selem_has_common_volume_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_has_common_volume
{
  const char* name = "snd_mixer_selem_has_common_volume";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_has_common_volume(fns::snd_mixer_selem_has_common_volume_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_has_common_volume>(elem);
}

namespace fns
{

using snd_mixer_selem_has_playback_volume_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_has_playback_volume
{
  const char* name = "snd_mixer_selem_has_playback_volume";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_has_playback_volume(fns::snd_mixer_selem_has_playback_volume_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_has_playback_volume>(elem);
}

namespace fns
{

using snd_mixer_selem_has_playback_volume_joined_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_has_playback_volume_joined
{
  const char* name = "snd_mixer_selem_has_playback_volume_joined";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_has_playback_volume_joined(fns::snd_mixer_selem_has_playback_volume_joined_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_has_playback_volume_joined>(elem);
}

namespace fns
{

using snd_mixer_selem_has_capture_volume_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_has_capture_volume
{
  const char* name = "snd_mixer_selem_has_capture_volume";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_has_capture_volume(fns::snd_mixer_selem_has_capture_volume_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_has_capture_volume>(elem);
}

namespace fns
{

using snd_mixer_selem_has_capture_volume_joined_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_has_capture_volume_joined
{
  const char* name = "snd_mixer_selem_has_capture_volume_joined";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_has_capture_volume_joined(fns::snd_mixer_selem_has_capture_volume_joined_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_has_capture_volume_joined>(elem);
}

namespace fns
{

using snd_mixer_selem_has_common_switch_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_has_common_switch
{
  const char* name = "snd_mixer_selem_has_common_switch";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_has_common_switch(fns::snd_mixer_selem_has_common_switch_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_has_common_switch>(elem);
}

namespace fns
{

using snd_mixer_selem_has_playback_switch_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_has_playback_switch
{
  const char* name = "snd_mixer_selem_has_playback_switch";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_has_playback_switch(fns::snd_mixer_selem_has_playback_switch_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_has_playback_switch>(elem);
}

namespace fns
{

using snd_mixer_selem_has_playback_switch_joined_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_has_playback_switch_joined
{
  const char* name = "snd_mixer_selem_has_playback_switch_joined";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_has_playback_switch_joined(fns::snd_mixer_selem_has_playback_switch_joined_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_has_playback_switch_joined>(elem);
}

namespace fns
{

using snd_mixer_selem_has_capture_switch_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_has_capture_switch
{
  const char* name = "snd_mixer_selem_has_capture_switch";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_has_capture_switch(fns::snd_mixer_selem_has_capture_switch_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_has_capture_switch>(elem);
}

namespace fns
{

using snd_mixer_selem_has_capture_switch_joined_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_has_capture_switch_joined
{
  const char* name = "snd_mixer_selem_has_capture_switch_joined";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_has_capture_switch_joined(fns::snd_mixer_selem_has_capture_switch_joined_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_has_capture_switch_joined>(elem);
}

namespace fns
{

using snd_mixer_selem_has_capture_switch_exclusive_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_has_capture_switch_exclusive
{
  const char* name = "snd_mixer_selem_has_capture_switch_exclusive";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_has_capture_switch_exclusive(fns::snd_mixer_selem_has_capture_switch_exclusive_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_has_capture_switch_exclusive>(elem);
}

namespace fns
{

using snd_mixer_selem_ask_playback_vol_dB_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_ask_playback_vol_dB_arg1_t = long;
using snd_mixer_selem_ask_playback_vol_dB_arg2_t = long *;
struct snd_mixer_selem_ask_playback_vol_dB
{
  const char* name = "snd_mixer_selem_ask_playback_vol_dB";
  const std::vector<const char*> args = {"elem", "value", "dBvalue"};
  using type = int(*)(snd_mixer_elem_t *, long, long *);
};

}

extern "C" int snd_mixer_selem_ask_playback_vol_dB(fns::snd_mixer_selem_ask_playback_vol_dB_arg0_t elem, fns::snd_mixer_selem_ask_playback_vol_dB_arg1_t value, fns::snd_mixer_selem_ask_playback_vol_dB_arg2_t dBvalue)
{
  return fns::call<fns::snd_mixer_selem_ask_playback_vol_dB>(elem, value, dBvalue);
}

namespace fns
{

using snd_mixer_selem_ask_capture_vol_dB_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_ask_capture_vol_dB_arg1_t = long;
using snd_mixer_selem_ask_capture_vol_dB_arg2_t = long *;
struct snd_mixer_selem_ask_capture_vol_dB
{
  const char* name = "snd_mixer_selem_ask_capture_vol_dB";
  const std::vector<const char*> args = {"elem", "value", "dBvalue"};
  using type = int(*)(snd_mixer_elem_t *, long, long *);
};

}

extern "C" int snd_mixer_selem_ask_capture_vol_dB(fns::snd_mixer_selem_ask_capture_vol_dB_arg0_t elem, fns::snd_mixer_selem_ask_capture_vol_dB_arg1_t value, fns::snd_mixer_selem_ask_capture_vol_dB_arg2_t dBvalue)
{
  return fns::call<fns::snd_mixer_selem_ask_capture_vol_dB>(elem, value, dBvalue);
}

namespace fns
{

using snd_mixer_selem_ask_playback_dB_vol_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_ask_playback_dB_vol_arg1_t = long;
using snd_mixer_selem_ask_playback_dB_vol_arg2_t = int;
using snd_mixer_selem_ask_playback_dB_vol_arg3_t = long *;
struct snd_mixer_selem_ask_playback_dB_vol
{
  const char* name = "snd_mixer_selem_ask_playback_dB_vol";
  const std::vector<const char*> args = {"elem", "dBvalue", "dir", "value"};
  using type = int(*)(snd_mixer_elem_t *, long, int, long *);
};

}

extern "C" int snd_mixer_selem_ask_playback_dB_vol(fns::snd_mixer_selem_ask_playback_dB_vol_arg0_t elem, fns::snd_mixer_selem_ask_playback_dB_vol_arg1_t dBvalue, fns::snd_mixer_selem_ask_playback_dB_vol_arg2_t dir, fns::snd_mixer_selem_ask_playback_dB_vol_arg3_t value)
{
  return fns::call<fns::snd_mixer_selem_ask_playback_dB_vol>(elem, dBvalue, dir, value);
}

namespace fns
{

using snd_mixer_selem_ask_capture_dB_vol_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_ask_capture_dB_vol_arg1_t = long;
using snd_mixer_selem_ask_capture_dB_vol_arg2_t = int;
using snd_mixer_selem_ask_capture_dB_vol_arg3_t = long *;
struct snd_mixer_selem_ask_capture_dB_vol
{
  const char* name = "snd_mixer_selem_ask_capture_dB_vol";
  const std::vector<const char*> args = {"elem", "dBvalue", "dir", "value"};
  using type = int(*)(snd_mixer_elem_t *, long, int, long *);
};

}

extern "C" int snd_mixer_selem_ask_capture_dB_vol(fns::snd_mixer_selem_ask_capture_dB_vol_arg0_t elem, fns::snd_mixer_selem_ask_capture_dB_vol_arg1_t dBvalue, fns::snd_mixer_selem_ask_capture_dB_vol_arg2_t dir, fns::snd_mixer_selem_ask_capture_dB_vol_arg3_t value)
{
  return fns::call<fns::snd_mixer_selem_ask_capture_dB_vol>(elem, dBvalue, dir, value);
}

namespace fns
{

using snd_mixer_selem_get_playback_volume_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_playback_volume_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_get_playback_volume_arg2_t = long *;
struct snd_mixer_selem_get_playback_volume
{
  const char* name = "snd_mixer_selem_get_playback_volume";
  const std::vector<const char*> args = {"elem", "channel", "value"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, long *);
};

}

extern "C" int snd_mixer_selem_get_playback_volume(fns::snd_mixer_selem_get_playback_volume_arg0_t elem, fns::snd_mixer_selem_get_playback_volume_arg1_t channel, fns::snd_mixer_selem_get_playback_volume_arg2_t value)
{
  return fns::call<fns::snd_mixer_selem_get_playback_volume>(elem, channel, value);
}

namespace fns
{

using snd_mixer_selem_get_capture_volume_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_capture_volume_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_get_capture_volume_arg2_t = long *;
struct snd_mixer_selem_get_capture_volume
{
  const char* name = "snd_mixer_selem_get_capture_volume";
  const std::vector<const char*> args = {"elem", "channel", "value"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, long *);
};

}

extern "C" int snd_mixer_selem_get_capture_volume(fns::snd_mixer_selem_get_capture_volume_arg0_t elem, fns::snd_mixer_selem_get_capture_volume_arg1_t channel, fns::snd_mixer_selem_get_capture_volume_arg2_t value)
{
  return fns::call<fns::snd_mixer_selem_get_capture_volume>(elem, channel, value);
}

namespace fns
{

using snd_mixer_selem_get_playback_dB_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_playback_dB_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_get_playback_dB_arg2_t = long *;
struct snd_mixer_selem_get_playback_dB
{
  const char* name = "snd_mixer_selem_get_playback_dB";
  const std::vector<const char*> args = {"elem", "channel", "value"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, long *);
};

}

extern "C" int snd_mixer_selem_get_playback_dB(fns::snd_mixer_selem_get_playback_dB_arg0_t elem, fns::snd_mixer_selem_get_playback_dB_arg1_t channel, fns::snd_mixer_selem_get_playback_dB_arg2_t value)
{
  return fns::call<fns::snd_mixer_selem_get_playback_dB>(elem, channel, value);
}

namespace fns
{

using snd_mixer_selem_get_capture_dB_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_capture_dB_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_get_capture_dB_arg2_t = long *;
struct snd_mixer_selem_get_capture_dB
{
  const char* name = "snd_mixer_selem_get_capture_dB";
  const std::vector<const char*> args = {"elem", "channel", "value"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, long *);
};

}

extern "C" int snd_mixer_selem_get_capture_dB(fns::snd_mixer_selem_get_capture_dB_arg0_t elem, fns::snd_mixer_selem_get_capture_dB_arg1_t channel, fns::snd_mixer_selem_get_capture_dB_arg2_t value)
{
  return fns::call<fns::snd_mixer_selem_get_capture_dB>(elem, channel, value);
}

namespace fns
{

using snd_mixer_selem_get_playback_switch_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_playback_switch_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_get_playback_switch_arg2_t = int *;
struct snd_mixer_selem_get_playback_switch
{
  const char* name = "snd_mixer_selem_get_playback_switch";
  const std::vector<const char*> args = {"elem", "channel", "value"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, int *);
};

}

extern "C" int snd_mixer_selem_get_playback_switch(fns::snd_mixer_selem_get_playback_switch_arg0_t elem, fns::snd_mixer_selem_get_playback_switch_arg1_t channel, fns::snd_mixer_selem_get_playback_switch_arg2_t value)
{
  return fns::call<fns::snd_mixer_selem_get_playback_switch>(elem, channel, value);
}

namespace fns
{

using snd_mixer_selem_get_capture_switch_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_capture_switch_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_get_capture_switch_arg2_t = int *;
struct snd_mixer_selem_get_capture_switch
{
  const char* name = "snd_mixer_selem_get_capture_switch";
  const std::vector<const char*> args = {"elem", "channel", "value"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, int *);
};

}

extern "C" int snd_mixer_selem_get_capture_switch(fns::snd_mixer_selem_get_capture_switch_arg0_t elem, fns::snd_mixer_selem_get_capture_switch_arg1_t channel, fns::snd_mixer_selem_get_capture_switch_arg2_t value)
{
  return fns::call<fns::snd_mixer_selem_get_capture_switch>(elem, channel, value);
}

namespace fns
{

using snd_mixer_selem_set_playback_volume_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_playback_volume_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_set_playback_volume_arg2_t = long;
struct snd_mixer_selem_set_playback_volume
{
  const char* name = "snd_mixer_selem_set_playback_volume";
  const std::vector<const char*> args = {"elem", "channel", "value"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, long);
};

}

extern "C" int snd_mixer_selem_set_playback_volume(fns::snd_mixer_selem_set_playback_volume_arg0_t elem, fns::snd_mixer_selem_set_playback_volume_arg1_t channel, fns::snd_mixer_selem_set_playback_volume_arg2_t value)
{
  return fns::call<fns::snd_mixer_selem_set_playback_volume>(elem, channel, value);
}

namespace fns
{

using snd_mixer_selem_set_capture_volume_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_capture_volume_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_set_capture_volume_arg2_t = long;
struct snd_mixer_selem_set_capture_volume
{
  const char* name = "snd_mixer_selem_set_capture_volume";
  const std::vector<const char*> args = {"elem", "channel", "value"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, long);
};

}

extern "C" int snd_mixer_selem_set_capture_volume(fns::snd_mixer_selem_set_capture_volume_arg0_t elem, fns::snd_mixer_selem_set_capture_volume_arg1_t channel, fns::snd_mixer_selem_set_capture_volume_arg2_t value)
{
  return fns::call<fns::snd_mixer_selem_set_capture_volume>(elem, channel, value);
}

namespace fns
{

using snd_mixer_selem_set_playback_dB_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_playback_dB_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_set_playback_dB_arg2_t = long;
using snd_mixer_selem_set_playback_dB_arg3_t = int;
struct snd_mixer_selem_set_playback_dB
{
  const char* name = "snd_mixer_selem_set_playback_dB";
  const std::vector<const char*> args = {"elem", "channel", "value", "dir"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, long, int);
};

}

extern "C" int snd_mixer_selem_set_playback_dB(fns::snd_mixer_selem_set_playback_dB_arg0_t elem, fns::snd_mixer_selem_set_playback_dB_arg1_t channel, fns::snd_mixer_selem_set_playback_dB_arg2_t value, fns::snd_mixer_selem_set_playback_dB_arg3_t dir)
{
  return fns::call<fns::snd_mixer_selem_set_playback_dB>(elem, channel, value, dir);
}

namespace fns
{

using snd_mixer_selem_set_capture_dB_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_capture_dB_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_set_capture_dB_arg2_t = long;
using snd_mixer_selem_set_capture_dB_arg3_t = int;
struct snd_mixer_selem_set_capture_dB
{
  const char* name = "snd_mixer_selem_set_capture_dB";
  const std::vector<const char*> args = {"elem", "channel", "value", "dir"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, long, int);
};

}

extern "C" int snd_mixer_selem_set_capture_dB(fns::snd_mixer_selem_set_capture_dB_arg0_t elem, fns::snd_mixer_selem_set_capture_dB_arg1_t channel, fns::snd_mixer_selem_set_capture_dB_arg2_t value, fns::snd_mixer_selem_set_capture_dB_arg3_t dir)
{
  return fns::call<fns::snd_mixer_selem_set_capture_dB>(elem, channel, value, dir);
}

namespace fns
{

using snd_mixer_selem_set_playback_volume_all_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_playback_volume_all_arg1_t = long;
struct snd_mixer_selem_set_playback_volume_all
{
  const char* name = "snd_mixer_selem_set_playback_volume_all";
  const std::vector<const char*> args = {"elem", "value"};
  using type = int(*)(snd_mixer_elem_t *, long);
};

}

extern "C" int snd_mixer_selem_set_playback_volume_all(fns::snd_mixer_selem_set_playback_volume_all_arg0_t elem, fns::snd_mixer_selem_set_playback_volume_all_arg1_t value)
{
  return fns::call<fns::snd_mixer_selem_set_playback_volume_all>(elem, value);
}

namespace fns
{

using snd_mixer_selem_set_capture_volume_all_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_capture_volume_all_arg1_t = long;
struct snd_mixer_selem_set_capture_volume_all
{
  const char* name = "snd_mixer_selem_set_capture_volume_all";
  const std::vector<const char*> args = {"elem", "value"};
  using type = int(*)(snd_mixer_elem_t *, long);
};

}

extern "C" int snd_mixer_selem_set_capture_volume_all(fns::snd_mixer_selem_set_capture_volume_all_arg0_t elem, fns::snd_mixer_selem_set_capture_volume_all_arg1_t value)
{
  return fns::call<fns::snd_mixer_selem_set_capture_volume_all>(elem, value);
}

namespace fns
{

using snd_mixer_selem_set_playback_dB_all_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_playback_dB_all_arg1_t = long;
using snd_mixer_selem_set_playback_dB_all_arg2_t = int;
struct snd_mixer_selem_set_playback_dB_all
{
  const char* name = "snd_mixer_selem_set_playback_dB_all";
  const std::vector<const char*> args = {"elem", "value", "dir"};
  using type = int(*)(snd_mixer_elem_t *, long, int);
};

}

extern "C" int snd_mixer_selem_set_playback_dB_all(fns::snd_mixer_selem_set_playback_dB_all_arg0_t elem, fns::snd_mixer_selem_set_playback_dB_all_arg1_t value, fns::snd_mixer_selem_set_playback_dB_all_arg2_t dir)
{
  return fns::call<fns::snd_mixer_selem_set_playback_dB_all>(elem, value, dir);
}

namespace fns
{

using snd_mixer_selem_set_capture_dB_all_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_capture_dB_all_arg1_t = long;
using snd_mixer_selem_set_capture_dB_all_arg2_t = int;
struct snd_mixer_selem_set_capture_dB_all
{
  const char* name = "snd_mixer_selem_set_capture_dB_all";
  const std::vector<const char*> args = {"elem", "value", "dir"};
  using type = int(*)(snd_mixer_elem_t *, long, int);
};

}

extern "C" int snd_mixer_selem_set_capture_dB_all(fns::snd_mixer_selem_set_capture_dB_all_arg0_t elem, fns::snd_mixer_selem_set_capture_dB_all_arg1_t value, fns::snd_mixer_selem_set_capture_dB_all_arg2_t dir)
{
  return fns::call<fns::snd_mixer_selem_set_capture_dB_all>(elem, value, dir);
}

namespace fns
{

using snd_mixer_selem_set_playback_switch_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_playback_switch_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_set_playback_switch_arg2_t = int;
struct snd_mixer_selem_set_playback_switch
{
  const char* name = "snd_mixer_selem_set_playback_switch";
  const std::vector<const char*> args = {"elem", "channel", "value"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, int);
};

}

extern "C" int snd_mixer_selem_set_playback_switch(fns::snd_mixer_selem_set_playback_switch_arg0_t elem, fns::snd_mixer_selem_set_playback_switch_arg1_t channel, fns::snd_mixer_selem_set_playback_switch_arg2_t value)
{
  return fns::call<fns::snd_mixer_selem_set_playback_switch>(elem, channel, value);
}

namespace fns
{

using snd_mixer_selem_set_capture_switch_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_capture_switch_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_set_capture_switch_arg2_t = int;
struct snd_mixer_selem_set_capture_switch
{
  const char* name = "snd_mixer_selem_set_capture_switch";
  const std::vector<const char*> args = {"elem", "channel", "value"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, int);
};

}

extern "C" int snd_mixer_selem_set_capture_switch(fns::snd_mixer_selem_set_capture_switch_arg0_t elem, fns::snd_mixer_selem_set_capture_switch_arg1_t channel, fns::snd_mixer_selem_set_capture_switch_arg2_t value)
{
  return fns::call<fns::snd_mixer_selem_set_capture_switch>(elem, channel, value);
}

namespace fns
{

using snd_mixer_selem_set_playback_switch_all_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_playback_switch_all_arg1_t = int;
struct snd_mixer_selem_set_playback_switch_all
{
  const char* name = "snd_mixer_selem_set_playback_switch_all";
  const std::vector<const char*> args = {"elem", "value"};
  using type = int(*)(snd_mixer_elem_t *, int);
};

}

extern "C" int snd_mixer_selem_set_playback_switch_all(fns::snd_mixer_selem_set_playback_switch_all_arg0_t elem, fns::snd_mixer_selem_set_playback_switch_all_arg1_t value)
{
  return fns::call<fns::snd_mixer_selem_set_playback_switch_all>(elem, value);
}

namespace fns
{

using snd_mixer_selem_set_capture_switch_all_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_capture_switch_all_arg1_t = int;
struct snd_mixer_selem_set_capture_switch_all
{
  const char* name = "snd_mixer_selem_set_capture_switch_all";
  const std::vector<const char*> args = {"elem", "value"};
  using type = int(*)(snd_mixer_elem_t *, int);
};

}

extern "C" int snd_mixer_selem_set_capture_switch_all(fns::snd_mixer_selem_set_capture_switch_all_arg0_t elem, fns::snd_mixer_selem_set_capture_switch_all_arg1_t value)
{
  return fns::call<fns::snd_mixer_selem_set_capture_switch_all>(elem, value);
}

namespace fns
{

using snd_mixer_selem_get_playback_volume_range_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_playback_volume_range_arg1_t = long *;
using snd_mixer_selem_get_playback_volume_range_arg2_t = long *;
struct snd_mixer_selem_get_playback_volume_range
{
  const char* name = "snd_mixer_selem_get_playback_volume_range";
  const std::vector<const char*> args = {"elem", "min", "max"};
  using type = int(*)(snd_mixer_elem_t *, long *, long *);
};

}

extern "C" int snd_mixer_selem_get_playback_volume_range(fns::snd_mixer_selem_get_playback_volume_range_arg0_t elem, fns::snd_mixer_selem_get_playback_volume_range_arg1_t min, fns::snd_mixer_selem_get_playback_volume_range_arg2_t max)
{
  return fns::call<fns::snd_mixer_selem_get_playback_volume_range>(elem, min, max);
}

namespace fns
{

using snd_mixer_selem_get_playback_dB_range_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_playback_dB_range_arg1_t = long *;
using snd_mixer_selem_get_playback_dB_range_arg2_t = long *;
struct snd_mixer_selem_get_playback_dB_range
{
  const char* name = "snd_mixer_selem_get_playback_dB_range";
  const std::vector<const char*> args = {"elem", "min", "max"};
  using type = int(*)(snd_mixer_elem_t *, long *, long *);
};

}

extern "C" int snd_mixer_selem_get_playback_dB_range(fns::snd_mixer_selem_get_playback_dB_range_arg0_t elem, fns::snd_mixer_selem_get_playback_dB_range_arg1_t min, fns::snd_mixer_selem_get_playback_dB_range_arg2_t max)
{
  return fns::call<fns::snd_mixer_selem_get_playback_dB_range>(elem, min, max);
}

namespace fns
{

using snd_mixer_selem_set_playback_volume_range_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_playback_volume_range_arg1_t = long;
using snd_mixer_selem_set_playback_volume_range_arg2_t = long;
struct snd_mixer_selem_set_playback_volume_range
{
  const char* name = "snd_mixer_selem_set_playback_volume_range";
  const std::vector<const char*> args = {"elem", "min", "max"};
  using type = int(*)(snd_mixer_elem_t *, long, long);
};

}

extern "C" int snd_mixer_selem_set_playback_volume_range(fns::snd_mixer_selem_set_playback_volume_range_arg0_t elem, fns::snd_mixer_selem_set_playback_volume_range_arg1_t min, fns::snd_mixer_selem_set_playback_volume_range_arg2_t max)
{
  return fns::call<fns::snd_mixer_selem_set_playback_volume_range>(elem, min, max);
}

namespace fns
{

using snd_mixer_selem_get_capture_volume_range_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_capture_volume_range_arg1_t = long *;
using snd_mixer_selem_get_capture_volume_range_arg2_t = long *;
struct snd_mixer_selem_get_capture_volume_range
{
  const char* name = "snd_mixer_selem_get_capture_volume_range";
  const std::vector<const char*> args = {"elem", "min", "max"};
  using type = int(*)(snd_mixer_elem_t *, long *, long *);
};

}

extern "C" int snd_mixer_selem_get_capture_volume_range(fns::snd_mixer_selem_get_capture_volume_range_arg0_t elem, fns::snd_mixer_selem_get_capture_volume_range_arg1_t min, fns::snd_mixer_selem_get_capture_volume_range_arg2_t max)
{
  return fns::call<fns::snd_mixer_selem_get_capture_volume_range>(elem, min, max);
}

namespace fns
{

using snd_mixer_selem_get_capture_dB_range_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_capture_dB_range_arg1_t = long *;
using snd_mixer_selem_get_capture_dB_range_arg2_t = long *;
struct snd_mixer_selem_get_capture_dB_range
{
  const char* name = "snd_mixer_selem_get_capture_dB_range";
  const std::vector<const char*> args = {"elem", "min", "max"};
  using type = int(*)(snd_mixer_elem_t *, long *, long *);
};

}

extern "C" int snd_mixer_selem_get_capture_dB_range(fns::snd_mixer_selem_get_capture_dB_range_arg0_t elem, fns::snd_mixer_selem_get_capture_dB_range_arg1_t min, fns::snd_mixer_selem_get_capture_dB_range_arg2_t max)
{
  return fns::call<fns::snd_mixer_selem_get_capture_dB_range>(elem, min, max);
}

namespace fns
{

using snd_mixer_selem_set_capture_volume_range_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_capture_volume_range_arg1_t = long;
using snd_mixer_selem_set_capture_volume_range_arg2_t = long;
struct snd_mixer_selem_set_capture_volume_range
{
  const char* name = "snd_mixer_selem_set_capture_volume_range";
  const std::vector<const char*> args = {"elem", "min", "max"};
  using type = int(*)(snd_mixer_elem_t *, long, long);
};

}

extern "C" int snd_mixer_selem_set_capture_volume_range(fns::snd_mixer_selem_set_capture_volume_range_arg0_t elem, fns::snd_mixer_selem_set_capture_volume_range_arg1_t min, fns::snd_mixer_selem_set_capture_volume_range_arg2_t max)
{
  return fns::call<fns::snd_mixer_selem_set_capture_volume_range>(elem, min, max);
}

namespace fns
{

using snd_mixer_selem_is_enumerated_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_is_enumerated
{
  const char* name = "snd_mixer_selem_is_enumerated";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_is_enumerated(fns::snd_mixer_selem_is_enumerated_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_is_enumerated>(elem);
}

namespace fns
{

using snd_mixer_selem_is_enum_playback_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_is_enum_playback
{
  const char* name = "snd_mixer_selem_is_enum_playback";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_is_enum_playback(fns::snd_mixer_selem_is_enum_playback_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_is_enum_playback>(elem);
}

namespace fns
{

using snd_mixer_selem_is_enum_capture_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_is_enum_capture
{
  const char* name = "snd_mixer_selem_is_enum_capture";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_is_enum_capture(fns::snd_mixer_selem_is_enum_capture_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_is_enum_capture>(elem);
}

namespace fns
{

using snd_mixer_selem_get_enum_items_arg0_t = snd_mixer_elem_t *;
struct snd_mixer_selem_get_enum_items
{
  const char* name = "snd_mixer_selem_get_enum_items";
  const std::vector<const char*> args = {"elem"};
  using type = int(*)(snd_mixer_elem_t *);
};

}

extern "C" int snd_mixer_selem_get_enum_items(fns::snd_mixer_selem_get_enum_items_arg0_t elem)
{
  return fns::call<fns::snd_mixer_selem_get_enum_items>(elem);
}

namespace fns
{

using snd_mixer_selem_get_enum_item_name_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_enum_item_name_arg1_t = unsigned int;
using snd_mixer_selem_get_enum_item_name_arg2_t = size_t;
using snd_mixer_selem_get_enum_item_name_arg3_t = char *;
struct snd_mixer_selem_get_enum_item_name
{
  const char* name = "snd_mixer_selem_get_enum_item_name";
  const std::vector<const char*> args = {"elem", "idx", "maxlen", "str"};
  using type = int(*)(snd_mixer_elem_t *, unsigned int, size_t, char *);
};

}

extern "C" int snd_mixer_selem_get_enum_item_name(fns::snd_mixer_selem_get_enum_item_name_arg0_t elem, fns::snd_mixer_selem_get_enum_item_name_arg1_t idx, fns::snd_mixer_selem_get_enum_item_name_arg2_t maxlen, fns::snd_mixer_selem_get_enum_item_name_arg3_t str)
{
  return fns::call<fns::snd_mixer_selem_get_enum_item_name>(elem, idx, maxlen, str);
}

namespace fns
{

using snd_mixer_selem_get_enum_item_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_get_enum_item_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_get_enum_item_arg2_t = unsigned int *;
struct snd_mixer_selem_get_enum_item
{
  const char* name = "snd_mixer_selem_get_enum_item";
  const std::vector<const char*> args = {"elem", "channel", "idxp"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, unsigned int *);
};

}

extern "C" int snd_mixer_selem_get_enum_item(fns::snd_mixer_selem_get_enum_item_arg0_t elem, fns::snd_mixer_selem_get_enum_item_arg1_t channel, fns::snd_mixer_selem_get_enum_item_arg2_t idxp)
{
  return fns::call<fns::snd_mixer_selem_get_enum_item>(elem, channel, idxp);
}

namespace fns
{

using snd_mixer_selem_set_enum_item_arg0_t = snd_mixer_elem_t *;
using snd_mixer_selem_set_enum_item_arg1_t = snd_mixer_selem_channel_id_t;
using snd_mixer_selem_set_enum_item_arg2_t = unsigned int;
struct snd_mixer_selem_set_enum_item
{
  const char* name = "snd_mixer_selem_set_enum_item";
  const std::vector<const char*> args = {"elem", "channel", "idx"};
  using type = int(*)(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, unsigned int);
};

}

extern "C" int snd_mixer_selem_set_enum_item(fns::snd_mixer_selem_set_enum_item_arg0_t elem, fns::snd_mixer_selem_set_enum_item_arg1_t channel, fns::snd_mixer_selem_set_enum_item_arg2_t idx)
{
  return fns::call<fns::snd_mixer_selem_set_enum_item>(elem, channel, idx);
}

namespace fns
{

struct snd_mixer_selem_id_sizeof
{
  const char* name = "snd_mixer_selem_id_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_mixer_selem_id_sizeof()
{
  return fns::call<fns::snd_mixer_selem_id_sizeof>();
}

namespace fns
{

using snd_mixer_selem_id_malloc_arg0_t = snd_mixer_selem_id_t **;
struct snd_mixer_selem_id_malloc
{
  const char* name = "snd_mixer_selem_id_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_mixer_selem_id_t **);
};

}

extern "C" int snd_mixer_selem_id_malloc(fns::snd_mixer_selem_id_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_mixer_selem_id_malloc>(ptr);
}

namespace fns
{

using snd_mixer_selem_id_free_arg0_t = snd_mixer_selem_id_t *;
struct snd_mixer_selem_id_free
{
  const char* name = "snd_mixer_selem_id_free";
  const std::vector<const char*> args = {"obj"};
  using type = void(*)(snd_mixer_selem_id_t *);
};

}

extern "C" void snd_mixer_selem_id_free(fns::snd_mixer_selem_id_free_arg0_t obj)
{
  return fns::call_void<fns::snd_mixer_selem_id_free>(obj);
}

namespace fns
{

using snd_mixer_selem_id_copy_arg0_t = snd_mixer_selem_id_t *;
using snd_mixer_selem_id_copy_arg1_t = const snd_mixer_selem_id_t *;
struct snd_mixer_selem_id_copy
{
  const char* name = "snd_mixer_selem_id_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_mixer_selem_id_t *, const snd_mixer_selem_id_t *);
};

}

extern "C" void snd_mixer_selem_id_copy(fns::snd_mixer_selem_id_copy_arg0_t dst, fns::snd_mixer_selem_id_copy_arg1_t src)
{
  return fns::call_void<fns::snd_mixer_selem_id_copy>(dst, src);
}

namespace fns
{

using snd_mixer_selem_id_get_name_arg0_t = const snd_mixer_selem_id_t *;
struct snd_mixer_selem_id_get_name
{
  const char* name = "snd_mixer_selem_id_get_name";
  const std::vector<const char*> args = {"obj"};
  using type = const char *(*)(const snd_mixer_selem_id_t *);
};

}

extern "C" const char * snd_mixer_selem_id_get_name(fns::snd_mixer_selem_id_get_name_arg0_t obj)
{
  return fns::call<fns::snd_mixer_selem_id_get_name>(obj);
}

namespace fns
{

using snd_mixer_selem_id_get_index_arg0_t = const snd_mixer_selem_id_t *;
struct snd_mixer_selem_id_get_index
{
  const char* name = "snd_mixer_selem_id_get_index";
  const std::vector<const char*> args = {"obj"};
  using type = unsigned int(*)(const snd_mixer_selem_id_t *);
};

}

extern "C" unsigned int snd_mixer_selem_id_get_index(fns::snd_mixer_selem_id_get_index_arg0_t obj)
{
  return fns::call<fns::snd_mixer_selem_id_get_index>(obj);
}

namespace fns
{

using snd_mixer_selem_id_set_name_arg0_t = snd_mixer_selem_id_t *;
using snd_mixer_selem_id_set_name_arg1_t = const char *;
struct snd_mixer_selem_id_set_name
{
  const char* name = "snd_mixer_selem_id_set_name";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_mixer_selem_id_t *, const char *);
};

}

extern "C" void snd_mixer_selem_id_set_name(fns::snd_mixer_selem_id_set_name_arg0_t obj, fns::snd_mixer_selem_id_set_name_arg1_t val)
{
  return fns::call_void<fns::snd_mixer_selem_id_set_name>(obj, val);
}

namespace fns
{

using snd_mixer_selem_id_set_index_arg0_t = snd_mixer_selem_id_t *;
using snd_mixer_selem_id_set_index_arg1_t = unsigned int;
struct snd_mixer_selem_id_set_index
{
  const char* name = "snd_mixer_selem_id_set_index";
  const std::vector<const char*> args = {"obj", "val"};
  using type = void(*)(snd_mixer_selem_id_t *, unsigned int);
};

}

extern "C" void snd_mixer_selem_id_set_index(fns::snd_mixer_selem_id_set_index_arg0_t obj, fns::snd_mixer_selem_id_set_index_arg1_t val)
{
  return fns::call_void<fns::snd_mixer_selem_id_set_index>(obj, val);
}

namespace fns
{

using snd_seq_open_arg0_t = snd_seq_t **;
using snd_seq_open_arg1_t = const char *;
using snd_seq_open_arg2_t = int;
using snd_seq_open_arg3_t = int;
struct snd_seq_open
{
  const char* name = "snd_seq_open";
  const std::vector<const char*> args = {"handle", "name", "streams", "mode"};
  using type = int(*)(snd_seq_t **, const char *, int, int);
};

}

extern "C" int snd_seq_open(fns::snd_seq_open_arg0_t handle, fns::snd_seq_open_arg1_t name, fns::snd_seq_open_arg2_t streams, fns::snd_seq_open_arg3_t mode)
{
  return fns::call<fns::snd_seq_open>(handle, name, streams, mode);
}

namespace fns
{

using snd_seq_open_lconf_arg0_t = snd_seq_t **;
using snd_seq_open_lconf_arg1_t = const char *;
using snd_seq_open_lconf_arg2_t = int;
using snd_seq_open_lconf_arg3_t = int;
using snd_seq_open_lconf_arg4_t = snd_config_t *;
struct snd_seq_open_lconf
{
  const char* name = "snd_seq_open_lconf";
  const std::vector<const char*> args = {"handle", "name", "streams", "mode", "lconf"};
  using type = int(*)(snd_seq_t **, const char *, int, int, snd_config_t *);
};

}

extern "C" int snd_seq_open_lconf(fns::snd_seq_open_lconf_arg0_t handle, fns::snd_seq_open_lconf_arg1_t name, fns::snd_seq_open_lconf_arg2_t streams, fns::snd_seq_open_lconf_arg3_t mode, fns::snd_seq_open_lconf_arg4_t lconf)
{
  return fns::call<fns::snd_seq_open_lconf>(handle, name, streams, mode, lconf);
}

namespace fns
{

using snd_seq_name_arg0_t = snd_seq_t *;
struct snd_seq_name
{
  const char* name = "snd_seq_name";
  const std::vector<const char*> args = {"seq"};
  using type = const char *(*)(snd_seq_t *);
};

}

extern "C" const char * snd_seq_name(fns::snd_seq_name_arg0_t seq)
{
  return fns::call<fns::snd_seq_name>(seq);
}

namespace fns
{

using snd_seq_type_arg0_t = snd_seq_t *;
struct snd_seq_type
{
  const char* name = "snd_seq_type";
  const std::vector<const char*> args = {"seq"};
  using type = snd_seq_type_t(*)(snd_seq_t *);
};

}

extern "C" snd_seq_type_t snd_seq_type(fns::snd_seq_type_arg0_t seq)
{
  return fns::call<fns::snd_seq_type>(seq);
}

namespace fns
{

using snd_seq_close_arg0_t = snd_seq_t *;
struct snd_seq_close
{
  const char* name = "snd_seq_close";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_seq_t *);
};

}

extern "C" int snd_seq_close(fns::snd_seq_close_arg0_t handle)
{
  return fns::call<fns::snd_seq_close>(handle);
}

namespace fns
{

using snd_seq_poll_descriptors_count_arg0_t = snd_seq_t *;
using snd_seq_poll_descriptors_count_arg1_t = short;
struct snd_seq_poll_descriptors_count
{
  const char* name = "snd_seq_poll_descriptors_count";
  const std::vector<const char*> args = {"handle", "events"};
  using type = int(*)(snd_seq_t *, short);
};

}

extern "C" int snd_seq_poll_descriptors_count(fns::snd_seq_poll_descriptors_count_arg0_t handle, fns::snd_seq_poll_descriptors_count_arg1_t events)
{
  return fns::call<fns::snd_seq_poll_descriptors_count>(handle, events);
}

namespace fns
{

using snd_seq_poll_descriptors_arg0_t = snd_seq_t *;
using snd_seq_poll_descriptors_arg1_t = struct pollfd *;
using snd_seq_poll_descriptors_arg2_t = unsigned int;
using snd_seq_poll_descriptors_arg3_t = short;
struct snd_seq_poll_descriptors
{
  const char* name = "snd_seq_poll_descriptors";
  const std::vector<const char*> args = {"handle", "pfds", "space", "events"};
  using type = int(*)(snd_seq_t *, struct pollfd *, unsigned int, short);
};

}

extern "C" int snd_seq_poll_descriptors(fns::snd_seq_poll_descriptors_arg0_t handle, fns::snd_seq_poll_descriptors_arg1_t pfds, fns::snd_seq_poll_descriptors_arg2_t space, fns::snd_seq_poll_descriptors_arg3_t events)
{
  return fns::call<fns::snd_seq_poll_descriptors>(handle, pfds, space, events);
}

namespace fns
{

using snd_seq_poll_descriptors_revents_arg0_t = snd_seq_t *;
using snd_seq_poll_descriptors_revents_arg1_t = struct pollfd *;
using snd_seq_poll_descriptors_revents_arg2_t = unsigned int;
using snd_seq_poll_descriptors_revents_arg3_t = unsigned short *;
struct snd_seq_poll_descriptors_revents
{
  const char* name = "snd_seq_poll_descriptors_revents";
  const std::vector<const char*> args = {"seq", "pfds", "nfds", "revents"};
  using type = int(*)(snd_seq_t *, struct pollfd *, unsigned int, unsigned short *);
};

}

extern "C" int snd_seq_poll_descriptors_revents(fns::snd_seq_poll_descriptors_revents_arg0_t seq, fns::snd_seq_poll_descriptors_revents_arg1_t pfds, fns::snd_seq_poll_descriptors_revents_arg2_t nfds, fns::snd_seq_poll_descriptors_revents_arg3_t revents)
{
  return fns::call<fns::snd_seq_poll_descriptors_revents>(seq, pfds, nfds, revents);
}

namespace fns
{

using snd_seq_nonblock_arg0_t = snd_seq_t *;
using snd_seq_nonblock_arg1_t = int;
struct snd_seq_nonblock
{
  const char* name = "snd_seq_nonblock";
  const std::vector<const char*> args = {"handle", "nonblock"};
  using type = int(*)(snd_seq_t *, int);
};

}

extern "C" int snd_seq_nonblock(fns::snd_seq_nonblock_arg0_t handle, fns::snd_seq_nonblock_arg1_t nonblock)
{
  return fns::call<fns::snd_seq_nonblock>(handle, nonblock);
}

namespace fns
{

using snd_seq_client_id_arg0_t = snd_seq_t *;
struct snd_seq_client_id
{
  const char* name = "snd_seq_client_id";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_seq_t *);
};

}

extern "C" int snd_seq_client_id(fns::snd_seq_client_id_arg0_t handle)
{
  return fns::call<fns::snd_seq_client_id>(handle);
}

namespace fns
{

using snd_seq_get_output_buffer_size_arg0_t = snd_seq_t *;
struct snd_seq_get_output_buffer_size
{
  const char* name = "snd_seq_get_output_buffer_size";
  const std::vector<const char*> args = {"handle"};
  using type = size_t(*)(snd_seq_t *);
};

}

extern "C" size_t snd_seq_get_output_buffer_size(fns::snd_seq_get_output_buffer_size_arg0_t handle)
{
  return fns::call<fns::snd_seq_get_output_buffer_size>(handle);
}

namespace fns
{

using snd_seq_get_input_buffer_size_arg0_t = snd_seq_t *;
struct snd_seq_get_input_buffer_size
{
  const char* name = "snd_seq_get_input_buffer_size";
  const std::vector<const char*> args = {"handle"};
  using type = size_t(*)(snd_seq_t *);
};

}

extern "C" size_t snd_seq_get_input_buffer_size(fns::snd_seq_get_input_buffer_size_arg0_t handle)
{
  return fns::call<fns::snd_seq_get_input_buffer_size>(handle);
}

namespace fns
{

using snd_seq_set_output_buffer_size_arg0_t = snd_seq_t *;
using snd_seq_set_output_buffer_size_arg1_t = size_t;
struct snd_seq_set_output_buffer_size
{
  const char* name = "snd_seq_set_output_buffer_size";
  const std::vector<const char*> args = {"handle", "size"};
  using type = int(*)(snd_seq_t *, size_t);
};

}

extern "C" int snd_seq_set_output_buffer_size(fns::snd_seq_set_output_buffer_size_arg0_t handle, fns::snd_seq_set_output_buffer_size_arg1_t size)
{
  return fns::call<fns::snd_seq_set_output_buffer_size>(handle, size);
}

namespace fns
{

using snd_seq_set_input_buffer_size_arg0_t = snd_seq_t *;
using snd_seq_set_input_buffer_size_arg1_t = size_t;
struct snd_seq_set_input_buffer_size
{
  const char* name = "snd_seq_set_input_buffer_size";
  const std::vector<const char*> args = {"handle", "size"};
  using type = int(*)(snd_seq_t *, size_t);
};

}

extern "C" int snd_seq_set_input_buffer_size(fns::snd_seq_set_input_buffer_size_arg0_t handle, fns::snd_seq_set_input_buffer_size_arg1_t size)
{
  return fns::call<fns::snd_seq_set_input_buffer_size>(handle, size);
}

namespace fns
{

struct snd_seq_system_info_sizeof
{
  const char* name = "snd_seq_system_info_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_seq_system_info_sizeof()
{
  return fns::call<fns::snd_seq_system_info_sizeof>();
}

namespace fns
{

using snd_seq_system_info_malloc_arg0_t = snd_seq_system_info_t **;
struct snd_seq_system_info_malloc
{
  const char* name = "snd_seq_system_info_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_seq_system_info_t **);
};

}

extern "C" int snd_seq_system_info_malloc(fns::snd_seq_system_info_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_seq_system_info_malloc>(ptr);
}

namespace fns
{

using snd_seq_system_info_free_arg0_t = snd_seq_system_info_t *;
struct snd_seq_system_info_free
{
  const char* name = "snd_seq_system_info_free";
  const std::vector<const char*> args = {"ptr"};
  using type = void(*)(snd_seq_system_info_t *);
};

}

extern "C" void snd_seq_system_info_free(fns::snd_seq_system_info_free_arg0_t ptr)
{
  return fns::call_void<fns::snd_seq_system_info_free>(ptr);
}

namespace fns
{

using snd_seq_system_info_copy_arg0_t = snd_seq_system_info_t *;
using snd_seq_system_info_copy_arg1_t = const snd_seq_system_info_t *;
struct snd_seq_system_info_copy
{
  const char* name = "snd_seq_system_info_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_seq_system_info_t *, const snd_seq_system_info_t *);
};

}

extern "C" void snd_seq_system_info_copy(fns::snd_seq_system_info_copy_arg0_t dst, fns::snd_seq_system_info_copy_arg1_t src)
{
  return fns::call_void<fns::snd_seq_system_info_copy>(dst, src);
}

namespace fns
{

using snd_seq_system_info_get_queues_arg0_t = const snd_seq_system_info_t *;
struct snd_seq_system_info_get_queues
{
  const char* name = "snd_seq_system_info_get_queues";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_system_info_t *);
};

}

extern "C" int snd_seq_system_info_get_queues(fns::snd_seq_system_info_get_queues_arg0_t info)
{
  return fns::call<fns::snd_seq_system_info_get_queues>(info);
}

namespace fns
{

using snd_seq_system_info_get_clients_arg0_t = const snd_seq_system_info_t *;
struct snd_seq_system_info_get_clients
{
  const char* name = "snd_seq_system_info_get_clients";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_system_info_t *);
};

}

extern "C" int snd_seq_system_info_get_clients(fns::snd_seq_system_info_get_clients_arg0_t info)
{
  return fns::call<fns::snd_seq_system_info_get_clients>(info);
}

namespace fns
{

using snd_seq_system_info_get_ports_arg0_t = const snd_seq_system_info_t *;
struct snd_seq_system_info_get_ports
{
  const char* name = "snd_seq_system_info_get_ports";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_system_info_t *);
};

}

extern "C" int snd_seq_system_info_get_ports(fns::snd_seq_system_info_get_ports_arg0_t info)
{
  return fns::call<fns::snd_seq_system_info_get_ports>(info);
}

namespace fns
{

using snd_seq_system_info_get_channels_arg0_t = const snd_seq_system_info_t *;
struct snd_seq_system_info_get_channels
{
  const char* name = "snd_seq_system_info_get_channels";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_system_info_t *);
};

}

extern "C" int snd_seq_system_info_get_channels(fns::snd_seq_system_info_get_channels_arg0_t info)
{
  return fns::call<fns::snd_seq_system_info_get_channels>(info);
}

namespace fns
{

using snd_seq_system_info_get_cur_clients_arg0_t = const snd_seq_system_info_t *;
struct snd_seq_system_info_get_cur_clients
{
  const char* name = "snd_seq_system_info_get_cur_clients";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_system_info_t *);
};

}

extern "C" int snd_seq_system_info_get_cur_clients(fns::snd_seq_system_info_get_cur_clients_arg0_t info)
{
  return fns::call<fns::snd_seq_system_info_get_cur_clients>(info);
}

namespace fns
{

using snd_seq_system_info_get_cur_queues_arg0_t = const snd_seq_system_info_t *;
struct snd_seq_system_info_get_cur_queues
{
  const char* name = "snd_seq_system_info_get_cur_queues";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_system_info_t *);
};

}

extern "C" int snd_seq_system_info_get_cur_queues(fns::snd_seq_system_info_get_cur_queues_arg0_t info)
{
  return fns::call<fns::snd_seq_system_info_get_cur_queues>(info);
}

namespace fns
{

using snd_seq_system_info_arg0_t = snd_seq_t *;
using snd_seq_system_info_arg1_t = snd_seq_system_info_t *;
struct snd_seq_system_info
{
  const char* name = "snd_seq_system_info";
  const std::vector<const char*> args = {"handle", "info"};
  using type = int(*)(snd_seq_t *, snd_seq_system_info_t *);
};

}

extern "C" int snd_seq_system_info(fns::snd_seq_system_info_arg0_t handle, fns::snd_seq_system_info_arg1_t info)
{
  return fns::call<fns::snd_seq_system_info>(handle, info);
}

namespace fns
{

struct snd_seq_client_info_sizeof
{
  const char* name = "snd_seq_client_info_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_seq_client_info_sizeof()
{
  return fns::call<fns::snd_seq_client_info_sizeof>();
}

namespace fns
{

using snd_seq_client_info_malloc_arg0_t = snd_seq_client_info_t **;
struct snd_seq_client_info_malloc
{
  const char* name = "snd_seq_client_info_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_seq_client_info_t **);
};

}

extern "C" int snd_seq_client_info_malloc(fns::snd_seq_client_info_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_seq_client_info_malloc>(ptr);
}

namespace fns
{

using snd_seq_client_info_free_arg0_t = snd_seq_client_info_t *;
struct snd_seq_client_info_free
{
  const char* name = "snd_seq_client_info_free";
  const std::vector<const char*> args = {"ptr"};
  using type = void(*)(snd_seq_client_info_t *);
};

}

extern "C" void snd_seq_client_info_free(fns::snd_seq_client_info_free_arg0_t ptr)
{
  return fns::call_void<fns::snd_seq_client_info_free>(ptr);
}

namespace fns
{

using snd_seq_client_info_copy_arg0_t = snd_seq_client_info_t *;
using snd_seq_client_info_copy_arg1_t = const snd_seq_client_info_t *;
struct snd_seq_client_info_copy
{
  const char* name = "snd_seq_client_info_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_seq_client_info_t *, const snd_seq_client_info_t *);
};

}

extern "C" void snd_seq_client_info_copy(fns::snd_seq_client_info_copy_arg0_t dst, fns::snd_seq_client_info_copy_arg1_t src)
{
  return fns::call_void<fns::snd_seq_client_info_copy>(dst, src);
}

namespace fns
{

using snd_seq_client_info_get_client_arg0_t = const snd_seq_client_info_t *;
struct snd_seq_client_info_get_client
{
  const char* name = "snd_seq_client_info_get_client";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_client_info_t *);
};

}

extern "C" int snd_seq_client_info_get_client(fns::snd_seq_client_info_get_client_arg0_t info)
{
  return fns::call<fns::snd_seq_client_info_get_client>(info);
}

namespace fns
{

using snd_seq_client_info_get_type_arg0_t = const snd_seq_client_info_t *;
struct snd_seq_client_info_get_type
{
  const char* name = "snd_seq_client_info_get_type";
  const std::vector<const char*> args = {"info"};
  using type = snd_seq_client_type_t(*)(const snd_seq_client_info_t *);
};

}

extern "C" snd_seq_client_type_t snd_seq_client_info_get_type(fns::snd_seq_client_info_get_type_arg0_t info)
{
  return fns::call<fns::snd_seq_client_info_get_type>(info);
}

namespace fns
{

using snd_seq_client_info_get_name_arg0_t = snd_seq_client_info_t *;
struct snd_seq_client_info_get_name
{
  const char* name = "snd_seq_client_info_get_name";
  const std::vector<const char*> args = {"info"};
  using type = const char *(*)(snd_seq_client_info_t *);
};

}

extern "C" const char * snd_seq_client_info_get_name(fns::snd_seq_client_info_get_name_arg0_t info)
{
  return fns::call<fns::snd_seq_client_info_get_name>(info);
}

namespace fns
{

using snd_seq_client_info_get_broadcast_filter_arg0_t = const snd_seq_client_info_t *;
struct snd_seq_client_info_get_broadcast_filter
{
  const char* name = "snd_seq_client_info_get_broadcast_filter";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_client_info_t *);
};

}

extern "C" int snd_seq_client_info_get_broadcast_filter(fns::snd_seq_client_info_get_broadcast_filter_arg0_t info)
{
  return fns::call<fns::snd_seq_client_info_get_broadcast_filter>(info);
}

namespace fns
{

using snd_seq_client_info_get_error_bounce_arg0_t = const snd_seq_client_info_t *;
struct snd_seq_client_info_get_error_bounce
{
  const char* name = "snd_seq_client_info_get_error_bounce";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_client_info_t *);
};

}

extern "C" int snd_seq_client_info_get_error_bounce(fns::snd_seq_client_info_get_error_bounce_arg0_t info)
{
  return fns::call<fns::snd_seq_client_info_get_error_bounce>(info);
}

namespace fns
{

using snd_seq_client_info_get_event_filter_arg0_t = const snd_seq_client_info_t *;
struct snd_seq_client_info_get_event_filter
{
  const char* name = "snd_seq_client_info_get_event_filter";
  const std::vector<const char*> args = {"info"};
  using type = const unsigned char *(*)(const snd_seq_client_info_t *);
};

}

extern "C" const unsigned char * snd_seq_client_info_get_event_filter(fns::snd_seq_client_info_get_event_filter_arg0_t info)
{
  return fns::call<fns::snd_seq_client_info_get_event_filter>(info);
}

namespace fns
{

using snd_seq_client_info_get_num_ports_arg0_t = const snd_seq_client_info_t *;
struct snd_seq_client_info_get_num_ports
{
  const char* name = "snd_seq_client_info_get_num_ports";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_client_info_t *);
};

}

extern "C" int snd_seq_client_info_get_num_ports(fns::snd_seq_client_info_get_num_ports_arg0_t info)
{
  return fns::call<fns::snd_seq_client_info_get_num_ports>(info);
}

namespace fns
{

using snd_seq_client_info_get_event_lost_arg0_t = const snd_seq_client_info_t *;
struct snd_seq_client_info_get_event_lost
{
  const char* name = "snd_seq_client_info_get_event_lost";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_client_info_t *);
};

}

extern "C" int snd_seq_client_info_get_event_lost(fns::snd_seq_client_info_get_event_lost_arg0_t info)
{
  return fns::call<fns::snd_seq_client_info_get_event_lost>(info);
}

namespace fns
{

using snd_seq_client_info_set_client_arg0_t = snd_seq_client_info_t *;
using snd_seq_client_info_set_client_arg1_t = int;
struct snd_seq_client_info_set_client
{
  const char* name = "snd_seq_client_info_set_client";
  const std::vector<const char*> args = {"info", "client"};
  using type = void(*)(snd_seq_client_info_t *, int);
};

}

extern "C" void snd_seq_client_info_set_client(fns::snd_seq_client_info_set_client_arg0_t info, fns::snd_seq_client_info_set_client_arg1_t client)
{
  return fns::call_void<fns::snd_seq_client_info_set_client>(info, client);
}

namespace fns
{

using snd_seq_client_info_set_name_arg0_t = snd_seq_client_info_t *;
using snd_seq_client_info_set_name_arg1_t = const char *;
struct snd_seq_client_info_set_name
{
  const char* name = "snd_seq_client_info_set_name";
  const std::vector<const char*> args = {"info", "name"};
  using type = void(*)(snd_seq_client_info_t *, const char *);
};

}

extern "C" void snd_seq_client_info_set_name(fns::snd_seq_client_info_set_name_arg0_t info, fns::snd_seq_client_info_set_name_arg1_t name)
{
  return fns::call_void<fns::snd_seq_client_info_set_name>(info, name);
}

namespace fns
{

using snd_seq_client_info_set_broadcast_filter_arg0_t = snd_seq_client_info_t *;
using snd_seq_client_info_set_broadcast_filter_arg1_t = int;
struct snd_seq_client_info_set_broadcast_filter
{
  const char* name = "snd_seq_client_info_set_broadcast_filter";
  const std::vector<const char*> args = {"info", "val"};
  using type = void(*)(snd_seq_client_info_t *, int);
};

}

extern "C" void snd_seq_client_info_set_broadcast_filter(fns::snd_seq_client_info_set_broadcast_filter_arg0_t info, fns::snd_seq_client_info_set_broadcast_filter_arg1_t val)
{
  return fns::call_void<fns::snd_seq_client_info_set_broadcast_filter>(info, val);
}

namespace fns
{

using snd_seq_client_info_set_error_bounce_arg0_t = snd_seq_client_info_t *;
using snd_seq_client_info_set_error_bounce_arg1_t = int;
struct snd_seq_client_info_set_error_bounce
{
  const char* name = "snd_seq_client_info_set_error_bounce";
  const std::vector<const char*> args = {"info", "val"};
  using type = void(*)(snd_seq_client_info_t *, int);
};

}

extern "C" void snd_seq_client_info_set_error_bounce(fns::snd_seq_client_info_set_error_bounce_arg0_t info, fns::snd_seq_client_info_set_error_bounce_arg1_t val)
{
  return fns::call_void<fns::snd_seq_client_info_set_error_bounce>(info, val);
}

namespace fns
{

using snd_seq_client_info_set_event_filter_arg0_t = snd_seq_client_info_t *;
using snd_seq_client_info_set_event_filter_arg1_t = unsigned char *;
struct snd_seq_client_info_set_event_filter
{
  const char* name = "snd_seq_client_info_set_event_filter";
  const std::vector<const char*> args = {"info", "filter"};
  using type = void(*)(snd_seq_client_info_t *, unsigned char *);
};

}

extern "C" void snd_seq_client_info_set_event_filter(fns::snd_seq_client_info_set_event_filter_arg0_t info, fns::snd_seq_client_info_set_event_filter_arg1_t filter)
{
  return fns::call_void<fns::snd_seq_client_info_set_event_filter>(info, filter);
}

namespace fns
{

using snd_seq_client_info_event_filter_clear_arg0_t = snd_seq_client_info_t *;
struct snd_seq_client_info_event_filter_clear
{
  const char* name = "snd_seq_client_info_event_filter_clear";
  const std::vector<const char*> args = {"info"};
  using type = void(*)(snd_seq_client_info_t *);
};

}

extern "C" void snd_seq_client_info_event_filter_clear(fns::snd_seq_client_info_event_filter_clear_arg0_t info)
{
  return fns::call_void<fns::snd_seq_client_info_event_filter_clear>(info);
}

namespace fns
{

using snd_seq_client_info_event_filter_add_arg0_t = snd_seq_client_info_t *;
using snd_seq_client_info_event_filter_add_arg1_t = int;
struct snd_seq_client_info_event_filter_add
{
  const char* name = "snd_seq_client_info_event_filter_add";
  const std::vector<const char*> args = {"info", "event_type"};
  using type = void(*)(snd_seq_client_info_t *, int);
};

}

extern "C" void snd_seq_client_info_event_filter_add(fns::snd_seq_client_info_event_filter_add_arg0_t info, fns::snd_seq_client_info_event_filter_add_arg1_t event_type)
{
  return fns::call_void<fns::snd_seq_client_info_event_filter_add>(info, event_type);
}

namespace fns
{

using snd_seq_client_info_event_filter_del_arg0_t = snd_seq_client_info_t *;
using snd_seq_client_info_event_filter_del_arg1_t = int;
struct snd_seq_client_info_event_filter_del
{
  const char* name = "snd_seq_client_info_event_filter_del";
  const std::vector<const char*> args = {"info", "event_type"};
  using type = void(*)(snd_seq_client_info_t *, int);
};

}

extern "C" void snd_seq_client_info_event_filter_del(fns::snd_seq_client_info_event_filter_del_arg0_t info, fns::snd_seq_client_info_event_filter_del_arg1_t event_type)
{
  return fns::call_void<fns::snd_seq_client_info_event_filter_del>(info, event_type);
}

namespace fns
{

using snd_seq_client_info_event_filter_check_arg0_t = snd_seq_client_info_t *;
using snd_seq_client_info_event_filter_check_arg1_t = int;
struct snd_seq_client_info_event_filter_check
{
  const char* name = "snd_seq_client_info_event_filter_check";
  const std::vector<const char*> args = {"info", "event_type"};
  using type = int(*)(snd_seq_client_info_t *, int);
};

}

extern "C" int snd_seq_client_info_event_filter_check(fns::snd_seq_client_info_event_filter_check_arg0_t info, fns::snd_seq_client_info_event_filter_check_arg1_t event_type)
{
  return fns::call<fns::snd_seq_client_info_event_filter_check>(info, event_type);
}

namespace fns
{

using snd_seq_get_client_info_arg0_t = snd_seq_t *;
using snd_seq_get_client_info_arg1_t = snd_seq_client_info_t *;
struct snd_seq_get_client_info
{
  const char* name = "snd_seq_get_client_info";
  const std::vector<const char*> args = {"handle", "info"};
  using type = int(*)(snd_seq_t *, snd_seq_client_info_t *);
};

}

extern "C" int snd_seq_get_client_info(fns::snd_seq_get_client_info_arg0_t handle, fns::snd_seq_get_client_info_arg1_t info)
{
  return fns::call<fns::snd_seq_get_client_info>(handle, info);
}

namespace fns
{

using snd_seq_get_any_client_info_arg0_t = snd_seq_t *;
using snd_seq_get_any_client_info_arg1_t = int;
using snd_seq_get_any_client_info_arg2_t = snd_seq_client_info_t *;
struct snd_seq_get_any_client_info
{
  const char* name = "snd_seq_get_any_client_info";
  const std::vector<const char*> args = {"handle", "client", "info"};
  using type = int(*)(snd_seq_t *, int, snd_seq_client_info_t *);
};

}

extern "C" int snd_seq_get_any_client_info(fns::snd_seq_get_any_client_info_arg0_t handle, fns::snd_seq_get_any_client_info_arg1_t client, fns::snd_seq_get_any_client_info_arg2_t info)
{
  return fns::call<fns::snd_seq_get_any_client_info>(handle, client, info);
}

namespace fns
{

using snd_seq_set_client_info_arg0_t = snd_seq_t *;
using snd_seq_set_client_info_arg1_t = snd_seq_client_info_t *;
struct snd_seq_set_client_info
{
  const char* name = "snd_seq_set_client_info";
  const std::vector<const char*> args = {"handle", "info"};
  using type = int(*)(snd_seq_t *, snd_seq_client_info_t *);
};

}

extern "C" int snd_seq_set_client_info(fns::snd_seq_set_client_info_arg0_t handle, fns::snd_seq_set_client_info_arg1_t info)
{
  return fns::call<fns::snd_seq_set_client_info>(handle, info);
}

namespace fns
{

using snd_seq_query_next_client_arg0_t = snd_seq_t *;
using snd_seq_query_next_client_arg1_t = snd_seq_client_info_t *;
struct snd_seq_query_next_client
{
  const char* name = "snd_seq_query_next_client";
  const std::vector<const char*> args = {"handle", "info"};
  using type = int(*)(snd_seq_t *, snd_seq_client_info_t *);
};

}

extern "C" int snd_seq_query_next_client(fns::snd_seq_query_next_client_arg0_t handle, fns::snd_seq_query_next_client_arg1_t info)
{
  return fns::call<fns::snd_seq_query_next_client>(handle, info);
}

namespace fns
{

struct snd_seq_client_pool_sizeof
{
  const char* name = "snd_seq_client_pool_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_seq_client_pool_sizeof()
{
  return fns::call<fns::snd_seq_client_pool_sizeof>();
}

namespace fns
{

using snd_seq_client_pool_malloc_arg0_t = snd_seq_client_pool_t **;
struct snd_seq_client_pool_malloc
{
  const char* name = "snd_seq_client_pool_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_seq_client_pool_t **);
};

}

extern "C" int snd_seq_client_pool_malloc(fns::snd_seq_client_pool_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_seq_client_pool_malloc>(ptr);
}

namespace fns
{

using snd_seq_client_pool_free_arg0_t = snd_seq_client_pool_t *;
struct snd_seq_client_pool_free
{
  const char* name = "snd_seq_client_pool_free";
  const std::vector<const char*> args = {"ptr"};
  using type = void(*)(snd_seq_client_pool_t *);
};

}

extern "C" void snd_seq_client_pool_free(fns::snd_seq_client_pool_free_arg0_t ptr)
{
  return fns::call_void<fns::snd_seq_client_pool_free>(ptr);
}

namespace fns
{

using snd_seq_client_pool_copy_arg0_t = snd_seq_client_pool_t *;
using snd_seq_client_pool_copy_arg1_t = const snd_seq_client_pool_t *;
struct snd_seq_client_pool_copy
{
  const char* name = "snd_seq_client_pool_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_seq_client_pool_t *, const snd_seq_client_pool_t *);
};

}

extern "C" void snd_seq_client_pool_copy(fns::snd_seq_client_pool_copy_arg0_t dst, fns::snd_seq_client_pool_copy_arg1_t src)
{
  return fns::call_void<fns::snd_seq_client_pool_copy>(dst, src);
}

namespace fns
{

using snd_seq_client_pool_get_client_arg0_t = const snd_seq_client_pool_t *;
struct snd_seq_client_pool_get_client
{
  const char* name = "snd_seq_client_pool_get_client";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_client_pool_t *);
};

}

extern "C" int snd_seq_client_pool_get_client(fns::snd_seq_client_pool_get_client_arg0_t info)
{
  return fns::call<fns::snd_seq_client_pool_get_client>(info);
}

namespace fns
{

using snd_seq_client_pool_get_output_pool_arg0_t = const snd_seq_client_pool_t *;
struct snd_seq_client_pool_get_output_pool
{
  const char* name = "snd_seq_client_pool_get_output_pool";
  const std::vector<const char*> args = {"info"};
  using type = size_t(*)(const snd_seq_client_pool_t *);
};

}

extern "C" size_t snd_seq_client_pool_get_output_pool(fns::snd_seq_client_pool_get_output_pool_arg0_t info)
{
  return fns::call<fns::snd_seq_client_pool_get_output_pool>(info);
}

namespace fns
{

using snd_seq_client_pool_get_input_pool_arg0_t = const snd_seq_client_pool_t *;
struct snd_seq_client_pool_get_input_pool
{
  const char* name = "snd_seq_client_pool_get_input_pool";
  const std::vector<const char*> args = {"info"};
  using type = size_t(*)(const snd_seq_client_pool_t *);
};

}

extern "C" size_t snd_seq_client_pool_get_input_pool(fns::snd_seq_client_pool_get_input_pool_arg0_t info)
{
  return fns::call<fns::snd_seq_client_pool_get_input_pool>(info);
}

namespace fns
{

using snd_seq_client_pool_get_output_room_arg0_t = const snd_seq_client_pool_t *;
struct snd_seq_client_pool_get_output_room
{
  const char* name = "snd_seq_client_pool_get_output_room";
  const std::vector<const char*> args = {"info"};
  using type = size_t(*)(const snd_seq_client_pool_t *);
};

}

extern "C" size_t snd_seq_client_pool_get_output_room(fns::snd_seq_client_pool_get_output_room_arg0_t info)
{
  return fns::call<fns::snd_seq_client_pool_get_output_room>(info);
}

namespace fns
{

using snd_seq_client_pool_get_output_free_arg0_t = const snd_seq_client_pool_t *;
struct snd_seq_client_pool_get_output_free
{
  const char* name = "snd_seq_client_pool_get_output_free";
  const std::vector<const char*> args = {"info"};
  using type = size_t(*)(const snd_seq_client_pool_t *);
};

}

extern "C" size_t snd_seq_client_pool_get_output_free(fns::snd_seq_client_pool_get_output_free_arg0_t info)
{
  return fns::call<fns::snd_seq_client_pool_get_output_free>(info);
}

namespace fns
{

using snd_seq_client_pool_get_input_free_arg0_t = const snd_seq_client_pool_t *;
struct snd_seq_client_pool_get_input_free
{
  const char* name = "snd_seq_client_pool_get_input_free";
  const std::vector<const char*> args = {"info"};
  using type = size_t(*)(const snd_seq_client_pool_t *);
};

}

extern "C" size_t snd_seq_client_pool_get_input_free(fns::snd_seq_client_pool_get_input_free_arg0_t info)
{
  return fns::call<fns::snd_seq_client_pool_get_input_free>(info);
}

namespace fns
{

using snd_seq_client_pool_set_output_pool_arg0_t = snd_seq_client_pool_t *;
using snd_seq_client_pool_set_output_pool_arg1_t = size_t;
struct snd_seq_client_pool_set_output_pool
{
  const char* name = "snd_seq_client_pool_set_output_pool";
  const std::vector<const char*> args = {"info", "size"};
  using type = void(*)(snd_seq_client_pool_t *, size_t);
};

}

extern "C" void snd_seq_client_pool_set_output_pool(fns::snd_seq_client_pool_set_output_pool_arg0_t info, fns::snd_seq_client_pool_set_output_pool_arg1_t size)
{
  return fns::call_void<fns::snd_seq_client_pool_set_output_pool>(info, size);
}

namespace fns
{

using snd_seq_client_pool_set_input_pool_arg0_t = snd_seq_client_pool_t *;
using snd_seq_client_pool_set_input_pool_arg1_t = size_t;
struct snd_seq_client_pool_set_input_pool
{
  const char* name = "snd_seq_client_pool_set_input_pool";
  const std::vector<const char*> args = {"info", "size"};
  using type = void(*)(snd_seq_client_pool_t *, size_t);
};

}

extern "C" void snd_seq_client_pool_set_input_pool(fns::snd_seq_client_pool_set_input_pool_arg0_t info, fns::snd_seq_client_pool_set_input_pool_arg1_t size)
{
  return fns::call_void<fns::snd_seq_client_pool_set_input_pool>(info, size);
}

namespace fns
{

using snd_seq_client_pool_set_output_room_arg0_t = snd_seq_client_pool_t *;
using snd_seq_client_pool_set_output_room_arg1_t = size_t;
struct snd_seq_client_pool_set_output_room
{
  const char* name = "snd_seq_client_pool_set_output_room";
  const std::vector<const char*> args = {"info", "size"};
  using type = void(*)(snd_seq_client_pool_t *, size_t);
};

}

extern "C" void snd_seq_client_pool_set_output_room(fns::snd_seq_client_pool_set_output_room_arg0_t info, fns::snd_seq_client_pool_set_output_room_arg1_t size)
{
  return fns::call_void<fns::snd_seq_client_pool_set_output_room>(info, size);
}

namespace fns
{

using snd_seq_get_client_pool_arg0_t = snd_seq_t *;
using snd_seq_get_client_pool_arg1_t = snd_seq_client_pool_t *;
struct snd_seq_get_client_pool
{
  const char* name = "snd_seq_get_client_pool";
  const std::vector<const char*> args = {"handle", "info"};
  using type = int(*)(snd_seq_t *, snd_seq_client_pool_t *);
};

}

extern "C" int snd_seq_get_client_pool(fns::snd_seq_get_client_pool_arg0_t handle, fns::snd_seq_get_client_pool_arg1_t info)
{
  return fns::call<fns::snd_seq_get_client_pool>(handle, info);
}

namespace fns
{

using snd_seq_set_client_pool_arg0_t = snd_seq_t *;
using snd_seq_set_client_pool_arg1_t = snd_seq_client_pool_t *;
struct snd_seq_set_client_pool
{
  const char* name = "snd_seq_set_client_pool";
  const std::vector<const char*> args = {"handle", "info"};
  using type = int(*)(snd_seq_t *, snd_seq_client_pool_t *);
};

}

extern "C" int snd_seq_set_client_pool(fns::snd_seq_set_client_pool_arg0_t handle, fns::snd_seq_set_client_pool_arg1_t info)
{
  return fns::call<fns::snd_seq_set_client_pool>(handle, info);
}

namespace fns
{

struct snd_seq_port_info_sizeof
{
  const char* name = "snd_seq_port_info_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_seq_port_info_sizeof()
{
  return fns::call<fns::snd_seq_port_info_sizeof>();
}

namespace fns
{

using snd_seq_port_info_malloc_arg0_t = snd_seq_port_info_t **;
struct snd_seq_port_info_malloc
{
  const char* name = "snd_seq_port_info_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_seq_port_info_t **);
};

}

extern "C" int snd_seq_port_info_malloc(fns::snd_seq_port_info_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_seq_port_info_malloc>(ptr);
}

namespace fns
{

using snd_seq_port_info_free_arg0_t = snd_seq_port_info_t *;
struct snd_seq_port_info_free
{
  const char* name = "snd_seq_port_info_free";
  const std::vector<const char*> args = {"ptr"};
  using type = void(*)(snd_seq_port_info_t *);
};

}

extern "C" void snd_seq_port_info_free(fns::snd_seq_port_info_free_arg0_t ptr)
{
  return fns::call_void<fns::snd_seq_port_info_free>(ptr);
}

namespace fns
{

using snd_seq_port_info_copy_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_copy_arg1_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_copy
{
  const char* name = "snd_seq_port_info_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_seq_port_info_t *, const snd_seq_port_info_t *);
};

}

extern "C" void snd_seq_port_info_copy(fns::snd_seq_port_info_copy_arg0_t dst, fns::snd_seq_port_info_copy_arg1_t src)
{
  return fns::call_void<fns::snd_seq_port_info_copy>(dst, src);
}

namespace fns
{

using snd_seq_port_info_get_client_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_client
{
  const char* name = "snd_seq_port_info_get_client";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_port_info_get_client(fns::snd_seq_port_info_get_client_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_client>(info);
}

namespace fns
{

using snd_seq_port_info_get_port_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_port
{
  const char* name = "snd_seq_port_info_get_port";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_port_info_get_port(fns::snd_seq_port_info_get_port_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_port>(info);
}

namespace fns
{

using snd_seq_port_info_get_addr_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_addr
{
  const char* name = "snd_seq_port_info_get_addr";
  const std::vector<const char*> args = {"info"};
  using type = const snd_seq_addr_t *(*)(const snd_seq_port_info_t *);
};

}

extern "C" const snd_seq_addr_t * snd_seq_port_info_get_addr(fns::snd_seq_port_info_get_addr_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_addr>(info);
}

namespace fns
{

using snd_seq_port_info_get_name_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_name
{
  const char* name = "snd_seq_port_info_get_name";
  const std::vector<const char*> args = {"info"};
  using type = const char *(*)(const snd_seq_port_info_t *);
};

}

extern "C" const char * snd_seq_port_info_get_name(fns::snd_seq_port_info_get_name_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_name>(info);
}

namespace fns
{

using snd_seq_port_info_get_capability_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_capability
{
  const char* name = "snd_seq_port_info_get_capability";
  const std::vector<const char*> args = {"info"};
  using type = unsigned int(*)(const snd_seq_port_info_t *);
};

}

extern "C" unsigned int snd_seq_port_info_get_capability(fns::snd_seq_port_info_get_capability_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_capability>(info);
}

namespace fns
{

using snd_seq_port_info_get_type_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_type
{
  const char* name = "snd_seq_port_info_get_type";
  const std::vector<const char*> args = {"info"};
  using type = unsigned int(*)(const snd_seq_port_info_t *);
};

}

extern "C" unsigned int snd_seq_port_info_get_type(fns::snd_seq_port_info_get_type_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_type>(info);
}

namespace fns
{

using snd_seq_port_info_get_midi_channels_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_midi_channels
{
  const char* name = "snd_seq_port_info_get_midi_channels";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_port_info_get_midi_channels(fns::snd_seq_port_info_get_midi_channels_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_midi_channels>(info);
}

namespace fns
{

using snd_seq_port_info_get_midi_voices_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_midi_voices
{
  const char* name = "snd_seq_port_info_get_midi_voices";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_port_info_get_midi_voices(fns::snd_seq_port_info_get_midi_voices_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_midi_voices>(info);
}

namespace fns
{

using snd_seq_port_info_get_synth_voices_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_synth_voices
{
  const char* name = "snd_seq_port_info_get_synth_voices";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_port_info_get_synth_voices(fns::snd_seq_port_info_get_synth_voices_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_synth_voices>(info);
}

namespace fns
{

using snd_seq_port_info_get_read_use_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_read_use
{
  const char* name = "snd_seq_port_info_get_read_use";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_port_info_get_read_use(fns::snd_seq_port_info_get_read_use_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_read_use>(info);
}

namespace fns
{

using snd_seq_port_info_get_write_use_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_write_use
{
  const char* name = "snd_seq_port_info_get_write_use";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_port_info_get_write_use(fns::snd_seq_port_info_get_write_use_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_write_use>(info);
}

namespace fns
{

using snd_seq_port_info_get_port_specified_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_port_specified
{
  const char* name = "snd_seq_port_info_get_port_specified";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_port_info_get_port_specified(fns::snd_seq_port_info_get_port_specified_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_port_specified>(info);
}

namespace fns
{

using snd_seq_port_info_get_timestamping_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_timestamping
{
  const char* name = "snd_seq_port_info_get_timestamping";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_port_info_get_timestamping(fns::snd_seq_port_info_get_timestamping_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_timestamping>(info);
}

namespace fns
{

using snd_seq_port_info_get_timestamp_real_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_timestamp_real
{
  const char* name = "snd_seq_port_info_get_timestamp_real";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_port_info_get_timestamp_real(fns::snd_seq_port_info_get_timestamp_real_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_timestamp_real>(info);
}

namespace fns
{

using snd_seq_port_info_get_timestamp_queue_arg0_t = const snd_seq_port_info_t *;
struct snd_seq_port_info_get_timestamp_queue
{
  const char* name = "snd_seq_port_info_get_timestamp_queue";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_port_info_get_timestamp_queue(fns::snd_seq_port_info_get_timestamp_queue_arg0_t info)
{
  return fns::call<fns::snd_seq_port_info_get_timestamp_queue>(info);
}

namespace fns
{

using snd_seq_port_info_set_client_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_client_arg1_t = int;
struct snd_seq_port_info_set_client
{
  const char* name = "snd_seq_port_info_set_client";
  const std::vector<const char*> args = {"info", "client"};
  using type = void(*)(snd_seq_port_info_t *, int);
};

}

extern "C" void snd_seq_port_info_set_client(fns::snd_seq_port_info_set_client_arg0_t info, fns::snd_seq_port_info_set_client_arg1_t client)
{
  return fns::call_void<fns::snd_seq_port_info_set_client>(info, client);
}

namespace fns
{

using snd_seq_port_info_set_port_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_port_arg1_t = int;
struct snd_seq_port_info_set_port
{
  const char* name = "snd_seq_port_info_set_port";
  const std::vector<const char*> args = {"info", "port"};
  using type = void(*)(snd_seq_port_info_t *, int);
};

}

extern "C" void snd_seq_port_info_set_port(fns::snd_seq_port_info_set_port_arg0_t info, fns::snd_seq_port_info_set_port_arg1_t port)
{
  return fns::call_void<fns::snd_seq_port_info_set_port>(info, port);
}

namespace fns
{

using snd_seq_port_info_set_addr_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_addr_arg1_t = const snd_seq_addr_t *;
struct snd_seq_port_info_set_addr
{
  const char* name = "snd_seq_port_info_set_addr";
  const std::vector<const char*> args = {"info", "addr"};
  using type = void(*)(snd_seq_port_info_t *, const snd_seq_addr_t *);
};

}

extern "C" void snd_seq_port_info_set_addr(fns::snd_seq_port_info_set_addr_arg0_t info, fns::snd_seq_port_info_set_addr_arg1_t addr)
{
  return fns::call_void<fns::snd_seq_port_info_set_addr>(info, addr);
}

namespace fns
{

using snd_seq_port_info_set_name_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_name_arg1_t = const char *;
struct snd_seq_port_info_set_name
{
  const char* name = "snd_seq_port_info_set_name";
  const std::vector<const char*> args = {"info", "name"};
  using type = void(*)(snd_seq_port_info_t *, const char *);
};

}

extern "C" void snd_seq_port_info_set_name(fns::snd_seq_port_info_set_name_arg0_t info, fns::snd_seq_port_info_set_name_arg1_t name)
{
  return fns::call_void<fns::snd_seq_port_info_set_name>(info, name);
}

namespace fns
{

using snd_seq_port_info_set_capability_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_capability_arg1_t = unsigned int;
struct snd_seq_port_info_set_capability
{
  const char* name = "snd_seq_port_info_set_capability";
  const std::vector<const char*> args = {"info", "capability"};
  using type = void(*)(snd_seq_port_info_t *, unsigned int);
};

}

extern "C" void snd_seq_port_info_set_capability(fns::snd_seq_port_info_set_capability_arg0_t info, fns::snd_seq_port_info_set_capability_arg1_t capability)
{
  return fns::call_void<fns::snd_seq_port_info_set_capability>(info, capability);
}

namespace fns
{

using snd_seq_port_info_set_type_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_type_arg1_t = unsigned int;
struct snd_seq_port_info_set_type
{
  const char* name = "snd_seq_port_info_set_type";
  const std::vector<const char*> args = {"info", "type"};
  using type = void(*)(snd_seq_port_info_t *, unsigned int);
};

}

extern "C" void snd_seq_port_info_set_type(fns::snd_seq_port_info_set_type_arg0_t info, fns::snd_seq_port_info_set_type_arg1_t type)
{
  return fns::call_void<fns::snd_seq_port_info_set_type>(info, type);
}

namespace fns
{

using snd_seq_port_info_set_midi_channels_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_midi_channels_arg1_t = int;
struct snd_seq_port_info_set_midi_channels
{
  const char* name = "snd_seq_port_info_set_midi_channels";
  const std::vector<const char*> args = {"info", "channels"};
  using type = void(*)(snd_seq_port_info_t *, int);
};

}

extern "C" void snd_seq_port_info_set_midi_channels(fns::snd_seq_port_info_set_midi_channels_arg0_t info, fns::snd_seq_port_info_set_midi_channels_arg1_t channels)
{
  return fns::call_void<fns::snd_seq_port_info_set_midi_channels>(info, channels);
}

namespace fns
{

using snd_seq_port_info_set_midi_voices_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_midi_voices_arg1_t = int;
struct snd_seq_port_info_set_midi_voices
{
  const char* name = "snd_seq_port_info_set_midi_voices";
  const std::vector<const char*> args = {"info", "voices"};
  using type = void(*)(snd_seq_port_info_t *, int);
};

}

extern "C" void snd_seq_port_info_set_midi_voices(fns::snd_seq_port_info_set_midi_voices_arg0_t info, fns::snd_seq_port_info_set_midi_voices_arg1_t voices)
{
  return fns::call_void<fns::snd_seq_port_info_set_midi_voices>(info, voices);
}

namespace fns
{

using snd_seq_port_info_set_synth_voices_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_synth_voices_arg1_t = int;
struct snd_seq_port_info_set_synth_voices
{
  const char* name = "snd_seq_port_info_set_synth_voices";
  const std::vector<const char*> args = {"info", "voices"};
  using type = void(*)(snd_seq_port_info_t *, int);
};

}

extern "C" void snd_seq_port_info_set_synth_voices(fns::snd_seq_port_info_set_synth_voices_arg0_t info, fns::snd_seq_port_info_set_synth_voices_arg1_t voices)
{
  return fns::call_void<fns::snd_seq_port_info_set_synth_voices>(info, voices);
}

namespace fns
{

using snd_seq_port_info_set_port_specified_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_port_specified_arg1_t = int;
struct snd_seq_port_info_set_port_specified
{
  const char* name = "snd_seq_port_info_set_port_specified";
  const std::vector<const char*> args = {"info", "val"};
  using type = void(*)(snd_seq_port_info_t *, int);
};

}

extern "C" void snd_seq_port_info_set_port_specified(fns::snd_seq_port_info_set_port_specified_arg0_t info, fns::snd_seq_port_info_set_port_specified_arg1_t val)
{
  return fns::call_void<fns::snd_seq_port_info_set_port_specified>(info, val);
}

namespace fns
{

using snd_seq_port_info_set_timestamping_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_timestamping_arg1_t = int;
struct snd_seq_port_info_set_timestamping
{
  const char* name = "snd_seq_port_info_set_timestamping";
  const std::vector<const char*> args = {"info", "enable"};
  using type = void(*)(snd_seq_port_info_t *, int);
};

}

extern "C" void snd_seq_port_info_set_timestamping(fns::snd_seq_port_info_set_timestamping_arg0_t info, fns::snd_seq_port_info_set_timestamping_arg1_t enable)
{
  return fns::call_void<fns::snd_seq_port_info_set_timestamping>(info, enable);
}

namespace fns
{

using snd_seq_port_info_set_timestamp_real_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_timestamp_real_arg1_t = int;
struct snd_seq_port_info_set_timestamp_real
{
  const char* name = "snd_seq_port_info_set_timestamp_real";
  const std::vector<const char*> args = {"info", "realtime"};
  using type = void(*)(snd_seq_port_info_t *, int);
};

}

extern "C" void snd_seq_port_info_set_timestamp_real(fns::snd_seq_port_info_set_timestamp_real_arg0_t info, fns::snd_seq_port_info_set_timestamp_real_arg1_t realtime)
{
  return fns::call_void<fns::snd_seq_port_info_set_timestamp_real>(info, realtime);
}

namespace fns
{

using snd_seq_port_info_set_timestamp_queue_arg0_t = snd_seq_port_info_t *;
using snd_seq_port_info_set_timestamp_queue_arg1_t = int;
struct snd_seq_port_info_set_timestamp_queue
{
  const char* name = "snd_seq_port_info_set_timestamp_queue";
  const std::vector<const char*> args = {"info", "queue"};
  using type = void(*)(snd_seq_port_info_t *, int);
};

}

extern "C" void snd_seq_port_info_set_timestamp_queue(fns::snd_seq_port_info_set_timestamp_queue_arg0_t info, fns::snd_seq_port_info_set_timestamp_queue_arg1_t queue)
{
  return fns::call_void<fns::snd_seq_port_info_set_timestamp_queue>(info, queue);
}

namespace fns
{

using snd_seq_create_port_arg0_t = snd_seq_t *;
using snd_seq_create_port_arg1_t = snd_seq_port_info_t *;
struct snd_seq_create_port
{
  const char* name = "snd_seq_create_port";
  const std::vector<const char*> args = {"handle", "info"};
  using type = int(*)(snd_seq_t *, snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_create_port(fns::snd_seq_create_port_arg0_t handle, fns::snd_seq_create_port_arg1_t info)
{
  return fns::call<fns::snd_seq_create_port>(handle, info);
}

namespace fns
{

using snd_seq_delete_port_arg0_t = snd_seq_t *;
using snd_seq_delete_port_arg1_t = int;
struct snd_seq_delete_port
{
  const char* name = "snd_seq_delete_port";
  const std::vector<const char*> args = {"handle", "port"};
  using type = int(*)(snd_seq_t *, int);
};

}

extern "C" int snd_seq_delete_port(fns::snd_seq_delete_port_arg0_t handle, fns::snd_seq_delete_port_arg1_t port)
{
  return fns::call<fns::snd_seq_delete_port>(handle, port);
}

namespace fns
{

using snd_seq_get_port_info_arg0_t = snd_seq_t *;
using snd_seq_get_port_info_arg1_t = int;
using snd_seq_get_port_info_arg2_t = snd_seq_port_info_t *;
struct snd_seq_get_port_info
{
  const char* name = "snd_seq_get_port_info";
  const std::vector<const char*> args = {"handle", "port", "info"};
  using type = int(*)(snd_seq_t *, int, snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_get_port_info(fns::snd_seq_get_port_info_arg0_t handle, fns::snd_seq_get_port_info_arg1_t port, fns::snd_seq_get_port_info_arg2_t info)
{
  return fns::call<fns::snd_seq_get_port_info>(handle, port, info);
}

namespace fns
{

using snd_seq_get_any_port_info_arg0_t = snd_seq_t *;
using snd_seq_get_any_port_info_arg1_t = int;
using snd_seq_get_any_port_info_arg2_t = int;
using snd_seq_get_any_port_info_arg3_t = snd_seq_port_info_t *;
struct snd_seq_get_any_port_info
{
  const char* name = "snd_seq_get_any_port_info";
  const std::vector<const char*> args = {"handle", "client", "port", "info"};
  using type = int(*)(snd_seq_t *, int, int, snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_get_any_port_info(fns::snd_seq_get_any_port_info_arg0_t handle, fns::snd_seq_get_any_port_info_arg1_t client, fns::snd_seq_get_any_port_info_arg2_t port, fns::snd_seq_get_any_port_info_arg3_t info)
{
  return fns::call<fns::snd_seq_get_any_port_info>(handle, client, port, info);
}

namespace fns
{

using snd_seq_set_port_info_arg0_t = snd_seq_t *;
using snd_seq_set_port_info_arg1_t = int;
using snd_seq_set_port_info_arg2_t = snd_seq_port_info_t *;
struct snd_seq_set_port_info
{
  const char* name = "snd_seq_set_port_info";
  const std::vector<const char*> args = {"handle", "port", "info"};
  using type = int(*)(snd_seq_t *, int, snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_set_port_info(fns::snd_seq_set_port_info_arg0_t handle, fns::snd_seq_set_port_info_arg1_t port, fns::snd_seq_set_port_info_arg2_t info)
{
  return fns::call<fns::snd_seq_set_port_info>(handle, port, info);
}

namespace fns
{

using snd_seq_query_next_port_arg0_t = snd_seq_t *;
using snd_seq_query_next_port_arg1_t = snd_seq_port_info_t *;
struct snd_seq_query_next_port
{
  const char* name = "snd_seq_query_next_port";
  const std::vector<const char*> args = {"handle", "info"};
  using type = int(*)(snd_seq_t *, snd_seq_port_info_t *);
};

}

extern "C" int snd_seq_query_next_port(fns::snd_seq_query_next_port_arg0_t handle, fns::snd_seq_query_next_port_arg1_t info)
{
  return fns::call<fns::snd_seq_query_next_port>(handle, info);
}

namespace fns
{

struct snd_seq_port_subscribe_sizeof
{
  const char* name = "snd_seq_port_subscribe_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_seq_port_subscribe_sizeof()
{
  return fns::call<fns::snd_seq_port_subscribe_sizeof>();
}

namespace fns
{

using snd_seq_port_subscribe_malloc_arg0_t = snd_seq_port_subscribe_t **;
struct snd_seq_port_subscribe_malloc
{
  const char* name = "snd_seq_port_subscribe_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_seq_port_subscribe_t **);
};

}

extern "C" int snd_seq_port_subscribe_malloc(fns::snd_seq_port_subscribe_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_seq_port_subscribe_malloc>(ptr);
}

namespace fns
{

using snd_seq_port_subscribe_free_arg0_t = snd_seq_port_subscribe_t *;
struct snd_seq_port_subscribe_free
{
  const char* name = "snd_seq_port_subscribe_free";
  const std::vector<const char*> args = {"ptr"};
  using type = void(*)(snd_seq_port_subscribe_t *);
};

}

extern "C" void snd_seq_port_subscribe_free(fns::snd_seq_port_subscribe_free_arg0_t ptr)
{
  return fns::call_void<fns::snd_seq_port_subscribe_free>(ptr);
}

namespace fns
{

using snd_seq_port_subscribe_copy_arg0_t = snd_seq_port_subscribe_t *;
using snd_seq_port_subscribe_copy_arg1_t = const snd_seq_port_subscribe_t *;
struct snd_seq_port_subscribe_copy
{
  const char* name = "snd_seq_port_subscribe_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_seq_port_subscribe_t *, const snd_seq_port_subscribe_t *);
};

}

extern "C" void snd_seq_port_subscribe_copy(fns::snd_seq_port_subscribe_copy_arg0_t dst, fns::snd_seq_port_subscribe_copy_arg1_t src)
{
  return fns::call_void<fns::snd_seq_port_subscribe_copy>(dst, src);
}

namespace fns
{

using snd_seq_port_subscribe_get_sender_arg0_t = const snd_seq_port_subscribe_t *;
struct snd_seq_port_subscribe_get_sender
{
  const char* name = "snd_seq_port_subscribe_get_sender";
  const std::vector<const char*> args = {"info"};
  using type = const snd_seq_addr_t *(*)(const snd_seq_port_subscribe_t *);
};

}

extern "C" const snd_seq_addr_t * snd_seq_port_subscribe_get_sender(fns::snd_seq_port_subscribe_get_sender_arg0_t info)
{
  return fns::call<fns::snd_seq_port_subscribe_get_sender>(info);
}

namespace fns
{

using snd_seq_port_subscribe_get_dest_arg0_t = const snd_seq_port_subscribe_t *;
struct snd_seq_port_subscribe_get_dest
{
  const char* name = "snd_seq_port_subscribe_get_dest";
  const std::vector<const char*> args = {"info"};
  using type = const snd_seq_addr_t *(*)(const snd_seq_port_subscribe_t *);
};

}

extern "C" const snd_seq_addr_t * snd_seq_port_subscribe_get_dest(fns::snd_seq_port_subscribe_get_dest_arg0_t info)
{
  return fns::call<fns::snd_seq_port_subscribe_get_dest>(info);
}

namespace fns
{

using snd_seq_port_subscribe_get_queue_arg0_t = const snd_seq_port_subscribe_t *;
struct snd_seq_port_subscribe_get_queue
{
  const char* name = "snd_seq_port_subscribe_get_queue";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_subscribe_t *);
};

}

extern "C" int snd_seq_port_subscribe_get_queue(fns::snd_seq_port_subscribe_get_queue_arg0_t info)
{
  return fns::call<fns::snd_seq_port_subscribe_get_queue>(info);
}

namespace fns
{

using snd_seq_port_subscribe_get_exclusive_arg0_t = const snd_seq_port_subscribe_t *;
struct snd_seq_port_subscribe_get_exclusive
{
  const char* name = "snd_seq_port_subscribe_get_exclusive";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_subscribe_t *);
};

}

extern "C" int snd_seq_port_subscribe_get_exclusive(fns::snd_seq_port_subscribe_get_exclusive_arg0_t info)
{
  return fns::call<fns::snd_seq_port_subscribe_get_exclusive>(info);
}

namespace fns
{

using snd_seq_port_subscribe_get_time_update_arg0_t = const snd_seq_port_subscribe_t *;
struct snd_seq_port_subscribe_get_time_update
{
  const char* name = "snd_seq_port_subscribe_get_time_update";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_subscribe_t *);
};

}

extern "C" int snd_seq_port_subscribe_get_time_update(fns::snd_seq_port_subscribe_get_time_update_arg0_t info)
{
  return fns::call<fns::snd_seq_port_subscribe_get_time_update>(info);
}

namespace fns
{

using snd_seq_port_subscribe_get_time_real_arg0_t = const snd_seq_port_subscribe_t *;
struct snd_seq_port_subscribe_get_time_real
{
  const char* name = "snd_seq_port_subscribe_get_time_real";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_port_subscribe_t *);
};

}

extern "C" int snd_seq_port_subscribe_get_time_real(fns::snd_seq_port_subscribe_get_time_real_arg0_t info)
{
  return fns::call<fns::snd_seq_port_subscribe_get_time_real>(info);
}

namespace fns
{

using snd_seq_port_subscribe_set_sender_arg0_t = snd_seq_port_subscribe_t *;
using snd_seq_port_subscribe_set_sender_arg1_t = const snd_seq_addr_t *;
struct snd_seq_port_subscribe_set_sender
{
  const char* name = "snd_seq_port_subscribe_set_sender";
  const std::vector<const char*> args = {"info", "addr"};
  using type = void(*)(snd_seq_port_subscribe_t *, const snd_seq_addr_t *);
};

}

extern "C" void snd_seq_port_subscribe_set_sender(fns::snd_seq_port_subscribe_set_sender_arg0_t info, fns::snd_seq_port_subscribe_set_sender_arg1_t addr)
{
  return fns::call_void<fns::snd_seq_port_subscribe_set_sender>(info, addr);
}

namespace fns
{

using snd_seq_port_subscribe_set_dest_arg0_t = snd_seq_port_subscribe_t *;
using snd_seq_port_subscribe_set_dest_arg1_t = const snd_seq_addr_t *;
struct snd_seq_port_subscribe_set_dest
{
  const char* name = "snd_seq_port_subscribe_set_dest";
  const std::vector<const char*> args = {"info", "addr"};
  using type = void(*)(snd_seq_port_subscribe_t *, const snd_seq_addr_t *);
};

}

extern "C" void snd_seq_port_subscribe_set_dest(fns::snd_seq_port_subscribe_set_dest_arg0_t info, fns::snd_seq_port_subscribe_set_dest_arg1_t addr)
{
  return fns::call_void<fns::snd_seq_port_subscribe_set_dest>(info, addr);
}

namespace fns
{

using snd_seq_port_subscribe_set_queue_arg0_t = snd_seq_port_subscribe_t *;
using snd_seq_port_subscribe_set_queue_arg1_t = int;
struct snd_seq_port_subscribe_set_queue
{
  const char* name = "snd_seq_port_subscribe_set_queue";
  const std::vector<const char*> args = {"info", "q"};
  using type = void(*)(snd_seq_port_subscribe_t *, int);
};

}

extern "C" void snd_seq_port_subscribe_set_queue(fns::snd_seq_port_subscribe_set_queue_arg0_t info, fns::snd_seq_port_subscribe_set_queue_arg1_t q)
{
  return fns::call_void<fns::snd_seq_port_subscribe_set_queue>(info, q);
}

namespace fns
{

using snd_seq_port_subscribe_set_exclusive_arg0_t = snd_seq_port_subscribe_t *;
using snd_seq_port_subscribe_set_exclusive_arg1_t = int;
struct snd_seq_port_subscribe_set_exclusive
{
  const char* name = "snd_seq_port_subscribe_set_exclusive";
  const std::vector<const char*> args = {"info", "val"};
  using type = void(*)(snd_seq_port_subscribe_t *, int);
};

}

extern "C" void snd_seq_port_subscribe_set_exclusive(fns::snd_seq_port_subscribe_set_exclusive_arg0_t info, fns::snd_seq_port_subscribe_set_exclusive_arg1_t val)
{
  return fns::call_void<fns::snd_seq_port_subscribe_set_exclusive>(info, val);
}

namespace fns
{

using snd_seq_port_subscribe_set_time_update_arg0_t = snd_seq_port_subscribe_t *;
using snd_seq_port_subscribe_set_time_update_arg1_t = int;
struct snd_seq_port_subscribe_set_time_update
{
  const char* name = "snd_seq_port_subscribe_set_time_update";
  const std::vector<const char*> args = {"info", "val"};
  using type = void(*)(snd_seq_port_subscribe_t *, int);
};

}

extern "C" void snd_seq_port_subscribe_set_time_update(fns::snd_seq_port_subscribe_set_time_update_arg0_t info, fns::snd_seq_port_subscribe_set_time_update_arg1_t val)
{
  return fns::call_void<fns::snd_seq_port_subscribe_set_time_update>(info, val);
}

namespace fns
{

using snd_seq_port_subscribe_set_time_real_arg0_t = snd_seq_port_subscribe_t *;
using snd_seq_port_subscribe_set_time_real_arg1_t = int;
struct snd_seq_port_subscribe_set_time_real
{
  const char* name = "snd_seq_port_subscribe_set_time_real";
  const std::vector<const char*> args = {"info", "val"};
  using type = void(*)(snd_seq_port_subscribe_t *, int);
};

}

extern "C" void snd_seq_port_subscribe_set_time_real(fns::snd_seq_port_subscribe_set_time_real_arg0_t info, fns::snd_seq_port_subscribe_set_time_real_arg1_t val)
{
  return fns::call_void<fns::snd_seq_port_subscribe_set_time_real>(info, val);
}

namespace fns
{

using snd_seq_get_port_subscription_arg0_t = snd_seq_t *;
using snd_seq_get_port_subscription_arg1_t = snd_seq_port_subscribe_t *;
struct snd_seq_get_port_subscription
{
  const char* name = "snd_seq_get_port_subscription";
  const std::vector<const char*> args = {"handle", "sub"};
  using type = int(*)(snd_seq_t *, snd_seq_port_subscribe_t *);
};

}

extern "C" int snd_seq_get_port_subscription(fns::snd_seq_get_port_subscription_arg0_t handle, fns::snd_seq_get_port_subscription_arg1_t sub)
{
  return fns::call<fns::snd_seq_get_port_subscription>(handle, sub);
}

namespace fns
{

using snd_seq_subscribe_port_arg0_t = snd_seq_t *;
using snd_seq_subscribe_port_arg1_t = snd_seq_port_subscribe_t *;
struct snd_seq_subscribe_port
{
  const char* name = "snd_seq_subscribe_port";
  const std::vector<const char*> args = {"handle", "sub"};
  using type = int(*)(snd_seq_t *, snd_seq_port_subscribe_t *);
};

}

extern "C" int snd_seq_subscribe_port(fns::snd_seq_subscribe_port_arg0_t handle, fns::snd_seq_subscribe_port_arg1_t sub)
{
  return fns::call<fns::snd_seq_subscribe_port>(handle, sub);
}

namespace fns
{

using snd_seq_unsubscribe_port_arg0_t = snd_seq_t *;
using snd_seq_unsubscribe_port_arg1_t = snd_seq_port_subscribe_t *;
struct snd_seq_unsubscribe_port
{
  const char* name = "snd_seq_unsubscribe_port";
  const std::vector<const char*> args = {"handle", "sub"};
  using type = int(*)(snd_seq_t *, snd_seq_port_subscribe_t *);
};

}

extern "C" int snd_seq_unsubscribe_port(fns::snd_seq_unsubscribe_port_arg0_t handle, fns::snd_seq_unsubscribe_port_arg1_t sub)
{
  return fns::call<fns::snd_seq_unsubscribe_port>(handle, sub);
}

namespace fns
{

struct snd_seq_query_subscribe_sizeof
{
  const char* name = "snd_seq_query_subscribe_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_seq_query_subscribe_sizeof()
{
  return fns::call<fns::snd_seq_query_subscribe_sizeof>();
}

namespace fns
{

using snd_seq_query_subscribe_malloc_arg0_t = snd_seq_query_subscribe_t **;
struct snd_seq_query_subscribe_malloc
{
  const char* name = "snd_seq_query_subscribe_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_seq_query_subscribe_t **);
};

}

extern "C" int snd_seq_query_subscribe_malloc(fns::snd_seq_query_subscribe_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_seq_query_subscribe_malloc>(ptr);
}

namespace fns
{

using snd_seq_query_subscribe_free_arg0_t = snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_free
{
  const char* name = "snd_seq_query_subscribe_free";
  const std::vector<const char*> args = {"ptr"};
  using type = void(*)(snd_seq_query_subscribe_t *);
};

}

extern "C" void snd_seq_query_subscribe_free(fns::snd_seq_query_subscribe_free_arg0_t ptr)
{
  return fns::call_void<fns::snd_seq_query_subscribe_free>(ptr);
}

namespace fns
{

using snd_seq_query_subscribe_copy_arg0_t = snd_seq_query_subscribe_t *;
using snd_seq_query_subscribe_copy_arg1_t = const snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_copy
{
  const char* name = "snd_seq_query_subscribe_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_seq_query_subscribe_t *, const snd_seq_query_subscribe_t *);
};

}

extern "C" void snd_seq_query_subscribe_copy(fns::snd_seq_query_subscribe_copy_arg0_t dst, fns::snd_seq_query_subscribe_copy_arg1_t src)
{
  return fns::call_void<fns::snd_seq_query_subscribe_copy>(dst, src);
}

namespace fns
{

using snd_seq_query_subscribe_get_client_arg0_t = const snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_get_client
{
  const char* name = "snd_seq_query_subscribe_get_client";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_query_subscribe_t *);
};

}

extern "C" int snd_seq_query_subscribe_get_client(fns::snd_seq_query_subscribe_get_client_arg0_t info)
{
  return fns::call<fns::snd_seq_query_subscribe_get_client>(info);
}

namespace fns
{

using snd_seq_query_subscribe_get_port_arg0_t = const snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_get_port
{
  const char* name = "snd_seq_query_subscribe_get_port";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_query_subscribe_t *);
};

}

extern "C" int snd_seq_query_subscribe_get_port(fns::snd_seq_query_subscribe_get_port_arg0_t info)
{
  return fns::call<fns::snd_seq_query_subscribe_get_port>(info);
}

namespace fns
{

using snd_seq_query_subscribe_get_root_arg0_t = const snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_get_root
{
  const char* name = "snd_seq_query_subscribe_get_root";
  const std::vector<const char*> args = {"info"};
  using type = const snd_seq_addr_t *(*)(const snd_seq_query_subscribe_t *);
};

}

extern "C" const snd_seq_addr_t * snd_seq_query_subscribe_get_root(fns::snd_seq_query_subscribe_get_root_arg0_t info)
{
  return fns::call<fns::snd_seq_query_subscribe_get_root>(info);
}

namespace fns
{

using snd_seq_query_subscribe_get_type_arg0_t = const snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_get_type
{
  const char* name = "snd_seq_query_subscribe_get_type";
  const std::vector<const char*> args = {"info"};
  using type = snd_seq_query_subs_type_t(*)(const snd_seq_query_subscribe_t *);
};

}

extern "C" snd_seq_query_subs_type_t snd_seq_query_subscribe_get_type(fns::snd_seq_query_subscribe_get_type_arg0_t info)
{
  return fns::call<fns::snd_seq_query_subscribe_get_type>(info);
}

namespace fns
{

using snd_seq_query_subscribe_get_index_arg0_t = const snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_get_index
{
  const char* name = "snd_seq_query_subscribe_get_index";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_query_subscribe_t *);
};

}

extern "C" int snd_seq_query_subscribe_get_index(fns::snd_seq_query_subscribe_get_index_arg0_t info)
{
  return fns::call<fns::snd_seq_query_subscribe_get_index>(info);
}

namespace fns
{

using snd_seq_query_subscribe_get_num_subs_arg0_t = const snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_get_num_subs
{
  const char* name = "snd_seq_query_subscribe_get_num_subs";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_query_subscribe_t *);
};

}

extern "C" int snd_seq_query_subscribe_get_num_subs(fns::snd_seq_query_subscribe_get_num_subs_arg0_t info)
{
  return fns::call<fns::snd_seq_query_subscribe_get_num_subs>(info);
}

namespace fns
{

using snd_seq_query_subscribe_get_addr_arg0_t = const snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_get_addr
{
  const char* name = "snd_seq_query_subscribe_get_addr";
  const std::vector<const char*> args = {"info"};
  using type = const snd_seq_addr_t *(*)(const snd_seq_query_subscribe_t *);
};

}

extern "C" const snd_seq_addr_t * snd_seq_query_subscribe_get_addr(fns::snd_seq_query_subscribe_get_addr_arg0_t info)
{
  return fns::call<fns::snd_seq_query_subscribe_get_addr>(info);
}

namespace fns
{

using snd_seq_query_subscribe_get_queue_arg0_t = const snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_get_queue
{
  const char* name = "snd_seq_query_subscribe_get_queue";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_query_subscribe_t *);
};

}

extern "C" int snd_seq_query_subscribe_get_queue(fns::snd_seq_query_subscribe_get_queue_arg0_t info)
{
  return fns::call<fns::snd_seq_query_subscribe_get_queue>(info);
}

namespace fns
{

using snd_seq_query_subscribe_get_exclusive_arg0_t = const snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_get_exclusive
{
  const char* name = "snd_seq_query_subscribe_get_exclusive";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_query_subscribe_t *);
};

}

extern "C" int snd_seq_query_subscribe_get_exclusive(fns::snd_seq_query_subscribe_get_exclusive_arg0_t info)
{
  return fns::call<fns::snd_seq_query_subscribe_get_exclusive>(info);
}

namespace fns
{

using snd_seq_query_subscribe_get_time_update_arg0_t = const snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_get_time_update
{
  const char* name = "snd_seq_query_subscribe_get_time_update";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_query_subscribe_t *);
};

}

extern "C" int snd_seq_query_subscribe_get_time_update(fns::snd_seq_query_subscribe_get_time_update_arg0_t info)
{
  return fns::call<fns::snd_seq_query_subscribe_get_time_update>(info);
}

namespace fns
{

using snd_seq_query_subscribe_get_time_real_arg0_t = const snd_seq_query_subscribe_t *;
struct snd_seq_query_subscribe_get_time_real
{
  const char* name = "snd_seq_query_subscribe_get_time_real";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_query_subscribe_t *);
};

}

extern "C" int snd_seq_query_subscribe_get_time_real(fns::snd_seq_query_subscribe_get_time_real_arg0_t info)
{
  return fns::call<fns::snd_seq_query_subscribe_get_time_real>(info);
}

namespace fns
{

using snd_seq_query_subscribe_set_client_arg0_t = snd_seq_query_subscribe_t *;
using snd_seq_query_subscribe_set_client_arg1_t = int;
struct snd_seq_query_subscribe_set_client
{
  const char* name = "snd_seq_query_subscribe_set_client";
  const std::vector<const char*> args = {"info", "client"};
  using type = void(*)(snd_seq_query_subscribe_t *, int);
};

}

extern "C" void snd_seq_query_subscribe_set_client(fns::snd_seq_query_subscribe_set_client_arg0_t info, fns::snd_seq_query_subscribe_set_client_arg1_t client)
{
  return fns::call_void<fns::snd_seq_query_subscribe_set_client>(info, client);
}

namespace fns
{

using snd_seq_query_subscribe_set_port_arg0_t = snd_seq_query_subscribe_t *;
using snd_seq_query_subscribe_set_port_arg1_t = int;
struct snd_seq_query_subscribe_set_port
{
  const char* name = "snd_seq_query_subscribe_set_port";
  const std::vector<const char*> args = {"info", "port"};
  using type = void(*)(snd_seq_query_subscribe_t *, int);
};

}

extern "C" void snd_seq_query_subscribe_set_port(fns::snd_seq_query_subscribe_set_port_arg0_t info, fns::snd_seq_query_subscribe_set_port_arg1_t port)
{
  return fns::call_void<fns::snd_seq_query_subscribe_set_port>(info, port);
}

namespace fns
{

using snd_seq_query_subscribe_set_root_arg0_t = snd_seq_query_subscribe_t *;
using snd_seq_query_subscribe_set_root_arg1_t = const snd_seq_addr_t *;
struct snd_seq_query_subscribe_set_root
{
  const char* name = "snd_seq_query_subscribe_set_root";
  const std::vector<const char*> args = {"info", "addr"};
  using type = void(*)(snd_seq_query_subscribe_t *, const snd_seq_addr_t *);
};

}

extern "C" void snd_seq_query_subscribe_set_root(fns::snd_seq_query_subscribe_set_root_arg0_t info, fns::snd_seq_query_subscribe_set_root_arg1_t addr)
{
  return fns::call_void<fns::snd_seq_query_subscribe_set_root>(info, addr);
}

namespace fns
{

using snd_seq_query_subscribe_set_type_arg0_t = snd_seq_query_subscribe_t *;
using snd_seq_query_subscribe_set_type_arg1_t = snd_seq_query_subs_type_t;
struct snd_seq_query_subscribe_set_type
{
  const char* name = "snd_seq_query_subscribe_set_type";
  const std::vector<const char*> args = {"info", "type"};
  using type = void(*)(snd_seq_query_subscribe_t *, snd_seq_query_subs_type_t);
};

}

extern "C" void snd_seq_query_subscribe_set_type(fns::snd_seq_query_subscribe_set_type_arg0_t info, fns::snd_seq_query_subscribe_set_type_arg1_t type)
{
  return fns::call_void<fns::snd_seq_query_subscribe_set_type>(info, type);
}

namespace fns
{

using snd_seq_query_subscribe_set_index_arg0_t = snd_seq_query_subscribe_t *;
using snd_seq_query_subscribe_set_index_arg1_t = int;
struct snd_seq_query_subscribe_set_index
{
  const char* name = "snd_seq_query_subscribe_set_index";
  const std::vector<const char*> args = {"info", "_index"};
  using type = void(*)(snd_seq_query_subscribe_t *, int);
};

}

extern "C" void snd_seq_query_subscribe_set_index(fns::snd_seq_query_subscribe_set_index_arg0_t info, fns::snd_seq_query_subscribe_set_index_arg1_t _index)
{
  return fns::call_void<fns::snd_seq_query_subscribe_set_index>(info, _index);
}

namespace fns
{

using snd_seq_query_port_subscribers_arg0_t = snd_seq_t *;
using snd_seq_query_port_subscribers_arg1_t = snd_seq_query_subscribe_t *;
struct snd_seq_query_port_subscribers
{
  const char* name = "snd_seq_query_port_subscribers";
  const std::vector<const char*> args = {"seq", "subs"};
  using type = int(*)(snd_seq_t *, snd_seq_query_subscribe_t *);
};

}

extern "C" int snd_seq_query_port_subscribers(fns::snd_seq_query_port_subscribers_arg0_t seq, fns::snd_seq_query_port_subscribers_arg1_t subs)
{
  return fns::call<fns::snd_seq_query_port_subscribers>(seq, subs);
}

namespace fns
{

struct snd_seq_queue_info_sizeof
{
  const char* name = "snd_seq_queue_info_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_seq_queue_info_sizeof()
{
  return fns::call<fns::snd_seq_queue_info_sizeof>();
}

namespace fns
{

using snd_seq_queue_info_malloc_arg0_t = snd_seq_queue_info_t **;
struct snd_seq_queue_info_malloc
{
  const char* name = "snd_seq_queue_info_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_seq_queue_info_t **);
};

}

extern "C" int snd_seq_queue_info_malloc(fns::snd_seq_queue_info_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_seq_queue_info_malloc>(ptr);
}

namespace fns
{

using snd_seq_queue_info_free_arg0_t = snd_seq_queue_info_t *;
struct snd_seq_queue_info_free
{
  const char* name = "snd_seq_queue_info_free";
  const std::vector<const char*> args = {"ptr"};
  using type = void(*)(snd_seq_queue_info_t *);
};

}

extern "C" void snd_seq_queue_info_free(fns::snd_seq_queue_info_free_arg0_t ptr)
{
  return fns::call_void<fns::snd_seq_queue_info_free>(ptr);
}

namespace fns
{

using snd_seq_queue_info_copy_arg0_t = snd_seq_queue_info_t *;
using snd_seq_queue_info_copy_arg1_t = const snd_seq_queue_info_t *;
struct snd_seq_queue_info_copy
{
  const char* name = "snd_seq_queue_info_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_seq_queue_info_t *, const snd_seq_queue_info_t *);
};

}

extern "C" void snd_seq_queue_info_copy(fns::snd_seq_queue_info_copy_arg0_t dst, fns::snd_seq_queue_info_copy_arg1_t src)
{
  return fns::call_void<fns::snd_seq_queue_info_copy>(dst, src);
}

namespace fns
{

using snd_seq_queue_info_get_queue_arg0_t = const snd_seq_queue_info_t *;
struct snd_seq_queue_info_get_queue
{
  const char* name = "snd_seq_queue_info_get_queue";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_queue_info_t *);
};

}

extern "C" int snd_seq_queue_info_get_queue(fns::snd_seq_queue_info_get_queue_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_info_get_queue>(info);
}

namespace fns
{

using snd_seq_queue_info_get_name_arg0_t = const snd_seq_queue_info_t *;
struct snd_seq_queue_info_get_name
{
  const char* name = "snd_seq_queue_info_get_name";
  const std::vector<const char*> args = {"info"};
  using type = const char *(*)(const snd_seq_queue_info_t *);
};

}

extern "C" const char * snd_seq_queue_info_get_name(fns::snd_seq_queue_info_get_name_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_info_get_name>(info);
}

namespace fns
{

using snd_seq_queue_info_get_owner_arg0_t = const snd_seq_queue_info_t *;
struct snd_seq_queue_info_get_owner
{
  const char* name = "snd_seq_queue_info_get_owner";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_queue_info_t *);
};

}

extern "C" int snd_seq_queue_info_get_owner(fns::snd_seq_queue_info_get_owner_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_info_get_owner>(info);
}

namespace fns
{

using snd_seq_queue_info_get_locked_arg0_t = const snd_seq_queue_info_t *;
struct snd_seq_queue_info_get_locked
{
  const char* name = "snd_seq_queue_info_get_locked";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_queue_info_t *);
};

}

extern "C" int snd_seq_queue_info_get_locked(fns::snd_seq_queue_info_get_locked_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_info_get_locked>(info);
}

namespace fns
{

using snd_seq_queue_info_get_flags_arg0_t = const snd_seq_queue_info_t *;
struct snd_seq_queue_info_get_flags
{
  const char* name = "snd_seq_queue_info_get_flags";
  const std::vector<const char*> args = {"info"};
  using type = unsigned int(*)(const snd_seq_queue_info_t *);
};

}

extern "C" unsigned int snd_seq_queue_info_get_flags(fns::snd_seq_queue_info_get_flags_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_info_get_flags>(info);
}

namespace fns
{

using snd_seq_queue_info_set_name_arg0_t = snd_seq_queue_info_t *;
using snd_seq_queue_info_set_name_arg1_t = const char *;
struct snd_seq_queue_info_set_name
{
  const char* name = "snd_seq_queue_info_set_name";
  const std::vector<const char*> args = {"info", "name"};
  using type = void(*)(snd_seq_queue_info_t *, const char *);
};

}

extern "C" void snd_seq_queue_info_set_name(fns::snd_seq_queue_info_set_name_arg0_t info, fns::snd_seq_queue_info_set_name_arg1_t name)
{
  return fns::call_void<fns::snd_seq_queue_info_set_name>(info, name);
}

namespace fns
{

using snd_seq_queue_info_set_owner_arg0_t = snd_seq_queue_info_t *;
using snd_seq_queue_info_set_owner_arg1_t = int;
struct snd_seq_queue_info_set_owner
{
  const char* name = "snd_seq_queue_info_set_owner";
  const std::vector<const char*> args = {"info", "owner"};
  using type = void(*)(snd_seq_queue_info_t *, int);
};

}

extern "C" void snd_seq_queue_info_set_owner(fns::snd_seq_queue_info_set_owner_arg0_t info, fns::snd_seq_queue_info_set_owner_arg1_t owner)
{
  return fns::call_void<fns::snd_seq_queue_info_set_owner>(info, owner);
}

namespace fns
{

using snd_seq_queue_info_set_locked_arg0_t = snd_seq_queue_info_t *;
using snd_seq_queue_info_set_locked_arg1_t = int;
struct snd_seq_queue_info_set_locked
{
  const char* name = "snd_seq_queue_info_set_locked";
  const std::vector<const char*> args = {"info", "locked"};
  using type = void(*)(snd_seq_queue_info_t *, int);
};

}

extern "C" void snd_seq_queue_info_set_locked(fns::snd_seq_queue_info_set_locked_arg0_t info, fns::snd_seq_queue_info_set_locked_arg1_t locked)
{
  return fns::call_void<fns::snd_seq_queue_info_set_locked>(info, locked);
}

namespace fns
{

using snd_seq_queue_info_set_flags_arg0_t = snd_seq_queue_info_t *;
using snd_seq_queue_info_set_flags_arg1_t = unsigned int;
struct snd_seq_queue_info_set_flags
{
  const char* name = "snd_seq_queue_info_set_flags";
  const std::vector<const char*> args = {"info", "flags"};
  using type = void(*)(snd_seq_queue_info_t *, unsigned int);
};

}

extern "C" void snd_seq_queue_info_set_flags(fns::snd_seq_queue_info_set_flags_arg0_t info, fns::snd_seq_queue_info_set_flags_arg1_t flags)
{
  return fns::call_void<fns::snd_seq_queue_info_set_flags>(info, flags);
}

namespace fns
{

using snd_seq_create_queue_arg0_t = snd_seq_t *;
using snd_seq_create_queue_arg1_t = snd_seq_queue_info_t *;
struct snd_seq_create_queue
{
  const char* name = "snd_seq_create_queue";
  const std::vector<const char*> args = {"seq", "info"};
  using type = int(*)(snd_seq_t *, snd_seq_queue_info_t *);
};

}

extern "C" int snd_seq_create_queue(fns::snd_seq_create_queue_arg0_t seq, fns::snd_seq_create_queue_arg1_t info)
{
  return fns::call<fns::snd_seq_create_queue>(seq, info);
}

namespace fns
{

using snd_seq_alloc_named_queue_arg0_t = snd_seq_t *;
using snd_seq_alloc_named_queue_arg1_t = const char *;
struct snd_seq_alloc_named_queue
{
  const char* name = "snd_seq_alloc_named_queue";
  const std::vector<const char*> args = {"seq", "name"};
  using type = int(*)(snd_seq_t *, const char *);
};

}

extern "C" int snd_seq_alloc_named_queue(fns::snd_seq_alloc_named_queue_arg0_t seq, fns::snd_seq_alloc_named_queue_arg1_t name)
{
  return fns::call<fns::snd_seq_alloc_named_queue>(seq, name);
}

namespace fns
{

using snd_seq_alloc_queue_arg0_t = snd_seq_t *;
struct snd_seq_alloc_queue
{
  const char* name = "snd_seq_alloc_queue";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_seq_t *);
};

}

extern "C" int snd_seq_alloc_queue(fns::snd_seq_alloc_queue_arg0_t handle)
{
  return fns::call<fns::snd_seq_alloc_queue>(handle);
}

namespace fns
{

using snd_seq_free_queue_arg0_t = snd_seq_t *;
using snd_seq_free_queue_arg1_t = int;
struct snd_seq_free_queue
{
  const char* name = "snd_seq_free_queue";
  const std::vector<const char*> args = {"handle", "q"};
  using type = int(*)(snd_seq_t *, int);
};

}

extern "C" int snd_seq_free_queue(fns::snd_seq_free_queue_arg0_t handle, fns::snd_seq_free_queue_arg1_t q)
{
  return fns::call<fns::snd_seq_free_queue>(handle, q);
}

namespace fns
{

using snd_seq_get_queue_info_arg0_t = snd_seq_t *;
using snd_seq_get_queue_info_arg1_t = int;
using snd_seq_get_queue_info_arg2_t = snd_seq_queue_info_t *;
struct snd_seq_get_queue_info
{
  const char* name = "snd_seq_get_queue_info";
  const std::vector<const char*> args = {"seq", "q", "info"};
  using type = int(*)(snd_seq_t *, int, snd_seq_queue_info_t *);
};

}

extern "C" int snd_seq_get_queue_info(fns::snd_seq_get_queue_info_arg0_t seq, fns::snd_seq_get_queue_info_arg1_t q, fns::snd_seq_get_queue_info_arg2_t info)
{
  return fns::call<fns::snd_seq_get_queue_info>(seq, q, info);
}

namespace fns
{

using snd_seq_set_queue_info_arg0_t = snd_seq_t *;
using snd_seq_set_queue_info_arg1_t = int;
using snd_seq_set_queue_info_arg2_t = snd_seq_queue_info_t *;
struct snd_seq_set_queue_info
{
  const char* name = "snd_seq_set_queue_info";
  const std::vector<const char*> args = {"seq", "q", "info"};
  using type = int(*)(snd_seq_t *, int, snd_seq_queue_info_t *);
};

}

extern "C" int snd_seq_set_queue_info(fns::snd_seq_set_queue_info_arg0_t seq, fns::snd_seq_set_queue_info_arg1_t q, fns::snd_seq_set_queue_info_arg2_t info)
{
  return fns::call<fns::snd_seq_set_queue_info>(seq, q, info);
}

namespace fns
{

using snd_seq_query_named_queue_arg0_t = snd_seq_t *;
using snd_seq_query_named_queue_arg1_t = const char *;
struct snd_seq_query_named_queue
{
  const char* name = "snd_seq_query_named_queue";
  const std::vector<const char*> args = {"seq", "name"};
  using type = int(*)(snd_seq_t *, const char *);
};

}

extern "C" int snd_seq_query_named_queue(fns::snd_seq_query_named_queue_arg0_t seq, fns::snd_seq_query_named_queue_arg1_t name)
{
  return fns::call<fns::snd_seq_query_named_queue>(seq, name);
}

namespace fns
{

using snd_seq_get_queue_usage_arg0_t = snd_seq_t *;
using snd_seq_get_queue_usage_arg1_t = int;
struct snd_seq_get_queue_usage
{
  const char* name = "snd_seq_get_queue_usage";
  const std::vector<const char*> args = {"handle", "q"};
  using type = int(*)(snd_seq_t *, int);
};

}

extern "C" int snd_seq_get_queue_usage(fns::snd_seq_get_queue_usage_arg0_t handle, fns::snd_seq_get_queue_usage_arg1_t q)
{
  return fns::call<fns::snd_seq_get_queue_usage>(handle, q);
}

namespace fns
{

using snd_seq_set_queue_usage_arg0_t = snd_seq_t *;
using snd_seq_set_queue_usage_arg1_t = int;
using snd_seq_set_queue_usage_arg2_t = int;
struct snd_seq_set_queue_usage
{
  const char* name = "snd_seq_set_queue_usage";
  const std::vector<const char*> args = {"handle", "q", "used"};
  using type = int(*)(snd_seq_t *, int, int);
};

}

extern "C" int snd_seq_set_queue_usage(fns::snd_seq_set_queue_usage_arg0_t handle, fns::snd_seq_set_queue_usage_arg1_t q, fns::snd_seq_set_queue_usage_arg2_t used)
{
  return fns::call<fns::snd_seq_set_queue_usage>(handle, q, used);
}

namespace fns
{

struct snd_seq_queue_status_sizeof
{
  const char* name = "snd_seq_queue_status_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_seq_queue_status_sizeof()
{
  return fns::call<fns::snd_seq_queue_status_sizeof>();
}

namespace fns
{

using snd_seq_queue_status_malloc_arg0_t = snd_seq_queue_status_t **;
struct snd_seq_queue_status_malloc
{
  const char* name = "snd_seq_queue_status_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_seq_queue_status_t **);
};

}

extern "C" int snd_seq_queue_status_malloc(fns::snd_seq_queue_status_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_seq_queue_status_malloc>(ptr);
}

namespace fns
{

using snd_seq_queue_status_free_arg0_t = snd_seq_queue_status_t *;
struct snd_seq_queue_status_free
{
  const char* name = "snd_seq_queue_status_free";
  const std::vector<const char*> args = {"ptr"};
  using type = void(*)(snd_seq_queue_status_t *);
};

}

extern "C" void snd_seq_queue_status_free(fns::snd_seq_queue_status_free_arg0_t ptr)
{
  return fns::call_void<fns::snd_seq_queue_status_free>(ptr);
}

namespace fns
{

using snd_seq_queue_status_copy_arg0_t = snd_seq_queue_status_t *;
using snd_seq_queue_status_copy_arg1_t = const snd_seq_queue_status_t *;
struct snd_seq_queue_status_copy
{
  const char* name = "snd_seq_queue_status_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_seq_queue_status_t *, const snd_seq_queue_status_t *);
};

}

extern "C" void snd_seq_queue_status_copy(fns::snd_seq_queue_status_copy_arg0_t dst, fns::snd_seq_queue_status_copy_arg1_t src)
{
  return fns::call_void<fns::snd_seq_queue_status_copy>(dst, src);
}

namespace fns
{

using snd_seq_queue_status_get_queue_arg0_t = const snd_seq_queue_status_t *;
struct snd_seq_queue_status_get_queue
{
  const char* name = "snd_seq_queue_status_get_queue";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_queue_status_t *);
};

}

extern "C" int snd_seq_queue_status_get_queue(fns::snd_seq_queue_status_get_queue_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_status_get_queue>(info);
}

namespace fns
{

using snd_seq_queue_status_get_events_arg0_t = const snd_seq_queue_status_t *;
struct snd_seq_queue_status_get_events
{
  const char* name = "snd_seq_queue_status_get_events";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_queue_status_t *);
};

}

extern "C" int snd_seq_queue_status_get_events(fns::snd_seq_queue_status_get_events_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_status_get_events>(info);
}

namespace fns
{

using snd_seq_queue_status_get_tick_time_arg0_t = const snd_seq_queue_status_t *;
struct snd_seq_queue_status_get_tick_time
{
  const char* name = "snd_seq_queue_status_get_tick_time";
  const std::vector<const char*> args = {"info"};
  using type = snd_seq_tick_time_t(*)(const snd_seq_queue_status_t *);
};

}

extern "C" snd_seq_tick_time_t snd_seq_queue_status_get_tick_time(fns::snd_seq_queue_status_get_tick_time_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_status_get_tick_time>(info);
}

namespace fns
{

using snd_seq_queue_status_get_real_time_arg0_t = const snd_seq_queue_status_t *;
struct snd_seq_queue_status_get_real_time
{
  const char* name = "snd_seq_queue_status_get_real_time";
  const std::vector<const char*> args = {"info"};
  using type = const snd_seq_real_time_t *(*)(const snd_seq_queue_status_t *);
};

}

extern "C" const snd_seq_real_time_t * snd_seq_queue_status_get_real_time(fns::snd_seq_queue_status_get_real_time_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_status_get_real_time>(info);
}

namespace fns
{

using snd_seq_queue_status_get_status_arg0_t = const snd_seq_queue_status_t *;
struct snd_seq_queue_status_get_status
{
  const char* name = "snd_seq_queue_status_get_status";
  const std::vector<const char*> args = {"info"};
  using type = unsigned int(*)(const snd_seq_queue_status_t *);
};

}

extern "C" unsigned int snd_seq_queue_status_get_status(fns::snd_seq_queue_status_get_status_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_status_get_status>(info);
}

namespace fns
{

using snd_seq_get_queue_status_arg0_t = snd_seq_t *;
using snd_seq_get_queue_status_arg1_t = int;
using snd_seq_get_queue_status_arg2_t = snd_seq_queue_status_t *;
struct snd_seq_get_queue_status
{
  const char* name = "snd_seq_get_queue_status";
  const std::vector<const char*> args = {"handle", "q", "status"};
  using type = int(*)(snd_seq_t *, int, snd_seq_queue_status_t *);
};

}

extern "C" int snd_seq_get_queue_status(fns::snd_seq_get_queue_status_arg0_t handle, fns::snd_seq_get_queue_status_arg1_t q, fns::snd_seq_get_queue_status_arg2_t status)
{
  return fns::call<fns::snd_seq_get_queue_status>(handle, q, status);
}

namespace fns
{

struct snd_seq_queue_tempo_sizeof
{
  const char* name = "snd_seq_queue_tempo_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_seq_queue_tempo_sizeof()
{
  return fns::call<fns::snd_seq_queue_tempo_sizeof>();
}

namespace fns
{

using snd_seq_queue_tempo_malloc_arg0_t = snd_seq_queue_tempo_t **;
struct snd_seq_queue_tempo_malloc
{
  const char* name = "snd_seq_queue_tempo_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_seq_queue_tempo_t **);
};

}

extern "C" int snd_seq_queue_tempo_malloc(fns::snd_seq_queue_tempo_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_seq_queue_tempo_malloc>(ptr);
}

namespace fns
{

using snd_seq_queue_tempo_free_arg0_t = snd_seq_queue_tempo_t *;
struct snd_seq_queue_tempo_free
{
  const char* name = "snd_seq_queue_tempo_free";
  const std::vector<const char*> args = {"ptr"};
  using type = void(*)(snd_seq_queue_tempo_t *);
};

}

extern "C" void snd_seq_queue_tempo_free(fns::snd_seq_queue_tempo_free_arg0_t ptr)
{
  return fns::call_void<fns::snd_seq_queue_tempo_free>(ptr);
}

namespace fns
{

using snd_seq_queue_tempo_copy_arg0_t = snd_seq_queue_tempo_t *;
using snd_seq_queue_tempo_copy_arg1_t = const snd_seq_queue_tempo_t *;
struct snd_seq_queue_tempo_copy
{
  const char* name = "snd_seq_queue_tempo_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_seq_queue_tempo_t *, const snd_seq_queue_tempo_t *);
};

}

extern "C" void snd_seq_queue_tempo_copy(fns::snd_seq_queue_tempo_copy_arg0_t dst, fns::snd_seq_queue_tempo_copy_arg1_t src)
{
  return fns::call_void<fns::snd_seq_queue_tempo_copy>(dst, src);
}

namespace fns
{

using snd_seq_queue_tempo_get_queue_arg0_t = const snd_seq_queue_tempo_t *;
struct snd_seq_queue_tempo_get_queue
{
  const char* name = "snd_seq_queue_tempo_get_queue";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_queue_tempo_t *);
};

}

extern "C" int snd_seq_queue_tempo_get_queue(fns::snd_seq_queue_tempo_get_queue_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_tempo_get_queue>(info);
}

namespace fns
{

using snd_seq_queue_tempo_get_tempo_arg0_t = const snd_seq_queue_tempo_t *;
struct snd_seq_queue_tempo_get_tempo
{
  const char* name = "snd_seq_queue_tempo_get_tempo";
  const std::vector<const char*> args = {"info"};
  using type = unsigned int(*)(const snd_seq_queue_tempo_t *);
};

}

extern "C" unsigned int snd_seq_queue_tempo_get_tempo(fns::snd_seq_queue_tempo_get_tempo_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_tempo_get_tempo>(info);
}

namespace fns
{

using snd_seq_queue_tempo_get_ppq_arg0_t = const snd_seq_queue_tempo_t *;
struct snd_seq_queue_tempo_get_ppq
{
  const char* name = "snd_seq_queue_tempo_get_ppq";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_queue_tempo_t *);
};

}

extern "C" int snd_seq_queue_tempo_get_ppq(fns::snd_seq_queue_tempo_get_ppq_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_tempo_get_ppq>(info);
}

namespace fns
{

using snd_seq_queue_tempo_get_skew_arg0_t = const snd_seq_queue_tempo_t *;
struct snd_seq_queue_tempo_get_skew
{
  const char* name = "snd_seq_queue_tempo_get_skew";
  const std::vector<const char*> args = {"info"};
  using type = unsigned int(*)(const snd_seq_queue_tempo_t *);
};

}

extern "C" unsigned int snd_seq_queue_tempo_get_skew(fns::snd_seq_queue_tempo_get_skew_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_tempo_get_skew>(info);
}

namespace fns
{

using snd_seq_queue_tempo_get_skew_base_arg0_t = const snd_seq_queue_tempo_t *;
struct snd_seq_queue_tempo_get_skew_base
{
  const char* name = "snd_seq_queue_tempo_get_skew_base";
  const std::vector<const char*> args = {"info"};
  using type = unsigned int(*)(const snd_seq_queue_tempo_t *);
};

}

extern "C" unsigned int snd_seq_queue_tempo_get_skew_base(fns::snd_seq_queue_tempo_get_skew_base_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_tempo_get_skew_base>(info);
}

namespace fns
{

using snd_seq_queue_tempo_set_tempo_arg0_t = snd_seq_queue_tempo_t *;
using snd_seq_queue_tempo_set_tempo_arg1_t = unsigned int;
struct snd_seq_queue_tempo_set_tempo
{
  const char* name = "snd_seq_queue_tempo_set_tempo";
  const std::vector<const char*> args = {"info", "tempo"};
  using type = void(*)(snd_seq_queue_tempo_t *, unsigned int);
};

}

extern "C" void snd_seq_queue_tempo_set_tempo(fns::snd_seq_queue_tempo_set_tempo_arg0_t info, fns::snd_seq_queue_tempo_set_tempo_arg1_t tempo)
{
  return fns::call_void<fns::snd_seq_queue_tempo_set_tempo>(info, tempo);
}

namespace fns
{

using snd_seq_queue_tempo_set_ppq_arg0_t = snd_seq_queue_tempo_t *;
using snd_seq_queue_tempo_set_ppq_arg1_t = int;
struct snd_seq_queue_tempo_set_ppq
{
  const char* name = "snd_seq_queue_tempo_set_ppq";
  const std::vector<const char*> args = {"info", "ppq"};
  using type = void(*)(snd_seq_queue_tempo_t *, int);
};

}

extern "C" void snd_seq_queue_tempo_set_ppq(fns::snd_seq_queue_tempo_set_ppq_arg0_t info, fns::snd_seq_queue_tempo_set_ppq_arg1_t ppq)
{
  return fns::call_void<fns::snd_seq_queue_tempo_set_ppq>(info, ppq);
}

namespace fns
{

using snd_seq_queue_tempo_set_skew_arg0_t = snd_seq_queue_tempo_t *;
using snd_seq_queue_tempo_set_skew_arg1_t = unsigned int;
struct snd_seq_queue_tempo_set_skew
{
  const char* name = "snd_seq_queue_tempo_set_skew";
  const std::vector<const char*> args = {"info", "skew"};
  using type = void(*)(snd_seq_queue_tempo_t *, unsigned int);
};

}

extern "C" void snd_seq_queue_tempo_set_skew(fns::snd_seq_queue_tempo_set_skew_arg0_t info, fns::snd_seq_queue_tempo_set_skew_arg1_t skew)
{
  return fns::call_void<fns::snd_seq_queue_tempo_set_skew>(info, skew);
}

namespace fns
{

using snd_seq_queue_tempo_set_skew_base_arg0_t = snd_seq_queue_tempo_t *;
using snd_seq_queue_tempo_set_skew_base_arg1_t = unsigned int;
struct snd_seq_queue_tempo_set_skew_base
{
  const char* name = "snd_seq_queue_tempo_set_skew_base";
  const std::vector<const char*> args = {"info", "base"};
  using type = void(*)(snd_seq_queue_tempo_t *, unsigned int);
};

}

extern "C" void snd_seq_queue_tempo_set_skew_base(fns::snd_seq_queue_tempo_set_skew_base_arg0_t info, fns::snd_seq_queue_tempo_set_skew_base_arg1_t base)
{
  return fns::call_void<fns::snd_seq_queue_tempo_set_skew_base>(info, base);
}

namespace fns
{

using snd_seq_get_queue_tempo_arg0_t = snd_seq_t *;
using snd_seq_get_queue_tempo_arg1_t = int;
using snd_seq_get_queue_tempo_arg2_t = snd_seq_queue_tempo_t *;
struct snd_seq_get_queue_tempo
{
  const char* name = "snd_seq_get_queue_tempo";
  const std::vector<const char*> args = {"handle", "q", "tempo"};
  using type = int(*)(snd_seq_t *, int, snd_seq_queue_tempo_t *);
};

}

extern "C" int snd_seq_get_queue_tempo(fns::snd_seq_get_queue_tempo_arg0_t handle, fns::snd_seq_get_queue_tempo_arg1_t q, fns::snd_seq_get_queue_tempo_arg2_t tempo)
{
  return fns::call<fns::snd_seq_get_queue_tempo>(handle, q, tempo);
}

namespace fns
{

using snd_seq_set_queue_tempo_arg0_t = snd_seq_t *;
using snd_seq_set_queue_tempo_arg1_t = int;
using snd_seq_set_queue_tempo_arg2_t = snd_seq_queue_tempo_t *;
struct snd_seq_set_queue_tempo
{
  const char* name = "snd_seq_set_queue_tempo";
  const std::vector<const char*> args = {"handle", "q", "tempo"};
  using type = int(*)(snd_seq_t *, int, snd_seq_queue_tempo_t *);
};

}

extern "C" int snd_seq_set_queue_tempo(fns::snd_seq_set_queue_tempo_arg0_t handle, fns::snd_seq_set_queue_tempo_arg1_t q, fns::snd_seq_set_queue_tempo_arg2_t tempo)
{
  return fns::call<fns::snd_seq_set_queue_tempo>(handle, q, tempo);
}

namespace fns
{

struct snd_seq_queue_timer_sizeof
{
  const char* name = "snd_seq_queue_timer_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_seq_queue_timer_sizeof()
{
  return fns::call<fns::snd_seq_queue_timer_sizeof>();
}

namespace fns
{

using snd_seq_queue_timer_malloc_arg0_t = snd_seq_queue_timer_t **;
struct snd_seq_queue_timer_malloc
{
  const char* name = "snd_seq_queue_timer_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_seq_queue_timer_t **);
};

}

extern "C" int snd_seq_queue_timer_malloc(fns::snd_seq_queue_timer_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_seq_queue_timer_malloc>(ptr);
}

namespace fns
{

using snd_seq_queue_timer_free_arg0_t = snd_seq_queue_timer_t *;
struct snd_seq_queue_timer_free
{
  const char* name = "snd_seq_queue_timer_free";
  const std::vector<const char*> args = {"ptr"};
  using type = void(*)(snd_seq_queue_timer_t *);
};

}

extern "C" void snd_seq_queue_timer_free(fns::snd_seq_queue_timer_free_arg0_t ptr)
{
  return fns::call_void<fns::snd_seq_queue_timer_free>(ptr);
}

namespace fns
{

using snd_seq_queue_timer_copy_arg0_t = snd_seq_queue_timer_t *;
using snd_seq_queue_timer_copy_arg1_t = const snd_seq_queue_timer_t *;
struct snd_seq_queue_timer_copy
{
  const char* name = "snd_seq_queue_timer_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_seq_queue_timer_t *, const snd_seq_queue_timer_t *);
};

}

extern "C" void snd_seq_queue_timer_copy(fns::snd_seq_queue_timer_copy_arg0_t dst, fns::snd_seq_queue_timer_copy_arg1_t src)
{
  return fns::call_void<fns::snd_seq_queue_timer_copy>(dst, src);
}

namespace fns
{

using snd_seq_queue_timer_get_queue_arg0_t = const snd_seq_queue_timer_t *;
struct snd_seq_queue_timer_get_queue
{
  const char* name = "snd_seq_queue_timer_get_queue";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_queue_timer_t *);
};

}

extern "C" int snd_seq_queue_timer_get_queue(fns::snd_seq_queue_timer_get_queue_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_timer_get_queue>(info);
}

namespace fns
{

using snd_seq_queue_timer_get_type_arg0_t = const snd_seq_queue_timer_t *;
struct snd_seq_queue_timer_get_type
{
  const char* name = "snd_seq_queue_timer_get_type";
  const std::vector<const char*> args = {"info"};
  using type = snd_seq_queue_timer_type_t(*)(const snd_seq_queue_timer_t *);
};

}

extern "C" snd_seq_queue_timer_type_t snd_seq_queue_timer_get_type(fns::snd_seq_queue_timer_get_type_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_timer_get_type>(info);
}

namespace fns
{

using snd_seq_queue_timer_get_id_arg0_t = const snd_seq_queue_timer_t *;
struct snd_seq_queue_timer_get_id
{
  const char* name = "snd_seq_queue_timer_get_id";
  const std::vector<const char*> args = {"info"};
  using type = const snd_timer_id_t *(*)(const snd_seq_queue_timer_t *);
};

}

extern "C" const snd_timer_id_t * snd_seq_queue_timer_get_id(fns::snd_seq_queue_timer_get_id_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_timer_get_id>(info);
}

namespace fns
{

using snd_seq_queue_timer_get_resolution_arg0_t = const snd_seq_queue_timer_t *;
struct snd_seq_queue_timer_get_resolution
{
  const char* name = "snd_seq_queue_timer_get_resolution";
  const std::vector<const char*> args = {"info"};
  using type = unsigned int(*)(const snd_seq_queue_timer_t *);
};

}

extern "C" unsigned int snd_seq_queue_timer_get_resolution(fns::snd_seq_queue_timer_get_resolution_arg0_t info)
{
  return fns::call<fns::snd_seq_queue_timer_get_resolution>(info);
}

namespace fns
{

using snd_seq_queue_timer_set_type_arg0_t = snd_seq_queue_timer_t *;
using snd_seq_queue_timer_set_type_arg1_t = snd_seq_queue_timer_type_t;
struct snd_seq_queue_timer_set_type
{
  const char* name = "snd_seq_queue_timer_set_type";
  const std::vector<const char*> args = {"info", "type"};
  using type = void(*)(snd_seq_queue_timer_t *, snd_seq_queue_timer_type_t);
};

}

extern "C" void snd_seq_queue_timer_set_type(fns::snd_seq_queue_timer_set_type_arg0_t info, fns::snd_seq_queue_timer_set_type_arg1_t type)
{
  return fns::call_void<fns::snd_seq_queue_timer_set_type>(info, type);
}

namespace fns
{

using snd_seq_queue_timer_set_id_arg0_t = snd_seq_queue_timer_t *;
using snd_seq_queue_timer_set_id_arg1_t = const snd_timer_id_t *;
struct snd_seq_queue_timer_set_id
{
  const char* name = "snd_seq_queue_timer_set_id";
  const std::vector<const char*> args = {"info", "id"};
  using type = void(*)(snd_seq_queue_timer_t *, const snd_timer_id_t *);
};

}

extern "C" void snd_seq_queue_timer_set_id(fns::snd_seq_queue_timer_set_id_arg0_t info, fns::snd_seq_queue_timer_set_id_arg1_t id)
{
  return fns::call_void<fns::snd_seq_queue_timer_set_id>(info, id);
}

namespace fns
{

using snd_seq_queue_timer_set_resolution_arg0_t = snd_seq_queue_timer_t *;
using snd_seq_queue_timer_set_resolution_arg1_t = unsigned int;
struct snd_seq_queue_timer_set_resolution
{
  const char* name = "snd_seq_queue_timer_set_resolution";
  const std::vector<const char*> args = {"info", "resolution"};
  using type = void(*)(snd_seq_queue_timer_t *, unsigned int);
};

}

extern "C" void snd_seq_queue_timer_set_resolution(fns::snd_seq_queue_timer_set_resolution_arg0_t info, fns::snd_seq_queue_timer_set_resolution_arg1_t resolution)
{
  return fns::call_void<fns::snd_seq_queue_timer_set_resolution>(info, resolution);
}

namespace fns
{

using snd_seq_get_queue_timer_arg0_t = snd_seq_t *;
using snd_seq_get_queue_timer_arg1_t = int;
using snd_seq_get_queue_timer_arg2_t = snd_seq_queue_timer_t *;
struct snd_seq_get_queue_timer
{
  const char* name = "snd_seq_get_queue_timer";
  const std::vector<const char*> args = {"handle", "q", "timer"};
  using type = int(*)(snd_seq_t *, int, snd_seq_queue_timer_t *);
};

}

extern "C" int snd_seq_get_queue_timer(fns::snd_seq_get_queue_timer_arg0_t handle, fns::snd_seq_get_queue_timer_arg1_t q, fns::snd_seq_get_queue_timer_arg2_t timer)
{
  return fns::call<fns::snd_seq_get_queue_timer>(handle, q, timer);
}

namespace fns
{

using snd_seq_set_queue_timer_arg0_t = snd_seq_t *;
using snd_seq_set_queue_timer_arg1_t = int;
using snd_seq_set_queue_timer_arg2_t = snd_seq_queue_timer_t *;
struct snd_seq_set_queue_timer
{
  const char* name = "snd_seq_set_queue_timer";
  const std::vector<const char*> args = {"handle", "q", "timer"};
  using type = int(*)(snd_seq_t *, int, snd_seq_queue_timer_t *);
};

}

extern "C" int snd_seq_set_queue_timer(fns::snd_seq_set_queue_timer_arg0_t handle, fns::snd_seq_set_queue_timer_arg1_t q, fns::snd_seq_set_queue_timer_arg2_t timer)
{
  return fns::call<fns::snd_seq_set_queue_timer>(handle, q, timer);
}

namespace fns
{

using snd_seq_free_event_arg0_t = snd_seq_event_t *;
struct snd_seq_free_event
{
  const char* name = "snd_seq_free_event";
  const std::vector<const char*> args = {"ev"};
  using type = int(*)(snd_seq_event_t *);
};

}

extern "C" int snd_seq_free_event(fns::snd_seq_free_event_arg0_t ev)
{
  return fns::call<fns::snd_seq_free_event>(ev);
}

namespace fns
{

using snd_seq_event_length_arg0_t = snd_seq_event_t *;
struct snd_seq_event_length
{
  const char* name = "snd_seq_event_length";
  const std::vector<const char*> args = {"ev"};
  using type = ssize_t(*)(snd_seq_event_t *);
};

}

extern "C" ssize_t snd_seq_event_length(fns::snd_seq_event_length_arg0_t ev)
{
  return fns::call<fns::snd_seq_event_length>(ev);
}

namespace fns
{

using snd_seq_event_output_arg0_t = snd_seq_t *;
using snd_seq_event_output_arg1_t = snd_seq_event_t *;
struct snd_seq_event_output
{
  const char* name = "snd_seq_event_output";
  const std::vector<const char*> args = {"handle", "ev"};
  using type = int(*)(snd_seq_t *, snd_seq_event_t *);
};

}

extern "C" int snd_seq_event_output(fns::snd_seq_event_output_arg0_t handle, fns::snd_seq_event_output_arg1_t ev)
{
  return fns::call<fns::snd_seq_event_output>(handle, ev);
}

namespace fns
{

using snd_seq_event_output_buffer_arg0_t = snd_seq_t *;
using snd_seq_event_output_buffer_arg1_t = snd_seq_event_t *;
struct snd_seq_event_output_buffer
{
  const char* name = "snd_seq_event_output_buffer";
  const std::vector<const char*> args = {"handle", "ev"};
  using type = int(*)(snd_seq_t *, snd_seq_event_t *);
};

}

extern "C" int snd_seq_event_output_buffer(fns::snd_seq_event_output_buffer_arg0_t handle, fns::snd_seq_event_output_buffer_arg1_t ev)
{
  return fns::call<fns::snd_seq_event_output_buffer>(handle, ev);
}

namespace fns
{

using snd_seq_event_output_direct_arg0_t = snd_seq_t *;
using snd_seq_event_output_direct_arg1_t = snd_seq_event_t *;
struct snd_seq_event_output_direct
{
  const char* name = "snd_seq_event_output_direct";
  const std::vector<const char*> args = {"handle", "ev"};
  using type = int(*)(snd_seq_t *, snd_seq_event_t *);
};

}

extern "C" int snd_seq_event_output_direct(fns::snd_seq_event_output_direct_arg0_t handle, fns::snd_seq_event_output_direct_arg1_t ev)
{
  return fns::call<fns::snd_seq_event_output_direct>(handle, ev);
}

namespace fns
{

using snd_seq_event_input_arg0_t = snd_seq_t *;
using snd_seq_event_input_arg1_t = snd_seq_event_t **;
struct snd_seq_event_input
{
  const char* name = "snd_seq_event_input";
  const std::vector<const char*> args = {"handle", "ev"};
  using type = int(*)(snd_seq_t *, snd_seq_event_t **);
};

}

extern "C" int snd_seq_event_input(fns::snd_seq_event_input_arg0_t handle, fns::snd_seq_event_input_arg1_t ev)
{
  return fns::call<fns::snd_seq_event_input>(handle, ev);
}

namespace fns
{

using snd_seq_event_input_pending_arg0_t = snd_seq_t *;
using snd_seq_event_input_pending_arg1_t = int;
struct snd_seq_event_input_pending
{
  const char* name = "snd_seq_event_input_pending";
  const std::vector<const char*> args = {"seq", "fetch_sequencer"};
  using type = int(*)(snd_seq_t *, int);
};

}

extern "C" int snd_seq_event_input_pending(fns::snd_seq_event_input_pending_arg0_t seq, fns::snd_seq_event_input_pending_arg1_t fetch_sequencer)
{
  return fns::call<fns::snd_seq_event_input_pending>(seq, fetch_sequencer);
}

namespace fns
{

using snd_seq_drain_output_arg0_t = snd_seq_t *;
struct snd_seq_drain_output
{
  const char* name = "snd_seq_drain_output";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_seq_t *);
};

}

extern "C" int snd_seq_drain_output(fns::snd_seq_drain_output_arg0_t handle)
{
  return fns::call<fns::snd_seq_drain_output>(handle);
}

namespace fns
{

using snd_seq_event_output_pending_arg0_t = snd_seq_t *;
struct snd_seq_event_output_pending
{
  const char* name = "snd_seq_event_output_pending";
  const std::vector<const char*> args = {"seq"};
  using type = int(*)(snd_seq_t *);
};

}

extern "C" int snd_seq_event_output_pending(fns::snd_seq_event_output_pending_arg0_t seq)
{
  return fns::call<fns::snd_seq_event_output_pending>(seq);
}

namespace fns
{

using snd_seq_extract_output_arg0_t = snd_seq_t *;
using snd_seq_extract_output_arg1_t = snd_seq_event_t **;
struct snd_seq_extract_output
{
  const char* name = "snd_seq_extract_output";
  const std::vector<const char*> args = {"handle", "ev"};
  using type = int(*)(snd_seq_t *, snd_seq_event_t **);
};

}

extern "C" int snd_seq_extract_output(fns::snd_seq_extract_output_arg0_t handle, fns::snd_seq_extract_output_arg1_t ev)
{
  return fns::call<fns::snd_seq_extract_output>(handle, ev);
}

namespace fns
{

using snd_seq_drop_output_arg0_t = snd_seq_t *;
struct snd_seq_drop_output
{
  const char* name = "snd_seq_drop_output";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_seq_t *);
};

}

extern "C" int snd_seq_drop_output(fns::snd_seq_drop_output_arg0_t handle)
{
  return fns::call<fns::snd_seq_drop_output>(handle);
}

namespace fns
{

using snd_seq_drop_output_buffer_arg0_t = snd_seq_t *;
struct snd_seq_drop_output_buffer
{
  const char* name = "snd_seq_drop_output_buffer";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_seq_t *);
};

}

extern "C" int snd_seq_drop_output_buffer(fns::snd_seq_drop_output_buffer_arg0_t handle)
{
  return fns::call<fns::snd_seq_drop_output_buffer>(handle);
}

namespace fns
{

using snd_seq_drop_input_arg0_t = snd_seq_t *;
struct snd_seq_drop_input
{
  const char* name = "snd_seq_drop_input";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_seq_t *);
};

}

extern "C" int snd_seq_drop_input(fns::snd_seq_drop_input_arg0_t handle)
{
  return fns::call<fns::snd_seq_drop_input>(handle);
}

namespace fns
{

using snd_seq_drop_input_buffer_arg0_t = snd_seq_t *;
struct snd_seq_drop_input_buffer
{
  const char* name = "snd_seq_drop_input_buffer";
  const std::vector<const char*> args = {"handle"};
  using type = int(*)(snd_seq_t *);
};

}

extern "C" int snd_seq_drop_input_buffer(fns::snd_seq_drop_input_buffer_arg0_t handle)
{
  return fns::call<fns::snd_seq_drop_input_buffer>(handle);
}

namespace fns
{

struct snd_seq_remove_events_sizeof
{
  const char* name = "snd_seq_remove_events_sizeof";
  const std::vector<const char*> args = {};
  using type = size_t(*)();
};

}

extern "C" size_t snd_seq_remove_events_sizeof()
{
  return fns::call<fns::snd_seq_remove_events_sizeof>();
}

namespace fns
{

using snd_seq_remove_events_malloc_arg0_t = snd_seq_remove_events_t **;
struct snd_seq_remove_events_malloc
{
  const char* name = "snd_seq_remove_events_malloc";
  const std::vector<const char*> args = {"ptr"};
  using type = int(*)(snd_seq_remove_events_t **);
};

}

extern "C" int snd_seq_remove_events_malloc(fns::snd_seq_remove_events_malloc_arg0_t ptr)
{
  return fns::call<fns::snd_seq_remove_events_malloc>(ptr);
}

namespace fns
{

using snd_seq_remove_events_free_arg0_t = snd_seq_remove_events_t *;
struct snd_seq_remove_events_free
{
  const char* name = "snd_seq_remove_events_free";
  const std::vector<const char*> args = {"ptr"};
  using type = void(*)(snd_seq_remove_events_t *);
};

}

extern "C" void snd_seq_remove_events_free(fns::snd_seq_remove_events_free_arg0_t ptr)
{
  return fns::call_void<fns::snd_seq_remove_events_free>(ptr);
}

namespace fns
{

using snd_seq_remove_events_copy_arg0_t = snd_seq_remove_events_t *;
using snd_seq_remove_events_copy_arg1_t = const snd_seq_remove_events_t *;
struct snd_seq_remove_events_copy
{
  const char* name = "snd_seq_remove_events_copy";
  const std::vector<const char*> args = {"dst", "src"};
  using type = void(*)(snd_seq_remove_events_t *, const snd_seq_remove_events_t *);
};

}

extern "C" void snd_seq_remove_events_copy(fns::snd_seq_remove_events_copy_arg0_t dst, fns::snd_seq_remove_events_copy_arg1_t src)
{
  return fns::call_void<fns::snd_seq_remove_events_copy>(dst, src);
}

namespace fns
{

using snd_seq_remove_events_get_condition_arg0_t = const snd_seq_remove_events_t *;
struct snd_seq_remove_events_get_condition
{
  const char* name = "snd_seq_remove_events_get_condition";
  const std::vector<const char*> args = {"info"};
  using type = unsigned int(*)(const snd_seq_remove_events_t *);
};

}

extern "C" unsigned int snd_seq_remove_events_get_condition(fns::snd_seq_remove_events_get_condition_arg0_t info)
{
  return fns::call<fns::snd_seq_remove_events_get_condition>(info);
}

namespace fns
{

using snd_seq_remove_events_get_queue_arg0_t = const snd_seq_remove_events_t *;
struct snd_seq_remove_events_get_queue
{
  const char* name = "snd_seq_remove_events_get_queue";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_remove_events_t *);
};

}

extern "C" int snd_seq_remove_events_get_queue(fns::snd_seq_remove_events_get_queue_arg0_t info)
{
  return fns::call<fns::snd_seq_remove_events_get_queue>(info);
}

namespace fns
{

using snd_seq_remove_events_get_time_arg0_t = const snd_seq_remove_events_t *;
struct snd_seq_remove_events_get_time
{
  const char* name = "snd_seq_remove_events_get_time";
  const std::vector<const char*> args = {"info"};
  using type = const snd_seq_timestamp_t *(*)(const snd_seq_remove_events_t *);
};

}

extern "C" const snd_seq_timestamp_t * snd_seq_remove_events_get_time(fns::snd_seq_remove_events_get_time_arg0_t info)
{
  return fns::call<fns::snd_seq_remove_events_get_time>(info);
}

namespace fns
{

using snd_seq_remove_events_get_dest_arg0_t = const snd_seq_remove_events_t *;
struct snd_seq_remove_events_get_dest
{
  const char* name = "snd_seq_remove_events_get_dest";
  const std::vector<const char*> args = {"info"};
  using type = const snd_seq_addr_t *(*)(const snd_seq_remove_events_t *);
};

}

extern "C" const snd_seq_addr_t * snd_seq_remove_events_get_dest(fns::snd_seq_remove_events_get_dest_arg0_t info)
{
  return fns::call<fns::snd_seq_remove_events_get_dest>(info);
}

namespace fns
{

using snd_seq_remove_events_get_channel_arg0_t = const snd_seq_remove_events_t *;
struct snd_seq_remove_events_get_channel
{
  const char* name = "snd_seq_remove_events_get_channel";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_remove_events_t *);
};

}

extern "C" int snd_seq_remove_events_get_channel(fns::snd_seq_remove_events_get_channel_arg0_t info)
{
  return fns::call<fns::snd_seq_remove_events_get_channel>(info);
}

namespace fns
{

using snd_seq_remove_events_get_event_type_arg0_t = const snd_seq_remove_events_t *;
struct snd_seq_remove_events_get_event_type
{
  const char* name = "snd_seq_remove_events_get_event_type";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_remove_events_t *);
};

}

extern "C" int snd_seq_remove_events_get_event_type(fns::snd_seq_remove_events_get_event_type_arg0_t info)
{
  return fns::call<fns::snd_seq_remove_events_get_event_type>(info);
}

namespace fns
{

using snd_seq_remove_events_get_tag_arg0_t = const snd_seq_remove_events_t *;
struct snd_seq_remove_events_get_tag
{
  const char* name = "snd_seq_remove_events_get_tag";
  const std::vector<const char*> args = {"info"};
  using type = int(*)(const snd_seq_remove_events_t *);
};

}

extern "C" int snd_seq_remove_events_get_tag(fns::snd_seq_remove_events_get_tag_arg0_t info)
{
  return fns::call<fns::snd_seq_remove_events_get_tag>(info);
}

namespace fns
{

using snd_seq_remove_events_set_condition_arg0_t = snd_seq_remove_events_t *;
using snd_seq_remove_events_set_condition_arg1_t = unsigned int;
struct snd_seq_remove_events_set_condition
{
  const char* name = "snd_seq_remove_events_set_condition";
  const std::vector<const char*> args = {"info", "flags"};
  using type = void(*)(snd_seq_remove_events_t *, unsigned int);
};

}

extern "C" void snd_seq_remove_events_set_condition(fns::snd_seq_remove_events_set_condition_arg0_t info, fns::snd_seq_remove_events_set_condition_arg1_t flags)
{
  return fns::call_void<fns::snd_seq_remove_events_set_condition>(info, flags);
}

namespace fns
{

using snd_seq_remove_events_set_queue_arg0_t = snd_seq_remove_events_t *;
using snd_seq_remove_events_set_queue_arg1_t = int;
struct snd_seq_remove_events_set_queue
{
  const char* name = "snd_seq_remove_events_set_queue";
  const std::vector<const char*> args = {"info", "queue"};
  using type = void(*)(snd_seq_remove_events_t *, int);
};

}

extern "C" void snd_seq_remove_events_set_queue(fns::snd_seq_remove_events_set_queue_arg0_t info, fns::snd_seq_remove_events_set_queue_arg1_t queue)
{
  return fns::call_void<fns::snd_seq_remove_events_set_queue>(info, queue);
}

namespace fns
{

using snd_seq_remove_events_set_time_arg0_t = snd_seq_remove_events_t *;
using snd_seq_remove_events_set_time_arg1_t = const snd_seq_timestamp_t *;
struct snd_seq_remove_events_set_time
{
  const char* name = "snd_seq_remove_events_set_time";
  const std::vector<const char*> args = {"info", "time"};
  using type = void(*)(snd_seq_remove_events_t *, const snd_seq_timestamp_t *);
};

}

extern "C" void snd_seq_remove_events_set_time(fns::snd_seq_remove_events_set_time_arg0_t info, fns::snd_seq_remove_events_set_time_arg1_t time)
{
  return fns::call_void<fns::snd_seq_remove_events_set_time>(info, time);
}

namespace fns
{

using snd_seq_remove_events_set_dest_arg0_t = snd_seq_remove_events_t *;
using snd_seq_remove_events_set_dest_arg1_t = const snd_seq_addr_t *;
struct snd_seq_remove_events_set_dest
{
  const char* name = "snd_seq_remove_events_set_dest";
  const std::vector<const char*> args = {"info", "addr"};
  using type = void(*)(snd_seq_remove_events_t *, const snd_seq_addr_t *);
};

}

extern "C" void snd_seq_remove_events_set_dest(fns::snd_seq_remove_events_set_dest_arg0_t info, fns::snd_seq_remove_events_set_dest_arg1_t addr)
{
  return fns::call_void<fns::snd_seq_remove_events_set_dest>(info, addr);
}

namespace fns
{

using snd_seq_remove_events_set_channel_arg0_t = snd_seq_remove_events_t *;
using snd_seq_remove_events_set_channel_arg1_t = int;
struct snd_seq_remove_events_set_channel
{
  const char* name = "snd_seq_remove_events_set_channel";
  const std::vector<const char*> args = {"info", "channel"};
  using type = void(*)(snd_seq_remove_events_t *, int);
};

}

extern "C" void snd_seq_remove_events_set_channel(fns::snd_seq_remove_events_set_channel_arg0_t info, fns::snd_seq_remove_events_set_channel_arg1_t channel)
{
  return fns::call_void<fns::snd_seq_remove_events_set_channel>(info, channel);
}

namespace fns
{

using snd_seq_remove_events_set_event_type_arg0_t = snd_seq_remove_events_t *;
using snd_seq_remove_events_set_event_type_arg1_t = int;
struct snd_seq_remove_events_set_event_type
{
  const char* name = "snd_seq_remove_events_set_event_type";
  const std::vector<const char*> args = {"info", "type"};
  using type = void(*)(snd_seq_remove_events_t *, int);
};

}

extern "C" void snd_seq_remove_events_set_event_type(fns::snd_seq_remove_events_set_event_type_arg0_t info, fns::snd_seq_remove_events_set_event_type_arg1_t type)
{
  return fns::call_void<fns::snd_seq_remove_events_set_event_type>(info, type);
}

namespace fns
{

using snd_seq_remove_events_set_tag_arg0_t = snd_seq_remove_events_t *;
using snd_seq_remove_events_set_tag_arg1_t = int;
struct snd_seq_remove_events_set_tag
{
  const char* name = "snd_seq_remove_events_set_tag";
  const std::vector<const char*> args = {"info", "tag"};
  using type = void(*)(snd_seq_remove_events_t *, int);
};

}

extern "C" void snd_seq_remove_events_set_tag(fns::snd_seq_remove_events_set_tag_arg0_t info, fns::snd_seq_remove_events_set_tag_arg1_t tag)
{
  return fns::call_void<fns::snd_seq_remove_events_set_tag>(info, tag);
}

namespace fns
{

using snd_seq_remove_events_arg0_t = snd_seq_t *;
using snd_seq_remove_events_arg1_t = snd_seq_remove_events_t *;
struct snd_seq_remove_events
{
  const char* name = "snd_seq_remove_events";
  const std::vector<const char*> args = {"handle", "info"};
  using type = int(*)(snd_seq_t *, snd_seq_remove_events_t *);
};

}

extern "C" int snd_seq_remove_events(fns::snd_seq_remove_events_arg0_t handle, fns::snd_seq_remove_events_arg1_t info)
{
  return fns::call<fns::snd_seq_remove_events>(handle, info);
}

namespace fns
{

using snd_seq_set_bit_arg0_t = int;
using snd_seq_set_bit_arg1_t = void *;
struct snd_seq_set_bit
{
  const char* name = "snd_seq_set_bit";
  const std::vector<const char*> args = {"nr", "array"};
  using type = void(*)(int, void *);
};

}

extern "C" void snd_seq_set_bit(fns::snd_seq_set_bit_arg0_t nr, fns::snd_seq_set_bit_arg1_t array)
{
  return fns::call_void<fns::snd_seq_set_bit>(nr, array);
}

namespace fns
{

using snd_seq_unset_bit_arg0_t = int;
using snd_seq_unset_bit_arg1_t = void *;
struct snd_seq_unset_bit
{
  const char* name = "snd_seq_unset_bit";
  const std::vector<const char*> args = {"nr", "array"};
  using type = void(*)(int, void *);
};

}

extern "C" void snd_seq_unset_bit(fns::snd_seq_unset_bit_arg0_t nr, fns::snd_seq_unset_bit_arg1_t array)
{
  return fns::call_void<fns::snd_seq_unset_bit>(nr, array);
}

namespace fns
{

using snd_seq_change_bit_arg0_t = int;
using snd_seq_change_bit_arg1_t = void *;
struct snd_seq_change_bit
{
  const char* name = "snd_seq_change_bit";
  const std::vector<const char*> args = {"nr", "array"};
  using type = int(*)(int, void *);
};

}

extern "C" int snd_seq_change_bit(fns::snd_seq_change_bit_arg0_t nr, fns::snd_seq_change_bit_arg1_t array)
{
  return fns::call<fns::snd_seq_change_bit>(nr, array);
}

namespace fns
{

using snd_seq_get_bit_arg0_t = int;
using snd_seq_get_bit_arg1_t = void *;
struct snd_seq_get_bit
{
  const char* name = "snd_seq_get_bit";
  const std::vector<const char*> args = {"nr", "array"};
  using type = int(*)(int, void *);
};

}

extern "C" int snd_seq_get_bit(fns::snd_seq_get_bit_arg0_t nr, fns::snd_seq_get_bit_arg1_t array)
{
  return fns::call<fns::snd_seq_get_bit>(nr, array);
}

namespace fns
{

using snd_seq_control_queue_arg0_t = snd_seq_t *;
using snd_seq_control_queue_arg1_t = int;
using snd_seq_control_queue_arg2_t = int;
using snd_seq_control_queue_arg3_t = int;
using snd_seq_control_queue_arg4_t = snd_seq_event_t *;
struct snd_seq_control_queue
{
  const char* name = "snd_seq_control_queue";
  const std::vector<const char*> args = {"seq", "q", "type", "value", "ev"};
  using type = int(*)(snd_seq_t *, int, int, int, snd_seq_event_t *);
};

}

extern "C" int snd_seq_control_queue(fns::snd_seq_control_queue_arg0_t seq, fns::snd_seq_control_queue_arg1_t q, fns::snd_seq_control_queue_arg2_t type, fns::snd_seq_control_queue_arg3_t value, fns::snd_seq_control_queue_arg4_t ev)
{
  return fns::call<fns::snd_seq_control_queue>(seq, q, type, value, ev);
}

namespace fns
{

using snd_seq_create_simple_port_arg0_t = snd_seq_t *;
using snd_seq_create_simple_port_arg1_t = const char *;
using snd_seq_create_simple_port_arg2_t = unsigned int;
using snd_seq_create_simple_port_arg3_t = unsigned int;
struct snd_seq_create_simple_port
{
  const char* name = "snd_seq_create_simple_port";
  const std::vector<const char*> args = {"seq", "name", "caps", "type"};
  using type = int(*)(snd_seq_t *, const char *, unsigned int, unsigned int);
};

}

extern "C" int snd_seq_create_simple_port(fns::snd_seq_create_simple_port_arg0_t seq, fns::snd_seq_create_simple_port_arg1_t name, fns::snd_seq_create_simple_port_arg2_t caps, fns::snd_seq_create_simple_port_arg3_t type)
{
  return fns::call<fns::snd_seq_create_simple_port>(seq, name, caps, type);
}

namespace fns
{

using snd_seq_delete_simple_port_arg0_t = snd_seq_t *;
using snd_seq_delete_simple_port_arg1_t = int;
struct snd_seq_delete_simple_port
{
  const char* name = "snd_seq_delete_simple_port";
  const std::vector<const char*> args = {"seq", "port"};
  using type = int(*)(snd_seq_t *, int);
};

}

extern "C" int snd_seq_delete_simple_port(fns::snd_seq_delete_simple_port_arg0_t seq, fns::snd_seq_delete_simple_port_arg1_t port)
{
  return fns::call<fns::snd_seq_delete_simple_port>(seq, port);
}

namespace fns
{

using snd_seq_connect_from_arg0_t = snd_seq_t *;
using snd_seq_connect_from_arg1_t = int;
using snd_seq_connect_from_arg2_t = int;
using snd_seq_connect_from_arg3_t = int;
struct snd_seq_connect_from
{
  const char* name = "snd_seq_connect_from";
  const std::vector<const char*> args = {"seq", "my_port", "src_client", "src_port"};
  using type = int(*)(snd_seq_t *, int, int, int);
};

}

extern "C" int snd_seq_connect_from(fns::snd_seq_connect_from_arg0_t seq, fns::snd_seq_connect_from_arg1_t my_port, fns::snd_seq_connect_from_arg2_t src_client, fns::snd_seq_connect_from_arg3_t src_port)
{
  return fns::call<fns::snd_seq_connect_from>(seq, my_port, src_client, src_port);
}

namespace fns
{

using snd_seq_connect_to_arg0_t = snd_seq_t *;
using snd_seq_connect_to_arg1_t = int;
using snd_seq_connect_to_arg2_t = int;
using snd_seq_connect_to_arg3_t = int;
struct snd_seq_connect_to
{
  const char* name = "snd_seq_connect_to";
  const std::vector<const char*> args = {"seq", "my_port", "dest_client", "dest_port"};
  using type = int(*)(snd_seq_t *, int, int, int);
};

}

extern "C" int snd_seq_connect_to(fns::snd_seq_connect_to_arg0_t seq, fns::snd_seq_connect_to_arg1_t my_port, fns::snd_seq_connect_to_arg2_t dest_client, fns::snd_seq_connect_to_arg3_t dest_port)
{
  return fns::call<fns::snd_seq_connect_to>(seq, my_port, dest_client, dest_port);
}

namespace fns
{

using snd_seq_disconnect_from_arg0_t = snd_seq_t *;
using snd_seq_disconnect_from_arg1_t = int;
using snd_seq_disconnect_from_arg2_t = int;
using snd_seq_disconnect_from_arg3_t = int;
struct snd_seq_disconnect_from
{
  const char* name = "snd_seq_disconnect_from";
  const std::vector<const char*> args = {"seq", "my_port", "src_client", "src_port"};
  using type = int(*)(snd_seq_t *, int, int, int);
};

}

extern "C" int snd_seq_disconnect_from(fns::snd_seq_disconnect_from_arg0_t seq, fns::snd_seq_disconnect_from_arg1_t my_port, fns::snd_seq_disconnect_from_arg2_t src_client, fns::snd_seq_disconnect_from_arg3_t src_port)
{
  return fns::call<fns::snd_seq_disconnect_from>(seq, my_port, src_client, src_port);
}

namespace fns
{

using snd_seq_disconnect_to_arg0_t = snd_seq_t *;
using snd_seq_disconnect_to_arg1_t = int;
using snd_seq_disconnect_to_arg2_t = int;
using snd_seq_disconnect_to_arg3_t = int;
struct snd_seq_disconnect_to
{
  const char* name = "snd_seq_disconnect_to";
  const std::vector<const char*> args = {"seq", "my_port", "dest_client", "dest_port"};
  using type = int(*)(snd_seq_t *, int, int, int);
};

}

extern "C" int snd_seq_disconnect_to(fns::snd_seq_disconnect_to_arg0_t seq, fns::snd_seq_disconnect_to_arg1_t my_port, fns::snd_seq_disconnect_to_arg2_t dest_client, fns::snd_seq_disconnect_to_arg3_t dest_port)
{
  return fns::call<fns::snd_seq_disconnect_to>(seq, my_port, dest_client, dest_port);
}

namespace fns
{

using snd_seq_set_client_name_arg0_t = snd_seq_t *;
using snd_seq_set_client_name_arg1_t = const char *;
struct snd_seq_set_client_name
{
  const char* name = "snd_seq_set_client_name";
  const std::vector<const char*> args = {"seq", "name"};
  using type = int(*)(snd_seq_t *, const char *);
};

}

extern "C" int snd_seq_set_client_name(fns::snd_seq_set_client_name_arg0_t seq, fns::snd_seq_set_client_name_arg1_t name)
{
  return fns::call<fns::snd_seq_set_client_name>(seq, name);
}

namespace fns
{

using snd_seq_set_client_event_filter_arg0_t = snd_seq_t *;
using snd_seq_set_client_event_filter_arg1_t = int;
struct snd_seq_set_client_event_filter
{
  const char* name = "snd_seq_set_client_event_filter";
  const std::vector<const char*> args = {"seq", "event_type"};
  using type = int(*)(snd_seq_t *, int);
};

}

extern "C" int snd_seq_set_client_event_filter(fns::snd_seq_set_client_event_filter_arg0_t seq, fns::snd_seq_set_client_event_filter_arg1_t event_type)
{
  return fns::call<fns::snd_seq_set_client_event_filter>(seq, event_type);
}

namespace fns
{

using snd_seq_set_client_pool_output_arg0_t = snd_seq_t *;
using snd_seq_set_client_pool_output_arg1_t = size_t;
struct snd_seq_set_client_pool_output
{
  const char* name = "snd_seq_set_client_pool_output";
  const std::vector<const char*> args = {"seq", "size"};
  using type = int(*)(snd_seq_t *, size_t);
};

}

extern "C" int snd_seq_set_client_pool_output(fns::snd_seq_set_client_pool_output_arg0_t seq, fns::snd_seq_set_client_pool_output_arg1_t size)
{
  return fns::call<fns::snd_seq_set_client_pool_output>(seq, size);
}

namespace fns
{

using snd_seq_set_client_pool_output_room_arg0_t = snd_seq_t *;
using snd_seq_set_client_pool_output_room_arg1_t = size_t;
struct snd_seq_set_client_pool_output_room
{
  const char* name = "snd_seq_set_client_pool_output_room";
  const std::vector<const char*> args = {"seq", "size"};
  using type = int(*)(snd_seq_t *, size_t);
};

}

extern "C" int snd_seq_set_client_pool_output_room(fns::snd_seq_set_client_pool_output_room_arg0_t seq, fns::snd_seq_set_client_pool_output_room_arg1_t size)
{
  return fns::call<fns::snd_seq_set_client_pool_output_room>(seq, size);
}

namespace fns
{

using snd_seq_set_client_pool_input_arg0_t = snd_seq_t *;
using snd_seq_set_client_pool_input_arg1_t = size_t;
struct snd_seq_set_client_pool_input
{
  const char* name = "snd_seq_set_client_pool_input";
  const std::vector<const char*> args = {"seq", "size"};
  using type = int(*)(snd_seq_t *, size_t);
};

}

extern "C" int snd_seq_set_client_pool_input(fns::snd_seq_set_client_pool_input_arg0_t seq, fns::snd_seq_set_client_pool_input_arg1_t size)
{
  return fns::call<fns::snd_seq_set_client_pool_input>(seq, size);
}

namespace fns
{

using snd_seq_sync_output_queue_arg0_t = snd_seq_t *;
struct snd_seq_sync_output_queue
{
  const char* name = "snd_seq_sync_output_queue";
  const std::vector<const char*> args = {"seq"};
  using type = int(*)(snd_seq_t *);
};

}

extern "C" int snd_seq_sync_output_queue(fns::snd_seq_sync_output_queue_arg0_t seq)
{
  return fns::call<fns::snd_seq_sync_output_queue>(seq);
}

namespace fns
{

using snd_seq_parse_address_arg0_t = snd_seq_t *;
using snd_seq_parse_address_arg1_t = snd_seq_addr_t *;
using snd_seq_parse_address_arg2_t = const char *;
struct snd_seq_parse_address
{
  const char* name = "snd_seq_parse_address";
  const std::vector<const char*> args = {"seq", "addr", "str"};
  using type = int(*)(snd_seq_t *, snd_seq_addr_t *, const char *);
};

}

extern "C" int snd_seq_parse_address(fns::snd_seq_parse_address_arg0_t seq, fns::snd_seq_parse_address_arg1_t addr, fns::snd_seq_parse_address_arg2_t str)
{
  return fns::call<fns::snd_seq_parse_address>(seq, addr, str);
}

namespace fns
{

using snd_seq_reset_pool_output_arg0_t = snd_seq_t *;
struct snd_seq_reset_pool_output
{
  const char* name = "snd_seq_reset_pool_output";
  const std::vector<const char*> args = {"seq"};
  using type = int(*)(snd_seq_t *);
};

}

extern "C" int snd_seq_reset_pool_output(fns::snd_seq_reset_pool_output_arg0_t seq)
{
  return fns::call<fns::snd_seq_reset_pool_output>(seq);
}

namespace fns
{

using snd_seq_reset_pool_input_arg0_t = snd_seq_t *;
struct snd_seq_reset_pool_input
{
  const char* name = "snd_seq_reset_pool_input";
  const std::vector<const char*> args = {"seq"};
  using type = int(*)(snd_seq_t *);
};

}

extern "C" int snd_seq_reset_pool_input(fns::snd_seq_reset_pool_input_arg0_t seq)
{
  return fns::call<fns::snd_seq_reset_pool_input>(seq);
}

namespace fns
{

using snd_midi_event_new_arg0_t = size_t;
using snd_midi_event_new_arg1_t = snd_midi_event_t **;
struct snd_midi_event_new
{
  const char* name = "snd_midi_event_new";
  const std::vector<const char*> args = {"bufsize", "rdev"};
  using type = int(*)(size_t, snd_midi_event_t **);
};

}

extern "C" int snd_midi_event_new(fns::snd_midi_event_new_arg0_t bufsize, fns::snd_midi_event_new_arg1_t rdev)
{
  return fns::call<fns::snd_midi_event_new>(bufsize, rdev);
}

namespace fns
{

using snd_midi_event_resize_buffer_arg0_t = snd_midi_event_t *;
using snd_midi_event_resize_buffer_arg1_t = size_t;
struct snd_midi_event_resize_buffer
{
  const char* name = "snd_midi_event_resize_buffer";
  const std::vector<const char*> args = {"dev", "bufsize"};
  using type = int(*)(snd_midi_event_t *, size_t);
};

}

extern "C" int snd_midi_event_resize_buffer(fns::snd_midi_event_resize_buffer_arg0_t dev, fns::snd_midi_event_resize_buffer_arg1_t bufsize)
{
  return fns::call<fns::snd_midi_event_resize_buffer>(dev, bufsize);
}

namespace fns
{

using snd_midi_event_free_arg0_t = snd_midi_event_t *;
struct snd_midi_event_free
{
  const char* name = "snd_midi_event_free";
  const std::vector<const char*> args = {"dev"};
  using type = void(*)(snd_midi_event_t *);
};

}

extern "C" void snd_midi_event_free(fns::snd_midi_event_free_arg0_t dev)
{
  return fns::call_void<fns::snd_midi_event_free>(dev);
}

namespace fns
{

using snd_midi_event_init_arg0_t = snd_midi_event_t *;
struct snd_midi_event_init
{
  const char* name = "snd_midi_event_init";
  const std::vector<const char*> args = {"dev"};
  using type = void(*)(snd_midi_event_t *);
};

}

extern "C" void snd_midi_event_init(fns::snd_midi_event_init_arg0_t dev)
{
  return fns::call_void<fns::snd_midi_event_init>(dev);
}

namespace fns
{

using snd_midi_event_reset_encode_arg0_t = snd_midi_event_t *;
struct snd_midi_event_reset_encode
{
  const char* name = "snd_midi_event_reset_encode";
  const std::vector<const char*> args = {"dev"};
  using type = void(*)(snd_midi_event_t *);
};

}

extern "C" void snd_midi_event_reset_encode(fns::snd_midi_event_reset_encode_arg0_t dev)
{
  return fns::call_void<fns::snd_midi_event_reset_encode>(dev);
}

namespace fns
{

using snd_midi_event_reset_decode_arg0_t = snd_midi_event_t *;
struct snd_midi_event_reset_decode
{
  const char* name = "snd_midi_event_reset_decode";
  const std::vector<const char*> args = {"dev"};
  using type = void(*)(snd_midi_event_t *);
};

}

extern "C" void snd_midi_event_reset_decode(fns::snd_midi_event_reset_decode_arg0_t dev)
{
  return fns::call_void<fns::snd_midi_event_reset_decode>(dev);
}

namespace fns
{

using snd_midi_event_no_status_arg0_t = snd_midi_event_t *;
using snd_midi_event_no_status_arg1_t = int;
struct snd_midi_event_no_status
{
  const char* name = "snd_midi_event_no_status";
  const std::vector<const char*> args = {"dev", "on"};
  using type = void(*)(snd_midi_event_t *, int);
};

}

extern "C" void snd_midi_event_no_status(fns::snd_midi_event_no_status_arg0_t dev, fns::snd_midi_event_no_status_arg1_t on)
{
  return fns::call_void<fns::snd_midi_event_no_status>(dev, on);
}

namespace fns
{

using snd_midi_event_encode_arg0_t = snd_midi_event_t *;
using snd_midi_event_encode_arg1_t = const unsigned char *;
using snd_midi_event_encode_arg2_t = long;
using snd_midi_event_encode_arg3_t = snd_seq_event_t *;
struct snd_midi_event_encode
{
  const char* name = "snd_midi_event_encode";
  const std::vector<const char*> args = {"dev", "buf", "count", "ev"};
  using type = long(*)(snd_midi_event_t *, const unsigned char *, long, snd_seq_event_t *);
};

}

extern "C" long snd_midi_event_encode(fns::snd_midi_event_encode_arg0_t dev, fns::snd_midi_event_encode_arg1_t buf, fns::snd_midi_event_encode_arg2_t count, fns::snd_midi_event_encode_arg3_t ev)
{
  return fns::call<fns::snd_midi_event_encode>(dev, buf, count, ev);
}

namespace fns
{

using snd_midi_event_encode_byte_arg0_t = snd_midi_event_t *;
using snd_midi_event_encode_byte_arg1_t = int;
using snd_midi_event_encode_byte_arg2_t = snd_seq_event_t *;
struct snd_midi_event_encode_byte
{
  const char* name = "snd_midi_event_encode_byte";
  const std::vector<const char*> args = {"dev", "c", "ev"};
  using type = int(*)(snd_midi_event_t *, int, snd_seq_event_t *);
};

}

extern "C" int snd_midi_event_encode_byte(fns::snd_midi_event_encode_byte_arg0_t dev, fns::snd_midi_event_encode_byte_arg1_t c, fns::snd_midi_event_encode_byte_arg2_t ev)
{
  return fns::call<fns::snd_midi_event_encode_byte>(dev, c, ev);
}

namespace fns
{

using snd_midi_event_decode_arg0_t = snd_midi_event_t *;
using snd_midi_event_decode_arg1_t = unsigned char *;
using snd_midi_event_decode_arg2_t = long;
using snd_midi_event_decode_arg3_t = const snd_seq_event_t *;
struct snd_midi_event_decode
{
  const char* name = "snd_midi_event_decode";
  const std::vector<const char*> args = {"dev", "buf", "count", "ev"};
  using type = long(*)(snd_midi_event_t *, unsigned char *, long, const snd_seq_event_t *);
};

}

extern "C" long snd_midi_event_decode(fns::snd_midi_event_decode_arg0_t dev, fns::snd_midi_event_decode_arg1_t buf, fns::snd_midi_event_decode_arg2_t count, fns::snd_midi_event_decode_arg3_t ev)
{
  return fns::call<fns::snd_midi_event_decode>(dev, buf, count, ev);
}


