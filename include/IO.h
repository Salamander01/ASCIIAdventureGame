
#ifndef ASCIIADVENTUREGAME_IO_H
#define ASCIIADVENTUREGAME_IO_H


#include <vector>
#include "Level.h"

class IO {
public:
    // Constructors (only a basic default constructor right now)
    IO();

    // redraws the console window with the level object given.
    // Probably should consider not requiring the level object to be passed in, because other information such as items and monsters and the player object are not included in it (the information should come from somewhere else).
    void update(Level level);

private:
    char backgroundColor;
};


#endif //ASCIIADVENTUREGAME_IO_H
