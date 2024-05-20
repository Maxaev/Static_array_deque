cmake_minimum_required(VERSION 3.2...3.27.5)
set(CMAKE_CXX_STANDARD 17)

project(Static_array_deque)

enable_testing()
add_subdirectory(lib/googletest)

add_library(src_lib "")

add_subdirectory(src)
add_subdirectory(test)

set(CMAKE_SUPPRESS_REGENERATION true)
