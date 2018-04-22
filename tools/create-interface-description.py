#!/usr/bin/env python

import clang.cindex
from pprint import pprint

def get_diag_info(diag):
    return { 'severity' : diag.severity,
             'location' : diag.location,
             'spelling' : diag.spelling,
             'ranges' : diag.ranges,
             'fixits' : diag.fixits }

def apply_to_function_decls(f, cursor):
    ret = []
    if cursor.kind == clang.cindex.CursorKind.FUNCTION_DECL:
        ret = [f(cursor)]

    for c in cursor.get_children():
        ret = ret + apply_to_function_decls(f, c)

    return ret

def render_decl(function_decl):
    function_name = function_decl.spelling
    if not function_name.startswith("snd_"):
        return ""

    # snd_dlopen is used as a reference point so ALSA can find it's own module
    # and load internal symbols. Defining it would confuse ALSA.
    if function_name == "snd_dlopen":
        return "// Skipping snd_dlopen\n\n".format(function_name)

    if function_decl.type.is_function_variadic():
        return "// Skipping {} because it is variadic\n\n".format(function_name)

    if function_decl.is_definition():
        return "// Skipping {} because it is defined\n\n".format(function_name)

    linkage = "extern \"C\""
    if function_name == "snd_lib_error_set_local":
        linkage = ""

    return_type = function_decl.result_type.spelling

    arg_names = []
    arg_types = []
    for arg in function_decl.get_arguments():
        arg_names.append(arg.spelling)
        arg_types.append(arg.type.spelling)

    typ = "{}(*)({})".format(function_decl.result_type.spelling, ", ".join(arg_types))

    arg_list = ["fns::{}_arg{}_t {}".format(function_name, a[0], a[1]) for a in zip(range(len(arg_names)), arg_names)]

    quote = lambda s: "\"" + s + "\""

    s =     "namespace fns\n"
    s = s + "{\n"
    s = s + "\n"
    for i in range(len(arg_types)):
        s = s + "using {}_arg{}_t = {};\n".format(function_name, i, arg_types[i])
    s = s + "struct {}\n".format(function_name)
    s = s + "{\n"
    s = s + "  const char* name = \"{}\";\n".format(function_name)
    s = s + "  const std::vector<const char*> args = {{{}}};\n".format(", ".join([quote(arg) for arg in arg_names]))
    s = s + "  using type = {};\n".format(typ)
    s = s + "};\n"
    s = s + "\n"
    s = s + "}\n"
    s = s + "\n"
    s = s + "{} {} {}({})\n".format(linkage, return_type, function_name, ", ".join(arg_list))
    s = s + "{\n"
    if (return_type == "void"):
        s = s + "  return fns::call_void<fns::{}>({});\n".format(function_name, ", ".join(arg_names))
    else:
        s = s + "  return fns::call<fns::{}>({});\n".format(function_name, ", ".join(arg_names))
    s = s + "}\n\n"
    return s

def main():
    args = ["-I/usr/lib/gcc/x86_64-linux-gnu/5/include", "/usr/include/alsa/asoundlib.h"]

    index = clang.cindex.Index.create()
    tu = index.parse(None, args)
    if not tu:
        parser.error("unable to load input")

    if len(tu.diagnostics):
        pprint(('diags', map(get_diag_info, tu.diagnostics)))
        raise RuntimeError("There were errors")

    print "#include <alsa/asoundlib.h>"
    print ""
    print "#include \"tracer.h\""
    print ""
    print "".join(apply_to_function_decls(render_decl, tu.cursor))


if __name__ == '__main__':
    main()
