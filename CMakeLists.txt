cmake_minimum_required(VERSION 3.24)
project(ASCIIAdventureGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")

add_executable(ASCIIAdventureGame main.cpp IO.cpp Item.cpp Level.cpp Monster.cpp Player.cpp Space.cpp)

target_include_directories(ASCIIAdventureGame PUBLIC include)
