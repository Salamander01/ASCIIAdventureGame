
#ifndef ASCIIADVENTUREGAME_SPACE_H
#define ASCIIADVENTUREGAME_SPACE_H

#include "Loader.h"
#include <ostream>
#include <map>

class Space {
public:
    Space(char symbol, bool passable, std::string name);
    Space(const Space &space);
    Space();


    ~Space();

    char getSymbol();
    bool getPassable();

    friend std::fstream &operator<< (std::fstream &out, const Space &space);
    friend std::map<char, Space> &operator>> (std::fstream &in, const Space &space);

private:
    char symbol;
    bool passable;

    std::string name;

    friend std::map<char, Space> spaceTypes; // TODO may or may not work. Test with CLion.
};


#endif //ASCIIADVENTUREGAME_SPACE_H
