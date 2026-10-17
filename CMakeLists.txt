cmake_minimum_required(VERSION 3.28)
project(Cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(Cpp main.cpp)

enable_testing()
add_test(NAME run_app COMMAND Cpp)