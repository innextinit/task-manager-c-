cmake_minimum_required(VERSION 3.10)
project(TaskManagement)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Glob all source files
file(GLOB SOURCES "src/*.cpp")

# Add executable
add_executable(task_manager ${SOURCES})
