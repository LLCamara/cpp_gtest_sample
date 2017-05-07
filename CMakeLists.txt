cmake_minimum_required(VERSION 3.7)

cmake_minimum_required(VERSION 3.7)

project(main)

#set(core_SRCS src/sample.cpp src/sample.h)
file(GLOB core_SRCS src/*.cpp src/*.h)
add_library(core ${core_SRCS})

add_executable(main main.cpp)
target_link_libraries(main core)

add_subdirectory(test)