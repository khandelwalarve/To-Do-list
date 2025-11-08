# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name
project(ToDoList)

# Use C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directory
include_directories(include)

# Add source files
add_executable(todo
    src/main.cpp
    src/todo.cpp
)
