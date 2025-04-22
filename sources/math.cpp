#include "math.h"

double calculateTriangleArea(Point p1, Point p2, Point p3) {
    return 0.5 * std::abs((p2.x - p1.x) * (p3.y - p1.y) - (p3.x - p1.x) * (p2.y - p1.y));
}

bool arePointsCollinear(Point p1, Point p2, Point p3, const double eps) {
    bool errorState = false;
    if ((abs(p1.x - p2.x) < eps && abs(p1.y - p2.y) < eps) ||
        (abs(p1.x - p3.x) < eps && abs(p1.y - p3.y) < eps) ||
        (abs(p2.x - p3.x) < eps && abs(p2.y - p3.y) < eps)) {
        errorState = true;
    }

    if (!errorState) {
        double area = calculateTriangleArea(p1, p2, p3);
        if (area < eps)
            errorState = true;
    }
    return errorState;
}

double calculateRectangleArea(Point p1, Point p2) {
    return abs(p1.x - p2.x) * abs(p1.y - p2.y);
}

bool isValidRectangle(Point topLeft, Point bottomRight, const double eps) {
    return bottomRight.x - topLeft.x > eps && topLeft.y - bottomRight.y > eps;
}

double calculateCircleArea(double radius) {
    return radius * radius * M_PI;
}

bool isValidRadius(double radius) {
    return radius >= 0;
}
