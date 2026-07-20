#include "BoardUtils.hpp"

BoardUtils::BoardUtils()
    : m_board_(),
      m_inserter_(m_board_),
      m_printer_(m_board_),
      m_monitor_(m_board_) {
}

Board &BoardUtils::board() {
    return m_board_;
}

BoardInserter &BoardUtils::inserter() {
    return m_inserter_;
}

BoardPrinter &BoardUtils::printer() {
    return m_printer_;
}

VictoryMonitor &BoardUtils::monitor() {
    return m_monitor_;
}
