//
// Created by daniel-andrade-martins on 20/07/2026.
//

#include "InputProcessor.hpp"

#include <iostream>
#include <optional>

InputProcessor *InputProcessor::get() {
    std::cout << "\nSlot?(e.g. 11, 21 , 31):";
    std::cin >> m_str_;
    return this;
}

std::optional<std::pair<int, int> > InputProcessor::parse() const {
    if (m_str_.size() != 2) {
        return std::nullopt;
    }

    const char c1 = m_str_[0];
    const char c2 = m_str_[1];

    if (!std::isdigit(c1) || !std::isdigit(c2)) {
        return std::nullopt;
    }

    int row = c1 - '1';
    int col = c2 - '1';

    if (row < 0 || row > 2 || col < 0 || col > 2) {
        return std::nullopt;
    }

    return std::pair{row, col};
}
