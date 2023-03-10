//
// Created by 24SFAERBER on 3/10/2023.
//

#ifndef ASCIIADVENTUREGAME_WORLD_H
#define ASCIIADVENTUREGAME_WORLD_H


#include <string>
#include <vector>
#include "Item.h"
#include "Monster.h"

class World {
public:

private:
    // TODO create a world variable / vector of type Space?
    std::vector<Item> items;
    std::vector<Monster> monsters;

};


#endif //ASCIIADVENTUREGAME_WORLD_H
