
#include <fstream>

#include "Space.h"

using namespace std;

Space::Space() = default;

Space::Space(char symbol, bool passable, std::string name, char color) {
    this->symbol = symbol;
    this->passable = passable;
    this->name = name;
    this->color = color;
}

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
