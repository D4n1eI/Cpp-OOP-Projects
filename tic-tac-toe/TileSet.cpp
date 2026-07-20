//
// Created by daniel-andrade-martins on 20/07/2026.
//

#include "TileSet.hpp"

TileSet::TileSet()
    : m_tiles_{} {
}

Tile &TileSet::get(const int row, const int col) {
    return m_tiles_[row][col];
}

const Tile &TileSet::get(const int row, const int col) const {
    return m_tiles_[row][col];
}

void TileSet::clear() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m_tiles_[i][j] = Tile(i, j);
        }
    }
}
