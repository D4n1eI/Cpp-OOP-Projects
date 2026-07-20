//
// Created by daniel-andrade-martins on 20/07/2026.
//

#include "ShapeFactory.hpp"

#include "Ball.hpp"
#include "Cross.hpp"

std::unique_ptr<Shape> ShapeFactory::create(const ShapeType type) {
    switch (type) {
        case ShapeType::Cross:
            return std::make_unique<Cross>();
        case ShapeType::Ball:
            return std::make_unique<Ball>();
        default:
            break;
    }
}
