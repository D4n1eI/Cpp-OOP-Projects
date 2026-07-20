//
// Created by daniel-andrade-martins on 20/07/2026.
//

#include "VictoryMonitor.hpp"

VictoryMonitor::VictoryMonitor(Board &board)
    : m_board_(board) {
}

ShapeType VictoryMonitor::spot() const {
    const int lines[8][3][2] = {
        {{0, 0}, {0, 1}, {0, 2}},
        {{1, 0}, {1, 1}, {1, 2}},
        {{2, 0}, {2, 1}, {2, 2}},
        {{0, 0}, {1, 0}, {2, 0}},
        {{0, 1}, {1, 1}, {2, 1}},
        {{0, 2}, {1, 2}, {2, 2}},
        {{0, 0}, {1, 1}, {2, 2}},
        {{0, 2}, {1, 1}, {2, 0}}
    };

    for (const auto &line: lines) {
        auto a = m_board_.tile_set().get(line[0][0], line[0][1]).shape_type();
        auto b = m_board_.tile_set().get(line[1][0], line[1][1]).shape_type();
        auto c = m_board_.tile_set().get(line[2][0], line[2][1]).shape_type();

        if (a != ShapeType::None && a == b && b == c) {
            return a;
        }
    }

    return ShapeType::None;
}
