
#pragma once

#include <string>
#include <vector>

#include "Item.h"
#include "Monster.h"
#include "Space.h"
#include "Structs.h"

// A class that deals with a single level. Currently, we are only planning on making support for single level games, so this class is essentially the world for now.
class Level {
public:
    // Constructors and Destructors
    Level();
    Level(std::vector<std::vector<Space>> world, std::vector<Item> items, std::vector<Monster> monsters, char backgroundColor);

    // Getters

    // Get the 2d level array (probably for printing. It's what the IO class will use to output the level).
    std::vector<std::vector<Space>> getVectorArray();

    // Get the items in this level (primarily for printing. Probably also for inventory management).
    std::vector<Item> getItems();

    // Get the monsters in the current level (primarily for printing)
    std::vector<Monster> getMonsters();

    // Get Space at Position
    Space getSpaceAtPos(LevelPos pos);

    [[nodiscard]] char getBackgroundColor() const;

    // Overloaded operators for saving and loading from a file. Will NOT load and save from template files but from save files.

    friend std::ostream &operator<<(std::ostream &out, const Level &level);

    friend Level &operator>>(std::fstream &in, const Level &level); // TODO

private:
    // 2d array that stores all the Space objects
    std::vector<std::vector<Space>> spaceVector;
    // Items in the current level. Item locations are stored in the item objects themselves.
    std::vector<Item> items;
    // Stored similarly to the items. Monsters locations are stored in their individual objects (may or may not be a good idea. We'll see).
    std::vector<Monster> monsters;
    // The Level's background color
    char backgroundColor;

};
