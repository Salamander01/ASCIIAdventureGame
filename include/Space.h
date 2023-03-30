
#pragma once

#include <iostream>
#include <map>

class Space {
public:
    // Constructors
    Space();

    Space(char symbol, bool passable, std::string name);
//    Space(const Space &space);


    // Getters
    [[nodiscard]] char getSymbol() const;

    [[nodiscard]] bool getPassable() const;

    [[nodiscard]] char getColor() const;

    // Overloaded operators
    friend std::ostream &operator<<(std::ostream &out, const Space &space);

    friend Space &operator>>(std::ostream &in, Space &space); // TODO

private:
    // Attributes
    char symbol;
    char color;
    bool passable;

    std::string name;
};
