#ifndef COMPUTERGAME_H
#define COMPUTERGAME_H

#include "VideoGame.h"

class ComputerGame : public VideoGame {
protected:
    std::string osType; // Operating System Type

public:
    // Setter
    void setOsType(std::string os);

    // Getter
    std::string getOsType();

    // Override display function
    void display() override;
};

#endif
