cmake_minimum_required(VERSION 3.4)
project(lecture4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES
    example.cpp
    min.h
    swap.h
    )

add_executable(lecture4 ${SOURCE_FILES})