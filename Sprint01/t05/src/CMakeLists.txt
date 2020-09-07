cmake_minimum_required(VERSION 3.16)
project(stdAlgoV2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

add_compile_options(
    -pipe
    -Wall
    -Wextra
    -Werror
    -Wpedantic
)

set(SOURCE_LIB stdAlgoV2.cpp)
add_library(lib_stdAlgoV2 STATIC ${SOURCE_LIB})
