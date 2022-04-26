cmake_minimum_required(VERSION 3.0.0)
project(cpp2048 VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 23)
add_executable(cpp2048 main.cpp matrix.hpp matrix.cpp)