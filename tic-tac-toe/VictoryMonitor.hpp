#pragma once
#include "Board.hpp"
#include "ShapeType.hpp"


class VictoryMonitor {
    Board &m_board_;

public:
    VictoryMonitor(Board &board);

    ShapeType spot() const;
};
