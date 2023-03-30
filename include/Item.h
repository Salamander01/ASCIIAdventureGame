
#pragma once

#include "Structs.h"

// A basic item. Inherit from this for more advanced item types.
class Item {
public:

    // An enum with all the different item types. Use to prevent casting or mixing up of different item types.
    enum ItemType {
        BASIC
    };

    [[nodiscard]] int getPosX() const;

    [[nodiscard]] int getPosY() const;

    [[nodiscard]] char getColor() const;

    [[nodiscard]] char getSymbol() const;

private:
    LevelPos position;
    char color;
    char symbol;
    ItemType type;
};
