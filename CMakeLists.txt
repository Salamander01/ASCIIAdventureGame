cmake_minimum_required(VERSION 3.24)
project(ASCIIAdventureGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(ASCIIAdventureGame main.cpp Player.h Player.cpp IO.cpp IO.h World.cpp World.h)
