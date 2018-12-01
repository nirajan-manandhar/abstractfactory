//
// Created by Nirajan on 2018-11-30.
//

#ifndef LAB09_MAZE_GAME_HPP
#define LAB09_MAZE_GAME_HPP

#include "maze_factory.hpp"

//contains a method called create_maze that accepts a reference
//to a maze_factory and uses the maze_factory to build a maze. The create_maze method returns a
//pointer to the newly created maze.
class maze_game {
public:
    maze* create_maze(maze_factory& maze_factory1);
};


#endif //LAB09_MAZE_GAME_HPP
