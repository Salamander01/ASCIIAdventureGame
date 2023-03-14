
#include <windows.h>
#include "../include/IO.h"
#include "../include/Level.h"

using namespace std;


void IO::update(Level world) {
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0, 0});
    // TODO create world to then create a way to output the world
}
