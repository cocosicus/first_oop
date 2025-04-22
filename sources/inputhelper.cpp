#include "inputhelper.h"
#include <iostream>
#include <limits>

bool InputHelper::getDouble(const std::string& prompt, double& value) {
    std::cout << prompt;
    bool validInput = false;
    std::cin >> value;
    if (std::cin.fail()) {
        std::cerr << "Invalid input. Please enter a number." << std::endl;
        std::cin.clear();
    }
    else
        validInput = true;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return validInput;
}

bool InputHelper::getInt(const std::string& prompt, int& value) {
    std::cout << prompt;
    bool validInput = false;
    std::cin >> value;
    if (std::cin.fail()) {
        std::cerr << "Invalid input. Please enter an integer." << std::endl;
        std::cin.clear();
    }
    else
        validInput = true;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return validInput;
}
