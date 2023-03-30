
#include "Monster.h"

using namespace std;

int Monster::getPosX() const {
    return this->position.x;
}

int Monster::getPosY() const {
    return this->position.y;
}

char Monster::getColor() const {
    return this->color;
}

char Monster::getSymbol() const {
    return this->symbol;
}
