cmake_minimum_required(VERSION 3.18)
project(countUniqueWords LANGUAGES CXX)

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

set(SOURCE_LIB countUniqueWords.cpp)
add_library(lib_countUniqueWords STATIC ${SOURCE_LIB})