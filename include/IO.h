
#ifndef ASCIIADVENTUREGAME_IO_H
#define ASCIIADVENTUREGAME_IO_H


#include <vector>
#include "Level.h"

// Manages runtime IO (printing the game to the console and getting active user input)
class IO {
public:
    // Constructors and destructor

    // Default Constructor
    IO();

    // Redraws the console window with the level object given.
    void update(Level level);

private:
    // A single character to represent the background color when displaying.
    char backgroundColor;
};


#endif //ASCIIADVENTUREGAME_IO_H
