#pragma once
#include "ShapeType.hpp"

class Shape {
public:
    virtual ~Shape() = default;

    virtual char symbol() const = 0;

    virtual ShapeType type() const = 0;
};
