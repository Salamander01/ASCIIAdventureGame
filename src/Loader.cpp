
#include <fstream>
#include "../include/Loader.h"

using namespace std;

Loader::Loader() = default;

Level Loader::loadLevel() {
    Level level;

    this->loadSpaceTypes();
    
    fstream levelFile;
    levelFIle.open("resources/World Export Template.csv");

    levelFile >> level;

    return level;
}

void Loader::loadSpaceTypes() {
    fstream spaceTypesFile;
    spaceTypesFile.open("resources/ASCII Game Object Definitions.csv", ios::in);

    spaceTypesFile >> this->spacetypes;
}
