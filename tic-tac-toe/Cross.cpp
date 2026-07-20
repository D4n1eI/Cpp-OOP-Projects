//
// Created by daniel-andrade-martins on 20/07/2026.
//

#include "Cross.hpp"

#include <iostream>

#include "ShapeType.hpp"


ShapeType Cross::type() const {
    return ShapeType::Cross;
}

char Cross::symbol() const {
    return 'X';
}



