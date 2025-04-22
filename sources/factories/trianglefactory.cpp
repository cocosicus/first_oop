#include "trianglefactory.h"
#include <iostream>

TriangleFactory::TriangleFactory() {}

std::unique_ptr<Shape> TriangleFactory::createShape() {
    std::unique_ptr<Shape> shape = nullptr;
    std::string name;
    Point p1, p2, p3;
    bool success = true;

    std::cout << "Enter triangle name: ";
    std::cin >> name;

    if (!InputHelper::getDouble("Enter p1 X: ", p1.x)) success = false;
    if (success && !InputHelper::getDouble("Enter p1 Y: ", p1.y)) success = false;
    if (success && !InputHelper::getDouble("Enter p2 X: ", p2.x)) success = false;
    if (success && !InputHelper::getDouble("Enter p2 Y: ", p2.y)) success = false;
    if (success && !InputHelper::getDouble("Enter p3 X: ", p3.x)) success = false;
    if (success && !InputHelper::getDouble("Enter p3 Y: ", p3.y)) success = false;

    if (success) {
        try {
            shape = std::make_unique<Triangle>(name, p1, p2, p3);
        }
        catch (const InvalidTriangleException&) {
            std::cerr << "Invalid triangle parameters." << std::endl;
            shape = nullptr;
        }
    }
    else
        std::cerr << "Failed to read all triangle parametrs.";
    return shape;
}
