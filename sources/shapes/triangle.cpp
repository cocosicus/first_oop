#include "triangle.h"
#include "math.h"
#include <sstream>

Triangle::Triangle(const std::string& name, Point p1, Point p2, Point p3) : name(name), p1(p1), p2(p2), p3(p3) {
    if (arePointsCollinear(p1, p2, p3))
        throw InvalidTriangleException();
}

std::string Triangle::getName() const {
    return name;
}

double Triangle::getArea() const {
    return  calculateTriangleArea(p1, p2, p3);
}

std::string Triangle::getType() const { return "Triangle"; }

std::string Triangle::getParams() const {
    std::stringstream ss;
    ss << "Name: " << name << ", Points: (" << p1.x << ", " << p1.y << "), (" << p2.x << ", " << p2.y << "), (" << p3.x << ", " << p3.y << ")";
    return ss.str();
}
