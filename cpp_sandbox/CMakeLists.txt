cmake_minimum_required(VERSION 3.20)
project(cpp_sandbox CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main executable
add_executable(sandbox src/main.cpp)

# Enable CTest
enable_testing()
add_subdirectory(tests)
