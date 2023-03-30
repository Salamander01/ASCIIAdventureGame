
#include "Item.h"

using namespace std;

int Item::getPosX() const {
    return this->position.x;
}

int Item::getPosY() const {
    return this->position.y;
}

char Item::getColor() const {
    return this->color;
}

char Item::getSymbol() const {
    return this->symbol;
}
