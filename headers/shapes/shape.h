#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <memory>
#include "point.h"

class Shape
{
public:
    virtual ~Shape() = default;

    virtual std::string getName() const = 0;
    virtual double getArea() const = 0;
    virtual std::string getType() const = 0;
    virtual std::string getParams() const = 0;
};

#endif // SHAPE_H
