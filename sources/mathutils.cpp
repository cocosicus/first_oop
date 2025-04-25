#include "mathutils.h"

double MathUtils::crossProduct(const Point& a, const Point& b, const Point& c) {
    return (b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY() - a.getY()) * (c.getX() - a.getX());
}

bool MathUtils::isEqual(double a, double b) {
    return fabs(a - b) < EPS;
}

bool MathUtils::isPositive(double a) {
    return a > EPS;
}

double MathUtils::getLength(double a, double b) {
    return abs(a - b);
}
