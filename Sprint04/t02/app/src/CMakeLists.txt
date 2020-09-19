cmake_minimum_required(VERSION 3.18)
project(src LANGUAGES CXX)

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

set(SOURCE_LIB dragonborn.h dragonborn.cpp)
add_library(src STATIC ${SOURCE_LIB})
