#pragma once
#include <memory>

#include "Shape.hpp"
#include "ShapeType.hpp"


class ShapeFactory {
public:
    static std::unique_ptr<Shape> create(ShapeType type);
};
