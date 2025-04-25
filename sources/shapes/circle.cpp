#include "circle.h"
#include "mathutils.h"
#include <sstream>

Circle::Circle(const std::string& name, Point center, double radius) : name(name), center(center), radius(radius) {
    if (!MathUtils::isPositive(radius)) {
        throw InvalidCircleException();
    }
}

std::string Circle::getName() const {
    return name;
}

double Circle::getArea() const {
    return radius * radius * M_PI;
}

std::string Circle::getType() const {
    return "Circle";
}

std::string Circle::getParams() const {
    std::stringstream ss;
    ss << "Name: " << name << ", Center X: " << center.getX() << ", Center Y: " << center.getY() << ", Radius: " << radius;
    return ss.str();
}
