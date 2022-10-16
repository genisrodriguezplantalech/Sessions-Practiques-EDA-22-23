cmake_minimum_required(VERSION 3.23)
project(InordreBinari)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(InordreBinari
        ArbreBinari.cpp
        ArbreBinari.h
        main.cpp)
