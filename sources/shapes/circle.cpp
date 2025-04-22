#include "circle.h"
#include "math.h"
#include <sstream>

Circle::Circle(const std::string& name, Point center, double radius) : name(name), center(center), radius(radius) {
    if (!isValidRadius(radius)) {
        throw InvalidCircleException();
    }
}

std::string Circle::getName() const {
    return name;
}

double Circle::getArea() const {
    return calculateCircleArea(radius);
}

std::string Circle::getType() const {
    return "Circle";
}

std::string Circle::getParams() const {
    std::stringstream ss;
    ss << "Name: " << name << ", Center X: " << center.x << ", Center Y: " << center.y << ", Radius: " << radius;
    return ss.str();
}
