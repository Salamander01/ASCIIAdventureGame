
#include <windows.h>
#include <fstream>
#include "IO.h"

using namespace std;

IO::IO() {
    this->backgroundColor = '0';
}

void IO::output(Level level) {
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0, 0}); // Constantly puts cursor to the 0,0 position.

}

std::vector<std::vector<std::string>> IO::readCSV(const std::string& fileName) {
    fstream fin;
    
    fin.open(fileName, ios::in);
    
    string fileString;
    fin >> fileString;

    vector<vector<string>> returnValue;

    for (const string& row : split(fileString, '\n')) {
        returnValue.push_back(split(row, ','));
    }
    
    return returnValue;
}

std::vector<std::string> IO::split(std::string str, char separator) {
    int startIndex =0;
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

