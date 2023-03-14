//
// Created by sfaer on 3/14/2023.
//

#ifndef ASCIIADVENTUREGAME_LOADER_H
#define ASCIIADVENTUREGAME_LOADER_H


#include <map>
#include "Level.h"

class Loader {
public:
    Loader();

    Level loadLevel();

private:
    void loadSpaceTypes();

    std::map<char, Space> spaceTypes;
};


#endif //ASCIIADVENTUREGAME_LOADER_H
