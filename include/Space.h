
#ifndef ASCIIADVENTUREGAME_SPACE_H
#define ASCIIADVENTUREGAME_SPACE_H

#include <iostream>
#include <map>

class Space {
public:
    // Constructors
//    Space(char symbol, bool passable, std::string name);
//    Space(const Space &space);
    Space();

    // Destructor (may not actually be needed)
    ~Space();

    // Getters
    char getSymbol();
    bool getPassable();
    char getColor();

    // Overloaded operators
    friend std::fstream &operator<< (std::fstream &out, const Space &space);
    // TODO DOESNT SUPPORT MULTIPLE SPACES WITH THE SAME CHARACTER
//    friend std::map<char, Space> &operator>> (std::fstream &in, const std::map<char, Space> &spaceTypes);

private:
    // Attributes
    char symbol;
    char color;
    bool passable;

    std::string name;
};


#endif //ASCIIADVENTUREGAME_SPACE_H
