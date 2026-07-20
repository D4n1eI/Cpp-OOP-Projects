//
// Created by daniel-andrade-martins on 20/07/2026.
//

#include "BoardPrinter.hpp"

#include <iostream>


BoardPrinter::BoardPrinter(Board &board)
    : m_board_(board) {
}

void BoardPrinter::print() const {
    const auto &tile_set = m_board_.tile_set();
    for (int i = 0; i < 3; i++) {
        std::cout << rows[i] << " ";
        for (int j = 0; j < 3; j++) {
            std::cout << tile_set.get(i, j) << " ";
        }
        std::cout << "\n";
    }
    std::cout << "  ";
    for (auto &n: columns) {
        std::cout << n << " ";
    }
}
