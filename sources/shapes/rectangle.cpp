#include "rectangle.h"
#include "math.h"
#include <sstream>

Rectangle::Rectangle(const std::string& name, Point topLeft, Point bottomRight) : name(name), topLeft(topLeft), bottomRight(bottomRight) {
    if (!isValidRectangle(topLeft, bottomRight)) {
        throw InvalidRectangleException();
    }
}

std::string Rectangle::getName() const {
    return name;
}

double Rectangle::getArea() const {
    return calculateRectangleArea(topLeft, bottomRight);
}

std::string Rectangle::getType() const {
    return "Rectangle";
}

std::string Rectangle::getParams() const {
    std::stringstream ss;
    ss << "Name: " << name << ", TopLeft: (" << topLeft.x << ", " << topLeft.y << "), BottomRight: (" << bottomRight.x << ", " << bottomRight.y << ")";
    return ss.str();
}
