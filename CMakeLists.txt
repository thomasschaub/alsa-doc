cmake_minimum_required(VERSION 3.5)

add_library(alsa-doc SHARED src/pcm.cpp)
target_compile_features(alsa-doc PRIVATE cxx_return_type_deduction)

add_executable(dlopen tests/dlopen.cpp)
target_compile_features(dlopen PRIVATE cxx_nullptr)
target_link_libraries(dlopen PRIVATE dl)
