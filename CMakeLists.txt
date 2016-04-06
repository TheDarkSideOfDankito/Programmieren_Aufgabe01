cmake_minimum_required(VERSION 3.4)
project(01)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c input.c output.c input.h output.h)
add_executable(01 ${SOURCE_FILES})