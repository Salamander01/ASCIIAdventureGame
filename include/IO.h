
#pragma once

#include "Level.h"

// Manages runtime IO (printing the game to the console and getting active user input)
class IO {
public:
    // Constructors

    // Default Constructor
    IO();

    // Redraws the console window with the level object given.
    void output(Level level);


    // CSV management methods

    // Load a CSV file found at the filePath from the resources root
    static std::vector<std::vector<std::string>> readCSV(const std::string &filePath);

    // General IO

    // Get a string from the user given the prompt
    static std::string promptString(std::string prompt); // TODO
    // Get a bool from user input
    static bool promptBool(std::string prompt); // TODO
    // Get an integer from user input
    static int promptInt(std::string prompt); // TODO

private:
    // A string split method taken from favtutor.com
    static std::vector<std::string> split(std::string str, char separator);

    // Sets the console text color
    void setPrintColor(char textColor) const;

    // Sets the cursor position
    static void setCursorPosition(int x, int y);

    // A single character to represent the background color when displaying.
    char backgroundColor;
};
