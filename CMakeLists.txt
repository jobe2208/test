cmake_minimum_required(VERSION 3.28)
project(git_test)

set(CMAKE_CXX_STANDARD 17)

add_executable(git_test main.cpp
        Test.h
        Test.cpp)
