
#ifndef ASCIIADVENTUREGAME_SPACE_H
#define ASCIIADVENTUREGAME_SPACE_H

#include <ostream>

class Space {
public:
    Space(char symbol, bool passable, std::string name);
    ~Space();

    char getSymbol();
    bool getPassable();

    friend std::ostream &operator<< (std::ostream &out, const Space &space);
    friend std::ostream &operator>> (std::ostream &out, const Space &space);

private:
    char symbol;
    bool passable;

    std::string name;
};


#endif //ASCIIADVENTUREGAME_SPACE_H
