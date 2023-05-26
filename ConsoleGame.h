#ifndef CONSOLEGAME_H
#define CONSOLEGAME_H

#include "VideoGame.h"

class ConsoleGame : public VideoGame {
protected:
    std::string consoleType; // Console System Type

public:
    // Setter
    void setConsoleType(std::string console);

    // Getter
    std::string getConsoleType();

    // Override display function
    void display() override;
};

#endif
