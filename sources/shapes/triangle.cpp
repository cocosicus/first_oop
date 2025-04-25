#include "triangle.h"
#include "mathutils.h"
#include <sstream>

Triangle::Triangle(const std::string& name, Point p1, Point p2, Point p3) : name(name), p1(p1), p2(p2), p3(p3) {
    if (MathUtils::isEqual(p1.getX(), p2.getX()) && MathUtils::isEqual(p1.getY(), p2.getY()) ||
        MathUtils::isEqual(p1.getX(), p3.getX()) && MathUtils::isEqual(p1.getY(), p3.getY()) ||
        MathUtils::isEqual(p2.getX(), p3.getX()) && MathUtils::isEqual(p2.getY(), p3.getY())) {
        throw InvalidTriangleException();
    }
}

std::string Triangle::getName() const {
    return name;
}

double Triangle::getArea() const {
    return 0.5 * MathUtils::crossProduct(p1, p2, p3);
}

std::string Triangle::getType() const {
    return "Triangle";
}

std::string Triangle::getParams() const {
    std::stringstream ss;
    ss << "Name: " << name << ", Points: (" << p1.getX() << ", " << p1.getY() << "), (" << p2.getX() << ", " << p2.getY() << "), (" << p3.getX() << ", " << p3.getY() << ")";
    return ss.str();
}
