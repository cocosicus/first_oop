#include "shapefactory.h"
#include <stdexcept>
#include <memory>

ShapeFactory::ShapeFactory() {
    factories["Circle"] = std::make_unique<CircleFactory>();
    factories["Rectangle"] = std::make_unique<RectangleFactory>();
    factories["Triangle"] = std::make_unique<TriangleFactory>();
}

std::unique_ptr<Shape> ShapeFactory::createShape(const std::string& type) {
    auto it = factories.find(type);
    if (it != factories.end()) {
        return it->second->createShape();
    } else {
        throw std::runtime_error("Invalid shape type.");
    }
}
