
#ifndef ASCIIADVENTUREGAME_SPACE_H
#define ASCIIADVENTUREGAME_SPACE_H

#include <iostream>

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

    // Overloaded operators
    // TODO Overload bitstream operators
//    friend std::fstream &operator<< (std::fstream &out, const Space &space);
//    friend std::map<char, Space> &operator>> (std::fstream &in, const std::map<char, Space> &spaceTypes);

private:
    // Attributes
    char symbol;
    bool passable;

    std::string name;
};


#endif //ASCIIADVENTUREGAME_SPACE_H
