#include "exceptions.h"

const char *InvalidCircleException::what() const noexcept {
    return "Invalid circle parameters.";
}

const char *InvalidRectangleException::what() const noexcept {
    return "Invalid rectangle parameters.";
}

const char *InvalidTriangleException::what() const noexcept {
    return "Invalid triangle parameters.";
}

const char *ShapeNotFoundException::what() const noexcept {
    return "Shape not found at the given index.";
}

const char *InvalidInputException::what() const noexcept {
    return "Invalid input. Please enter a valid number.";
}

