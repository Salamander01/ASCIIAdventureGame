
#include <windows.h>
#include <fstream>
#include <string>
#include <streambuf>
#include <sstream>

#include "IO.h"

using namespace std;

IO::IO() {
    this->backgroundColor = '0';
}

void IO::output(Level level) {
    setCursorPosition(0, 0);

    // Print the spaces
    vector<vector<Space>> spaceVector = level.getVectorArray();
    for (const vector<Space> &spaceVectorRow: spaceVector) {
        for (const Space &space: spaceVectorRow) {
            setPrintColor(space.getColor());
            cout << space.getSymbol();
        }
        cout << "\n";
    }

    // Print the items
    vector<Item> items = level.getItems();
    for (Item item: items) {
        setCursorPosition(item.getPosX(), item.getPosY());
        setPrintColor(item.getColor());
        cout << item.getSymbol();
    }

    // Print the monsters
    vector<Monster> monsters = level.getMonsters();
    for (Monster monster: monsters) {
        setCursorPosition(monster.getPosX(), monster.getPosY());
        setPrintColor(monster.getColor());
        cout << monster.getSymbol();
    }

}

void IO::setPrintColor(char textColor) const {
    string colorCommand = "Color ";
    colorCommand.push_back(this->backgroundColor);
    colorCommand.push_back(textColor);
    system(colorCommand.data());
}

void IO::setCursorPosition(int x, int y) {
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {static_cast<SHORT>(x), static_cast<SHORT>(y)});
}

std::vector<std::vector<std::string>> IO::readCSV(const std::string &filePath) {

    ifstream fin("../resources/" + filePath);
    stringstream buffer;
    buffer << fin.rdbuf();

    string valid;
    while (buffer.good()) {
        // Get the next character
        char temp = (char) buffer.get();
        // If statement to check if a comment start has been reached
        if (temp == '/' && buffer.peek() == '*') {
            // Iterates through the buffer until a comment close is reached
            while (!(buffer.get() == '*' && buffer.get() == '/'));
            // Gets the next character ; prevents the opening '/' from being added to valid
            temp = (char) buffer.get();
        }
        valid.push_back(temp);
    }


    vector<vector<string>> returnValue;

    for (const string &row: split(valid, '\n')) {
        returnValue.push_back(split(row, ','));
    }

    return returnValue;
}

std::vector<std::string> IO::split(std::string str, char separator) {
    int startIndex = 0;
    int endIndex;

    vector<string> returnValue;

    for (int i = 0; i <= str.size(); i++) {
        // Tracks when the separator or the end of the input is reached
        if (str[i] == separator || i == str.size()) {
            endIndex = i;
            string temp;
            temp.append(str, startIndex, endIndex - startIndex);
            returnValue.push_back(temp);
            startIndex = endIndex + 1;
        }
    }

    return returnValue;
}

