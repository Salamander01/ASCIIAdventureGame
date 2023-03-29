
#ifndef ASCIIADVENTUREGAME_LEVEL_H
#define ASCIIADVENTUREGAME_LEVEL_H


#include <string>
#include <vector>
#include "Item.h"
#include "Monster.h"
#include "Space.h"

// A class that deals with a single level. Currently we are only planning on making support for single level games, so this class is essentially the world for now.
class Level {
public:
    // Constructors and Destructors
    Level();
    Level(std::vector<std::vector<Space>> world, std::vector<Item> items, std::vector<Monster> monsters);

    // Struct

    // A position structure for keeping track of the player, items, and monsters
    struct Position {
        int x;
        int y;
    };

    // Getters

    // Get the 2d level array (probably for printing. It's what the IO class will use to output the level).
    std::vector<std::vector<Space>> getVectorArray();
    // Get the items in this level (primarily for printing. Probably also for inventory management).
    std::vector<Item> getItems();
    // Get the monsters in the current level (primarily for printing)
    std::vector<Monster> getMonsters();

    // Overloaded operators for saving and loading from a file. Will not load and save from template files but from save files.
    // TODO
    friend std::fstream &operator<< (std::fstream &out, const Level &level);
    friend Level &operator>> (std::fstream &in, const Level &level);

private:
    // 2d array that stores all the Space objects
    std::vector<std::vector<Space>> world;
    // Items in the current level. Item locations are stored in the item objects themselves.
    std::vector<Item> items;
    // Stored similarly to the items. Monsters locations are stored in their individual objects (may or may not be a good idea. We'll see).
    std::vector<Monster> monsters;

};


#endif //ASCIIADVENTUREGAME_LEVEL_H
