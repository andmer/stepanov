cmake_minimum_required(VERSION 3.4)
project(lecture2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES
    singleton.cpp
    singleton.h
    )

add_executable(lecture2 ${SOURCE_FILES})