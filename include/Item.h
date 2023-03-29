
#ifndef ASCIIADVENTUREGAME_ITEM_H
#define ASCIIADVENTUREGAME_ITEM_H

#include "Level.h"

// Abstract class
// Contains the basic methods and attributes required for all item objects; inherited by the various item types that
// game designer might want.
// Because of how we are doing csv template files, inherited item classes will be more along the lines of Drink, Food,
// Weapon (maybe different types of weapons as well), light, etc)
class Item {
public:

    int getPosX();
    int getPosY();

    char getColor();
    char getSymbol();

private:
    Level::Position position{};
    char color{};
    char symbol{};
};


#endif //ASCIIADVENTUREGAME_ITEM_H
