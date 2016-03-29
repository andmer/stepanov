cmake_minimum_required(VERSION 3.4)
project(lecture6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES
    binary_counter.h
    min.cpp
    )

add_executable(lecture6 ${SOURCE_FILES})