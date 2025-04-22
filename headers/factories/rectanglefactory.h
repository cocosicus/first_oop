#ifndef RECTANGLEFACTORY_H
#define RECTANGLEFACTORY_H

#include "shapefactorybase.h"
#include "rectangle.h"
#include "point.h"
#include "inputhelper.h"
#include <memory>
#include <string>

class RectangleFactory : public ShapeFactoryBase {
public:
    RectangleFactory();
    std::unique_ptr<Shape> createShape() override;
};

#endif // RECTANGLEFACTORY_H
