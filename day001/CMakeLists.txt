# cmake_minimum_required(VERSION <specify CMake version here>)
project(day001 C)

set(CMAKE_C_STANDARD 99)

add_executable(day001 main.c my_error.h my_struct.h common.h my_struct.c my_enum.c my_enum.h)