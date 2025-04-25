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

    if (!p1.readPoint("point 1")) success = false;
    if (success && !p2.readPoint("point 2")) success = false;
    if (success && !p3.readPoint("point 3")) success = false;

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
