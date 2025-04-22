#include "menu.h"
#include <iostream>
#include <limits>

int Menu::getChoice() {
    int choice = -1;
    std::cout << "\nShape Manager Menu" << std::endl;
    std::cout << "1. Add Circle" << std::endl;
    std::cout << "2. Add Rectangle" << std::endl;
    std::cout << "3. Add Triangle" << std::endl;
    std::cout << "4. List Shapes" << std::endl;
    std::cout << "5. List Shapes with Areas" << std::endl;
    std::cout << "6. Sum of Areas" << std::endl;
    std::cout << "7. Sort Shapes by Area" << std::endl;
    std::cout << "8. Delete Shape" << std::endl;
    std::cout << "9. Delete Shapes by Area" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "Enter your choice: ";

    std::cin >> choice;

    if (std::cin.fail()) {
        std::cerr << "Invalid input. Please enter a number." << std::endl;
        std::cin.clear();
        choice = -1;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return choice;
}
