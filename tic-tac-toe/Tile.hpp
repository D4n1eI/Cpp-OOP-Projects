#pragma once
#include <memory>
#include <optional>
#include <ostream>
#include <string>

#include "Shape.hpp"
#include "ShapeType.hpp"


class Tile {
    int m_row_;
    int m_col_;
    std::unique_ptr<Shape> m_shape_;

public:
    Tile();

    Tile(int row, int col, Shape *shape);

    Tile(int row, int col);

    void shape(std::unique_ptr<Shape> shape);

    bool empty() const;

    friend std::ostream &operator<<(std::ostream &os, const Tile &obj) {
        if (obj.m_shape_) {
            os << obj.m_shape_->symbol();
        } else {
            os << "_";
        }
        return os;
    }

    ShapeType shape_type() const {
        if (!m_shape_) {
            return ShapeType::None;
        }

        return m_shape_->type();
    }
};
