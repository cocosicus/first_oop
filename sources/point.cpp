#include "point.h"

Point::Point() : x(0.0), y(0.0) {}

Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

void Point::setX(double x) {
    this -> x = x;
}

void Point::setY(double y) {
    this -> y = y;
}

bool Point::readPoint(const std::string& pointName) {
    double x, y;
    bool validInput = true;

    if (!InputHelper::getDouble("Enter " + pointName + " X: ", x)) {
        std::cerr << "Invalid x coordinate." << std::endl;
        validInput = false;
    }

    if (validInput && !InputHelper::getDouble("Enter " + pointName + " Y: ", y)) {
        std::cerr << "Invalid y coordinate." << std::endl;
        validInput = false;
    }

    if (validInput) {
        setX(x);
        setY(y);
    }

    return validInput;
}
