
#ifndef ASCIIADVENTUREGAME_SPACE_H
#define ASCIIADVENTUREGAME_SPACE_H

#include <iostream>
#include <map>

class Space {
public:
    // Constructors
    Space();
    Space(char symbol, bool passable, std::string name);
//    Space(const Space &space);


    // Getters
    char getSymbol();
    bool getPassable();
    char getColor();

    // Overloaded operators
    friend std::ostream &operator<< (std::ostream &out, const Space &space);
    friend std::fstream &operator>> (std::fstream &in, std::fstream &spaceTypes);

private:
    // Attributes
    char symbol;
    char color;
    bool passable;

    std::string name;
};


#endif //ASCIIADVENTUREGAME_SPACE_H
