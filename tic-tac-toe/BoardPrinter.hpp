#pragma once
#include "Board.hpp"


class BoardPrinter {
    Board &m_board_;
    std::array<int, 3> columns{1, 2, 3}, rows{1, 2, 3};

public:
    BoardPrinter(Board &board);

    BoardPrinter() = default;

    void print() const;
};
