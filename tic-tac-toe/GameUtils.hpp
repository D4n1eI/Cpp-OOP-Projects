#pragma once

#include "BoardUtils.hpp"
#include "InputProcessor.hpp"

class GameUtils {
    BoardUtils m_board_utils_;
    InputProcessor m_processor_;

    ShapeType m_on_move_ = ShapeType::Cross;
    int m_turn_counter_ = 1;
    bool m_over_ = false;

public:
    GameUtils();

    void loop();
};
