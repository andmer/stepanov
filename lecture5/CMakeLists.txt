cmake_minimum_required(VERSION 3.4)
project(lecture5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES
    algorithm.h
    concepts.h
    minmax.cpp
    minmax.h
    timed.h
    )

add_executable(lecture5 ${SOURCE_FILES})