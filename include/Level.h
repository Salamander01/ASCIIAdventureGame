
#ifndef ASCIIADVENTUREGAME_LEVEL_H
#define ASCIIADVENTUREGAME_LEVEL_H


#include <string>
#include <vector>
#include "Item.h"
#include "Monster.h"
#include "Space.h"

class Level {
public:
    // Constructors and Destructors
    Level();
    Level(std::vector<Space> world, std::vector<Item> items, std::vector<Monster> monsters);

    ~Level();

    std::vector<Space> getWorld();

    friend std::fstream &operator<< (std::fstream &out, const Level &level);
    friend Level &operator>> (std::fstream &in, const Level &level);

private:
    std::vector<Space> world;
    std::vector<Item> items;
    std::vector<Monster> monsters;

};


#endif //ASCIIADVENTUREGAME_LEVEL_H
