project(inventory)

set(CMAKE_CXX_STANDARD 17)

cmake_minimum_required(VERSION 3.18)

set(SET_FILES main.cpp src/inventory.cpp)

include_directories(src)

add_executable(inventory ${SET_FILES})