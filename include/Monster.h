
#ifndef ASCIIADVENTUREGAME_MONSTER_H
#define ASCIIADVENTUREGAME_MONSTER_H

#include "Level.h"

class Monster {
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


#endif //ASCIIADVENTUREGAME_MONSTER_H
