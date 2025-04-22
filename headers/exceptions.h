#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>

class ShapeException : public std::exception {
public:
    virtual const char* what() const noexcept override = 0;
};

class InvalidCircleException : public ShapeException {
public:
    const char* what() const noexcept override;
};

class InvalidRectangleException : public ShapeException {
public:
    const char* what() const noexcept override;
};

class InvalidTriangleException : public ShapeException {
public:
    const char* what() const noexcept override;
};

class ShapeNotFoundException : public ShapeException {
public:
    const char* what() const noexcept override;
};

class InvalidInputException : public ShapeException {
public:
    const char* what() const noexcept override;
};

#endif // EXCEPTIONS_H
