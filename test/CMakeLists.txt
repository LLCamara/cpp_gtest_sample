cmake_minimum_required(VERSION 3.7)
project(tests)

add_subdirectory(lib/gtest-1.8.0)

add_executable(run_tests
        gtest.cpp sample_test.cpp)

target_link_libraries(run_tests gtest gtest_main)
target_link_libraries(run_tests core)