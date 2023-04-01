
#include <utility>
#include <fstream>

#include "Level.h"

using namespace std;

Level::Level() = default;

Level::Level(std::vector<std::vector<Space>> world, std::vector<Item> items, std::vector<Monster> monsters, char backgroundColor) {
    this->spaceVector = std::move(world);
    this->items = std::move(items);
    this->monsters = std::move(monsters);
    this->backgroundColor = backgroundColor;
}

std::vector<std::vector<Space>> Level::getVectorArray() {
    return this->spaceVector;
}

std::vector<Item> Level::getItems() {
    return this->items;
}

std::vector<Monster> Level::getMonsters() {
    return this->monsters;
}

char Level::getBackgroundColor() const {
    return this->backgroundColor;
}

Space Level::getSpaceAtPos(LevelPos pos) {
    return this->spaceVector[pos.y][pos.x];
}

std::ostream &operator<<(ostream &out, const Level &level) {
    // TODO need to add saving of the other attributes in Level (right now it only saves the spaceVector)
    for (const vector<Space> &row: level.spaceVector) {
        for (const Space &space: row) {
            out << space;
            out << ",";
        }
        out << "\n";
    }
    out << "\n";
    return out;
}
