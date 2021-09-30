cmake_minimum_required(VERSION 3.20)

project(AP1 C)

set(CMAKE_C_STANDARD 99)

add_executable(AP1 main.c)
target_link_libraries(AP1 m)