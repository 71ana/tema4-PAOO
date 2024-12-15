cmake_minimum_required(VERSION 3.10)

project(tema4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(main src/main.cpp)