#pragma once
#include "Board.hpp"
#include "ShapeType.hpp"

class BoardInserter {
    Board &m_board_;

public:
    BoardInserter(Board &board);

    bool insert(int row, int col, ShapeType type) const;
};


