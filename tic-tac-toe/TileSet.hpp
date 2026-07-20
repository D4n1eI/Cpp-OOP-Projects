#pragma once
#include <array>
#include <ostream>

#include "Tile.hpp"


class TileSet {
    std::array<std::array<Tile, 3>, 3> m_tiles_;

public:
    TileSet();

    Tile &get(int row, int col);

    const Tile &get(int row, int col) const;

    void clear();
};
