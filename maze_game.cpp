//
// Created by Nirajan on 2018-11-30.
//

#include "maze_game.hpp"

maze *maze_game::create_maze(maze_factory& maze_factory1) {
    maze* maze = maze_factory1.make_maze();
    Wall *wall = factory.make_wall();
    Room *room1 = factory.make_room();
    Room *room2 = factory.make_room();
    Door *door = factory.make_door(room1, room2);

    return maze;
}
