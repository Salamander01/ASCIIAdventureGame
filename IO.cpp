
#include <windows.h>
#include "include/IO.h"

using namespace std;

IO::IO() {
    this->backgroundColor = '0';
}

void IO::update(Level level) {
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0, 0}); // Constantly puts cursor to the 0,0 position.

}
