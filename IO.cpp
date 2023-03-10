//
// Created by 24SFAERBER on 3/10/2023.
//

#include <iostream>
#include "IO.h"

using namespace std;


void IO::update(std::vector<std::string> world) {
    // TODO put cursor at point 0,0
    for (const string& row : world) {
        cout << row;
    }
}
