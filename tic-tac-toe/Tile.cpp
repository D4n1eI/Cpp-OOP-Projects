#include "Tile.hpp"


Tile::Tile() {
}

Tile::Tile(const int row, const int col, Shape *shape)
    : m_row_(row), m_col_(col), m_shape_(shape) {
}

Tile::Tile(const int row, const int col)
    : m_row_(row), m_col_(col) {
}

void Tile::shape(std::unique_ptr<Shape> shape) {
    m_shape_ = std::move(shape);
}

bool Tile::empty() const {
    return m_shape_ == nullptr;
}
