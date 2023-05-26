#include "ComputerGame.h"

void ComputerGame::setOsType(std::string os) {
    osType = os;
}

std::string ComputerGame::getOsType() {
    return osType;
}

void ComputerGame::display() {
    VideoGame::display();
    std::cout << "OS Type: " << osType << "\n";
    std::cout << "********************\n";
}
