
#ifndef ASCIIADVENTUREGAME_LOADER_H
#define ASCIIADVENTUREGAME_LOADER_H


#include <map>
#include "Level.h"

class Loader {
public:
    static Level loadLevel();

    static std::map<char, Space> loadSpaceTypes();
    
};


#endif //ASCIIADVENTUREGAME_LOADER_H
