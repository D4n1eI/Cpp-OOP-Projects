#pragma once
#include <string>

#include "Shape.hpp"
#include "ShapeType.hpp"

class Ball : public Shape {
public:
    ShapeType type() const override;

    char symbol() const override;
};


