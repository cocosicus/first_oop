#ifndef MATH_H
#define MATH_H

#include "point.h"
#include <cmath>

#define EPS 1e-9

double calculateTriangleArea(Point p1, Point p2, Point p3);

bool arePointsCollinear(Point p1, Point p2, Point p3, const double eps = EPS);

double calculateRectangleArea(Point p1, Point p2);

bool isValidRectangle(Point topLeft, Point bottomRight, const double eps = EPS);

double calculateCircleArea(double radius);

bool isValidRadius(double radius);


#endif // MATH_H
