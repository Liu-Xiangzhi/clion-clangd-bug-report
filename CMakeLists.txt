cmake_minimum_required(VERSION 3.25)
project(tmp_cpp)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

file(GLOB_RECURSE SRCS "include/*.h")

add_executable(tmp_cpp main.cpp ${SRCS})
