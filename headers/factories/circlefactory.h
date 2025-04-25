#ifndef CIRCLEFACTORY_H
#define CIRCLEFACTORY_H

#include "shapefactorybase.h"
#include "circle.h"
#include "point.h"
#include "inputhelper.h"
#include <memory>
#include <string>

class CircleFactory : public ShapeFactoryBase {
public:
    CircleFactory();
    std::unique_ptr<Shape> createShape() override;
};

#endif // CIRCLEFACTORY_H
