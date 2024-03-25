#include "console_interface.h"
#include "tests.h"

int main() {
    Tests tests{};
    tests.test();

    ConsoleInterface consoleInterface;
    consoleInterface.start();
}


