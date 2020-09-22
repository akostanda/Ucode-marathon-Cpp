cmake_minimum_required(VERSION 3.18)
project(app LANGUAGES CXX)

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

add_library(app INTERFACE)
target_include_directories(app INTERFACE src)
add_executable(universalReferenceDeterminant main.cpp)
add_subdirectory(src)
target_link_libraries(universalReferenceDeterminant app)

