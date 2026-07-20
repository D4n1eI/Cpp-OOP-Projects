//
// Created by daniel-andrade-martins on 20/07/2026.
//

#include "BoardInserter.hpp"


#include "ShapeFactory.hpp"

BoardInserter::BoardInserter(Board &board)
    : m_board_(board) {
}

bool BoardInserter::insert(const int row, const int col, const ShapeType type) const {
    Tile &tile = m_board_.tile_set().get(row, col);

    if (tile.empty()) {
        tile.shape(ShapeFactory::create(type));
        return true;
    }

    return false;
}
