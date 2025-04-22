#ifndef SHAPEMANAGER_H
#define SHAPEMANAGER_H

#include <vector>
#include <memory>
#include "shape.h"
#include "shapefactory.h"

class ShapeManager {
private:
    std::vector<std::unique_ptr<Shape>> shapes;
    ShapeFactory shapeFactory;

public:
    void addShape(const std::string& type);
    void listShapes() const;
    void listAreas() const;
    double sumAreas() const;
    void sortShapesByArea();
    void deleteShape();
    void deleteShapesByArea();
};

#endif // SHAPEMANAGER_H
