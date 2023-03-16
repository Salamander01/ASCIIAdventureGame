
#include <windows.h>
#include "../include/IO.h"
#include "../include/Level.h"

using namespace std;

IO::IO() {
    this->backgroundColor = '0';
}

void IO::update(Level level) {
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0, 0});

}
