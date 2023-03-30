
#include <utility>
#include <fstream>

#include "Level.h"

using namespace std;

Level::Level() = default;

Level::Level(std::vector<std::vector<Space>> world, std::vector<Item> items, std::vector<Monster> monsters) {
    this->levelVector = std::move(world);
    this->items = std::move(items);
    this->monsters = std::move(monsters);
}

std::vector<std::vector<Space>> Level::getVectorArray() {
    return this->levelVector;
}

std::vector<Item> Level::getItems() {
    return this->items;
}

std::vector<Monster> Level::getMonsters() {
    return this->monsters;
}

std::ostream &operator<<(ostream &out, const Level &level) {
    for (const vector<Space> &row: level.levelVector) {
        for (const Space &space: row) {
            out << space;
            out << ",";
        }
        out << "\n";
    }
    out << "\n";
    return out;
}

Space Level::getSpaceAtPos(LevelPos pos) {
    return this->levelVector[pos.y][pos.x];
}
