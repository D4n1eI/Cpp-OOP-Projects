#pragma once
#include <optional>
#include <string>


class InputProcessor {
    std::string m_str_;

public:
    InputProcessor() = default;

    InputProcessor *get();

    std::optional<std::pair<int, int> > parse() const;
};
