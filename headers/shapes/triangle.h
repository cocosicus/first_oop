#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <string>
#include "shape.h"
#include "point.h"
#include "exceptions.h"

class Triangle : public Shape {
private:
    std::string name;
    Point p1;
    Point p2;
    Point p3;

public:
    Triangle(const std::string& name, Point p1, Point p2, Point p3);

    std::string getName() const override;
    double getArea() const override;
    std::string getType() const override;
    std::string getParams() const override;
};

#endif // TRIANGLE_H
