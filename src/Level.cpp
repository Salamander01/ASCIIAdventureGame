
#include "../include/Level.h"
#include <map>

using namespace std;

friend Level &operator>> (std::fstream &in, const Level &level) { // TODO fix this
    map<char, Space> spaceTypes = Loader::loadSpaceTypes();

    // TODO put code for reading the file from fstream here. Don't forget about the .csv methods to be added in Loader.h
}

