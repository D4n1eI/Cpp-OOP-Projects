//
// Created by daniel-andrade-martins on 20/07/2026.
//

#include "GameUtils.hpp"

#include <iostream>


GameUtils::GameUtils()
    : m_board_utils_(),
      m_processor_() {
}

void GameUtils::loop() {
    while (!m_over_) {
        std::cout << "\nTurn " << m_turn_counter_ << "\n";
        std::cout << shape_to_str(m_on_move_) << " on move\n";

        m_board_utils_.printer().print();

        bool placed = false;

        while (!placed) {
            auto input = m_processor_.get()->parse();

            if (!input) {
                std::cout << "Invalid input, try again";
                continue;
            }

            auto [row, col] = *input;

            placed = m_board_utils_.inserter().insert(row, col, m_on_move_);

            if (!placed) {
                std::cout << "Invalid move, try again";
            }
        }

        ShapeType winner = m_board_utils_.monitor().spot();

        if (winner != ShapeType::None) {
            m_board_utils_.printer().print();

            std::cout << "\nGame over\n";
            std::cout << "Winner is " << shape_to_str(winner);

            m_over_ = true;
            break;
        }

        m_on_move_ = next_shape(m_on_move_);

        m_turn_counter_++;

        if (m_turn_counter_ == 10) {
            m_board_utils_.printer().print();
            std::cout << "\nDraw!";
            break;
        }
    }
}
