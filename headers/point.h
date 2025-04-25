#ifndef POINT_H
#define POINT_H

#include "inputhelper.h"
#include <iostream>
#include <string>

class Point {
public:
    Point();
    Point(double x, double y);
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    bool readPoint(const std::string& pointName);
private:
    double x;
    double y;
};

#endif // POINT_H
