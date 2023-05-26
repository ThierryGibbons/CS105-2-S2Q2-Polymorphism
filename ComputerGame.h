/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 2 - Polymorphism
Video Game Store
*/
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
