#pragma once

#include "Board.hpp"
#include "BoardInserter.hpp"
#include "BoardPrinter.hpp"
#include "VictoryMonitor.hpp"

class BoardUtils {
    Board m_board_;
    BoardInserter m_inserter_;
    BoardPrinter m_printer_;
    VictoryMonitor m_monitor_;

public:
    BoardUtils();

    Board &board();

    BoardInserter &inserter();

    BoardPrinter &printer();

    VictoryMonitor &monitor();
};
