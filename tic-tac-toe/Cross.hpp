#pragma once
#include <string>

#include "Shape.hpp"
#include "ShapeType.hpp"


class Cross : public Shape {
public:
    ShapeType type() const override;

    char symbol() const override;
};
