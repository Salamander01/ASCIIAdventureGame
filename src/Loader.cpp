
#include <fstream>
#include "../include/Loader.h"

using namespace std;

Level Loader::loadLevel() {
    Level level;
    
    fstream levelFile;
    levelFile.open("resources/World Export Template.csv");

    levelFile >> level;

    return level;
}

map<char, Space> Loader::loadSpaceTypes() {
    map<char, Space> spaceTypes;

    fstream spaceTypesFile;
    spaceTypesFile.open("resources/ASCII Game Object Definitions.csv", ios::in);

    spaceTypesFile >> spaceTypes;

    return spaceTypes;
}