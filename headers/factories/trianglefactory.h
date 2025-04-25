#ifndef TRIANGLEFACTORY_H
#define TRIANGLEFACTORY_H

#include "shapefactorybase.h"
#include "triangle.h"
#include "point.h"
#include "inputhelper.h"
#include <memory>
#include <string>

class TriangleFactory : public ShapeFactoryBase {
public:
    TriangleFactory();
    std::unique_ptr<Shape> createShape() override;
};

#endif // TRIANGLEFACTORY_H
