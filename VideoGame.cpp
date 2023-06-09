/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 2 - Polymorphism
Video Game Store
*/
#include "VideoGame.h"

void VideoGame::setTitle(std::string t) {
    title = t;
}

void VideoGame::setPrice(double p) {
    price = p;
}

std::string VideoGame::getTitle() {
    return title;
}

double VideoGame::getPrice() {
    return price;
}

void VideoGame::display() {
    std::cout << "\n********************\n";
    std::cout << "Title: " << title << "\n";
    std::cout << "Price: " << price << "\n";
}