cmake_minimum_required(VERSION 3.16)
project(algorithms)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(algorithms main.cpp cmake-build-debug
        projectfiles/Person.cpp
        projectfiles/Person.h
        projectfiles/Twitter.cpp
        projectfiles/Twitter.h
        projectfiles/Status.h projectfiles/Utility.h projectfiles/Accum.h)