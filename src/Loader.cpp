//
// Created by sfaer on 3/14/2023.
//

#include <fstream>
#include "../include/Loader.h"

using namespace std;

Loader::Loader() = default;

Level Loader::loadLevel() {
    this->loadSpaceTypes();
    // TODO create loop of some kind to load "World Export Template.csv"
}

void Loader::loadSpaceTypes() {
    fstream spaceTypesFile;
    spaceTypesFile.open("resources/ASCII Game Object Definitions.csv", ios::in);

    Space temp;
    while (spaceTypesFile >> temp) { // TODO i doubt that this will actually work. needs to be tested
        this->spaceTypes[temp.getSymbol()] = temp;
    }
}
