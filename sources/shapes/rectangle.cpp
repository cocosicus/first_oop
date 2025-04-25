#include "rectangle.h"
#include "mathutils.h"
#include <sstream>

Rectangle::Rectangle(const std::string& name, Point topLeft, Point bottomRight) : name(name), topLeft(topLeft), bottomRight(bottomRight) {
    if (MathUtils::isEqual(topLeft.getX(), bottomRight.getX()) || MathUtils::isEqual(topLeft.getY(), bottomRight.getY())) {
        throw InvalidRectangleException();
    }
}

std::string Rectangle::getName() const {
    return name;
}

double Rectangle::getArea() const {
    return MathUtils::getLength(topLeft.getX(), bottomRight.getX()) * MathUtils::getLength(topLeft.getY(), bottomRight.getY());
}

std::string Rectangle::getType() const {
    return "Rectangle";
}

std::string Rectangle::getParams() const {
    std::stringstream ss;
    ss << "Name: " << name << ", TopLeft: (" << topLeft.getX() << ", " << topLeft.getY() << "), BottomRight: (" << bottomRight.getX() << ", " << bottomRight.getY() << ")";
    return ss.str();
}
