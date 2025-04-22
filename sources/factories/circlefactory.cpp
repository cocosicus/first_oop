#include "circlefactory.h"
#include <iostream>

CircleFactory::CircleFactory() {}

std::unique_ptr<Shape> CircleFactory::createShape() {
    std::unique_ptr<Shape> shape = nullptr;
    std::string name;
    Point center;
    double radius;
    bool success = true;

    std::cout << "Enter circle name: ";
    std::cin >> name;

    if (!InputHelper::getDouble("Enter center X: ", center.x)) success = false;
    if (success && !InputHelper::getDouble("Enter center Y: ", center.y)) success = false;
    if (success && !InputHelper::getDouble("Enter radius: ", radius)) success = false;

    if (success) {
        try {
            shape = std::make_unique<Circle>(name, center, radius);
        }
        catch (const InvalidCircleException&) {
            std::cerr << "Invalid circle parameters." << std::endl;
            shape = nullptr;
        }
    }
    else
        std::cerr << "Failed to read all circles parametrs." << std::endl;
    return shape;
}
