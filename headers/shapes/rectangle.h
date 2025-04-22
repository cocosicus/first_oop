#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "shape.h"
#include "point.h"
#include "exceptions.h"

class Rectangle : public Shape {
private:
    std::string name;
    Point topLeft;
    Point bottomRight;

public:
    Rectangle(const std::string& name, Point topLeft, Point bottomRight);

    std::string getName() const override;
    double getArea() const override;
    std::string getType() const override;
    std::string getParams() const override;
};

#endif // RECTANGLE_H
