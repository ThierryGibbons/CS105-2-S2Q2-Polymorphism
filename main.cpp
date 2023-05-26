#include "VideoGame.h"
#include "ComputerGame.h"
#include "ConsoleGame.h"
#include <vector>

int main() {
    std::vector<VideoGame*> games;
    int choice;

    do {
        std::cout << "\n\nVideo Game Shop Menu:\n";
        std::cout << "1. Enter a new video game\n";
        std::cout << "2. List all video games\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            int gameType;
            std::cout << "Enter game type (1 for Computer Game, 2 for Console Game): ";
            std::cin >> gameType;

            std::string title;
            double price;
            std::cout << "Enter game title: ";
            std::cin >> title;
            std::cout << "Enter game price: ";
            std::cin >> price;

            if (gameType == 1) {
                std::string osType;
                std::cout << "Enter OS type: ";
                std::cin >> osType;

                ComputerGame* compGame = new ComputerGame();
                compGame->setTitle(title);
                compGame->setPrice(price);
                compGame->setOsType(osType);
                games.push_back(compGame);
            } else if (gameType == 2) {
                std::string consoleType;
                std::cout << "Enter console type: ";
                std::cin >> consoleType;

                ConsoleGame* consoleGame = new ConsoleGame();
                consoleGame->setTitle(title);
                consoleGame->setPrice(price);
                consoleGame->setConsoleType(consoleType);
                games.push_back(consoleGame);
            }
            break;
        }
        case 2:
            for (VideoGame* game : games) {
                game->display();
                std::cout << "\n";
            }
            break;
        case 3:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 3);

    // Clean up dynamically allocated memory
    for (VideoGame* game : games) {
        delete game;
    }

    return 0;
}
