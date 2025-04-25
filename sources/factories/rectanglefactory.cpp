#include "rectanglefactory.h"
#include <iostream>

RectangleFactory::RectangleFactory() {}

std::unique_ptr<Shape> RectangleFactory::createShape() {
    std::unique_ptr<Shape> shape = nullptr;
    std::string name;
    Point topLeft;
    Point bottomRight;
    bool success = true;

    std::cout << "Enter rectangle name: ";
    std::cin >> name;

    if (!topLeft.readPoint("top-left")) success = false;
    if (success && !bottomRight.readPoint("bottom-right")) success = false;

    if (success) {
        try {
            shape = std::make_unique<Rectangle>(name, topLeft, bottomRight);
        }
        catch (const InvalidRectangleException&) {
            std::cerr << "Invalid rectangle parameters." << std::endl;
            shape = nullptr;
        }
    }
    else
        std::cerr << "Failed to read all rectangle parametrs.";
    return shape;
}
