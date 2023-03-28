cmake_minimum_required(VERSION 3.24)
project(ASCIIAdventureGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(ASCIIAdventureGame main.cpp IO.cpp Item.cpp Level.cpp Loader.cpp Monster.cpp Player.cpp Space.cpp)

target_include_directories(ASCIIAdventureGame PUBLIC include)
