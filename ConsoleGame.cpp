#include "ConsoleGame.h"

void ConsoleGame::setConsoleType(std::string console) {
    consoleType = console;
}

std::string ConsoleGame::getConsoleType() {
    return consoleType;
}

void ConsoleGame::display() {
    VideoGame::display();
    std::cout << "Console Type: " << consoleType << "\n";
    std::cout << "********************\n";
}
