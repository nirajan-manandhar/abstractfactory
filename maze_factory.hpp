//
// Created by Nirajan on 2018-11-30.
//

#ifndef LAB09_MAZE_FACTORY_HPP
#define LAB09_MAZE_FACTORY_HPP

#include "maze.hpp"
#include "door.hpp"
#include "room.hpp"
#include "wall.hpp"


class maze_factory {
public:
    virtual maze make_maze() = 0;
    virtual door make_door() = 0;
    virtual wall make_wall() = 0;
    virtual room make_room(room& r1, room& r2) = 0;

};


#endif //LAB09_MAZE_FACTORY_HPP
