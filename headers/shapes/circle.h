#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include "shape.h"
#include "point.h"
#include "exceptions.h"

class Circle : public Shape {
private:
    std::string name;
    Point center;
    double radius;

public:
    Circle(const std::string& name, Point center, double radius);

    std::string getName() const override;
    double getArea() const override;
    std::string getType() const override;
    std::string getParams() const override;
};

#endif // CIRCLE_H
