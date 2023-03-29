
#ifndef ASCIIADVENTUREGAME_IO_H
#define ASCIIADVENTUREGAME_IO_H


#include "Level.h"

// Manages runtime IO (printing the game to the console and getting active user input)
class IO {
public:
    // Constructors and destructor

    // Default Constructor
    IO();

    // Redraws the console window with the level object given.
    void output(Level level);

    // CSV management methods

    // Load a CSV file found at the file path from the resources root
    static std::vector<std::vector<std::string>> readCSV(const std::string& filePath);

    // General IO

    static std::string promptString(std::string prompt);
    static bool promptBool(std::string prompt);
    static int promptInt(std::string prompt);

private:
    // A string split method taken from favtutor.com
    static std::vector<std::string> split(std::string str, char separator);

    void setPrintColor(char textColor) const;

    static void setCursorPosition(int x, int y);

    // A single character to represent the background color when displaying.
    char backgroundColor;
};


#endif //ASCIIADVENTUREGAME_IO_H
