
#ifndef ASCIIADVENTUREGAME_IO_H
#define ASCIIADVENTUREGAME_IO_H


#include <vector>
#include "Level.h"

class IO {
public:
    IO();

    void update(Level level);

private:
    char backgroundColor;
};


#endif //ASCIIADVENTUREGAME_IO_H
