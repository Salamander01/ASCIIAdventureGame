
#ifndef ASCIIADVENTUREGAME_LOADER_H
#define ASCIIADVENTUREGAME_LOADER_H


#include <map>
#include "Level.h"

class Loader {
public:
    Loader();

    Level loadLevel();

    std::map<char, Space> loadSpaceTypes();
    
};


#endif //ASCIIADVENTUREGAME_LOADER_H
