cmake_minimum_required(VERSION 3.23)
project(CLEFIA C)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c clefia.h clefia.c)

