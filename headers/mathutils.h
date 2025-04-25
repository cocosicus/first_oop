#ifndef MATHUTILS_H
#define MATHUTILS_H

#include "Point.h"
#include <cmath>
#define EPS 1e-9

class MathUtils {
public:

    static double crossProduct(const Point& a, const Point& b, const Point& c);

    static bool isEqual(double a, double b);

    static bool isPositive(double a);

    static double getLength(double a, double b);
};

#endif // MATHUTILS_H
