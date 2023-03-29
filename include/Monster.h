
#ifndef ASCIIADVENTUREGAME_MONSTER_H
#define ASCIIADVENTUREGAME_MONSTER_H

#include "Level.h"

// Abstract class
class Monster {
public:
    virtual int getPosX();
    virtual int getPosY();

    virtual char getColor();
    virtual char getSymbol();

private:
    Level::Position position{};
    char color{};
    char symbol{};
};


#endif //ASCIIADVENTUREGAME_MONSTER_H
