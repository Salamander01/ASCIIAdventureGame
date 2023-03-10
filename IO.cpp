//
// Created by 24SFAERBER on 3/10/2023.
//

#include <iostream>
#include <windows.h>
#include "IO.h"
#include "World.h"

using namespace std;


void IO::update(World world) {
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0, 0});
    for (const string& row : world.getWorld()) {
        cout << row;
    }


}
