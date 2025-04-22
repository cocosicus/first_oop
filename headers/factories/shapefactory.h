#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include <string>
#include <memory>
#include <map>
#include "shape.h"
#include "circlefactory.h"
#include "rectanglefactory.h"
#include "trianglefactory.h"
#include "inputhelper.h"
#include "shapefactorybase.h"
#include <iostream>

class ShapeFactory {
private:
    using FactoryMap = std::map<std::string, std::unique_ptr<ShapeFactoryBase>>;
    FactoryMap factories;

public:
    ShapeFactory();
    std::unique_ptr<Shape> createShape(const std::string& type);
};

#endif // SHAPEFACTORY_H
