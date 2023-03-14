cmake_minimum_required(VERSION 3.24)
project(ASCIIAdventureGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(ASCIIAdventureGame main.cpp include/Player.h src/Player.cpp src/IO.cpp include/IO.h src/Level.cpp include/Level.h src/Item.cpp include/Item.h src/Monster.cpp include/Monster.h src/Space.cpp include/Space.h)
