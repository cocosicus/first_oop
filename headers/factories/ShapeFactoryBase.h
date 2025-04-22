#ifndef SHAPEFACTORYBASE_H
#define SHAPEFACTORYBASE_H

#include "shape.h"
#include <memory>

class ShapeFactoryBase {
public:
    virtual ~ShapeFactoryBase() = default;
    virtual std::unique_ptr<Shape> createShape() = 0;
};

#endif // SHAPEFACTORYBASE_H
