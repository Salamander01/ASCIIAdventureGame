
#include "Space.h"

using namespace std;

std::ostream &operator<<(ostream &out, const Space &space) {
    out << space.symbol << space.color << space.passable << space.name;
    return out;
}

char Space::getSymbol() const {
    return this->symbol;
}

char Space::getColor() const {
    return this->color;
}

bool Space::getPassable() const {
    return this->passable;
}
