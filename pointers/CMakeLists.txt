cmake_minimum_required(VERSION 3.0.2)
project(pointers)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_executable(raw_pointers raw_pointers.cpp)
add_executable(member_selection member_selection_ptr.cpp)