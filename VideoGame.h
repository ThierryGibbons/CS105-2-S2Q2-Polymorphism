#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <string>
#include <iostream>

class VideoGame {
protected:
    std::string title;
    double price;

public:
    // Setters
    void setTitle(std::string t);
    void setPrice(double p);

    // Getters
    std::string getTitle();
    double getPrice();

    // Display function
    virtual void display();
};

#endif
