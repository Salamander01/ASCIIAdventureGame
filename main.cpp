
#include <iostream>
#include <fstream>

#include "IO.h"

using namespace std;

int main() {

    cout << "Hello World!";

    return 0;
}

void levelCreationTestAndIOUpdateMethodTest() {
    Level testLevel = Level({
                                    {Space('#', false, "wall", 'f'), Space('.', true, "air", 'f')}
                            }, {}, {}, 0);
}

void readCSVTest() {
    // Simple readCSV (comments) test
    vector<vector<string>> test = IO::readCSV("templates/SpaceTypesTemplate.csv");
    for (vector<string> row: test) {
        for (string item : row) {
            cout << item << endl;
        }
        cout << endl;
    }
    std::ofstream file("relative_path_test.txt");
    if (file.is_open()) {
        file << "Test file";
    }

    file.close();
}
