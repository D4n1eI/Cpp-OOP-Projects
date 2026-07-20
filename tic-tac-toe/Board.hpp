#pragma once

#include "TileSet.hpp"

class Board {
    TileSet m_tile_set_;

public:
    Board();

    TileSet &tile_set();

    const TileSet &tile_set() const;

    void clear();
};
