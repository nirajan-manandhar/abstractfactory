cmake_minimum_required(VERSION 3.12)
project(Lab09)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab09 main.cpp maze_factory.cpp maze_factory.hpp maze.hpp wall.hpp room.hpp door.hpp maze_game.cpp maze_game.hpp)