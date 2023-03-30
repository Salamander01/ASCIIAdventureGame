
#ifndef ASCIIADVENTUREGAME_MONSTER_H
#define ASCIIADVENTUREGAME_MONSTER_H


#include "Structs.h"

class Monster {
public:
    [[nodiscard]] int getPosX() const;

    [[nodiscard]] int getPosY() const;

    [[nodiscard]] char getColor() const;

    [[nodiscard]] char getSymbol() const;

private:
    LevelPos position{};
    char color{};
    char symbol{};
};


#endif //ASCIIADVENTUREGAME_MONSTER_H
