cmake_minimum_required(VERSION 3.17)
project(module01)

set(CMAKE_CXX_STANDARD 98)
file(GLOB EX00 ex00/*.cpp ex00/*.hpp)
file(GLOB EX01 ex01/*.cpp ex01/*.hpp)
file(GLOB EX02 ex02/*.cpp ex02/*.hpp)
file(GLOB EX03 ex03/*.cpp ex03/*.hpp)
file(GLOB EX04 ex04/*.cpp ex04/*.hpp)
file(GLOB EX05 ex05/*.cpp ex05/*.hpp)
file(GLOB EX06 ex06/*.cpp ex06/*.hpp)
add_executable(ex00 ${EX00})
add_executable(ex01 ${EX01})
add_executable(ex02 ${EX02})
add_executable(ex03 ${EX03})
add_executable(ex04 ${EX04})
add_executable(ex05 ${EX05})
add_executable(ex06 ${EX06})