cmake_minimum_required(VERSION 3.18)
project(lib_mightyWizard LANGUAGES CXX)

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

set(SOURCE_LIB mightyWizard.cpp)
add_library(lib_mightyWizard STATIC ${SOURCE_LIB})
