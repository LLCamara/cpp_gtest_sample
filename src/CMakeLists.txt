cmake_minimum_required(VERSION 3.7)

project(main)

set(core_SRCS sample.cpp sample.h)
add_library(core ${core_SRCS})

add_executable(main main.cpp)
target_link_libraries(main core)