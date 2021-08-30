cmake_minimum_required(VERSION 3.17)
project(module01)

set(CMAKE_CXX_STANDARD 98)
file(GLOB EX03 ex03/*.cpp)
add_executable(ex00 ex00/Zombie.cpp ex00/newZombie.cpp ex00/randomChump.cpp ex00/main.cpp)
add_executable(ex01 ex01/Zombie.cpp ex01/newZombie.cpp ex01/randomChump.cpp ex01/main.cpp)
add_executable(ex02 ex02/main.cpp)
add_executable(ex03 ${EX03})