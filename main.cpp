
#include "include/Loader.h"
#include "include/IO.h"

using namespace std;

int main() {
    // Simple code for testing purposes once the classes used are implemented.
    Level mainLevel = gameLoader::loadLevel();

    IO io;

    io.update(mainLevel);

    while (true);

    return 0;
}
