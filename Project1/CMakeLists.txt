cmake_minimum_required(VERSION 3.20)
project(Fall2021_CS311)

set(CMAKE_CXX_STANDARD 17)

add_executable(project1 delivery_test.cpp delivery.cpp delivery.h)
add_executable(project1_test self_test.cpp delivery.cpp delivery.h)
