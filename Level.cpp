
#include <utility>

#include "include/Level.h"

using namespace std;

Level::Level() = default;

Level::Level(std::vector<std::vector<Space>> world, std::vector<Item> items, std::vector<Monster> monsters) {
    this->world = std::move(world);
    this->items = std::move(items);
    this->monsters = std::move(monsters);
}
