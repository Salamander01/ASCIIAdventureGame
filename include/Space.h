
#ifndef ASCIIADVENTUREGAME_SPACE_H
#define ASCIIADVENTUREGAME_SPACE_H

#include <ostream>

class Space {
public:
    Space(char symbol, bool passable, std::string name);
    Space(const Space &space);
    Space();


    ~Space();

    char getSymbol();
    bool getPassable();

    friend std::fstream &operator<< (std::fstream &out, const Space &space);
    friend std::fstream &operator>> (std::fstream &out, const Space &space);

private:
    char symbol;
    bool passable;

    std::string name;
};


#endif //ASCIIADVENTUREGAME_SPACE_H
