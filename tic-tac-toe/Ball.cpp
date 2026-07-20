//
// Created by daniel-andrade-martins on 20/07/2026.
//

#include "Ball.hpp"

#include <iostream>

#include "ShapeType.hpp"


ShapeType Ball::type() const {
    return ShapeType::Ball;
}

char Ball::symbol() const {
    return 'O';
}


