cmake_minimum_required(VERSION 3.0.2)
project(intro)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_executable(intro_example intro_main.cpp)

add_executable(data_variables data_variables.cpp)

add_executable(operators operators.cpp)

add_executable(looping looping.cpp)

add_executable(for_loops for_loops.cpp)