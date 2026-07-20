//
// Created by daniel-andrade-martins on 20/07/2026.
//

#include "Board.hpp"

Board::Board()
    : m_tile_set_() {
}

TileSet &Board::tile_set() {
    return m_tile_set_;
}

const TileSet &Board::tile_set() const {
    return m_tile_set_;
}

void Board::clear() {
    m_tile_set_.clear();
}
