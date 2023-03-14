
#ifndef ASCIIADVENTUREGAME_IO_H
#define ASCIIADVENTUREGAME_IO_H


#include <vector>
#include "Level.h"

class IO {
public:
    void update(Level world);

private:
    char backgroundColor;
};


#endif //ASCIIADVENTUREGAME_IO_H
