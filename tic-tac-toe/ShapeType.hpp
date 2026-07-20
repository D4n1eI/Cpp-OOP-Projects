#pragma once

enum class ShapeType {
    Cross,
    Ball,
    None
};


inline std::string shape_to_str(const ShapeType type) {
    switch (type) {
        case ShapeType::Cross:
            return "Cross";
        case ShapeType::Ball:
            return "Ball";
    }

    return "None";
}

inline ShapeType str_to_shape(const std::string &str) {
    if (str == "❌") {
        return ShapeType::Cross;
    }

    if (str == "⭕") {
        return ShapeType::Ball;
    }

    return ShapeType::None;
}


inline ShapeType next_shape(ShapeType current) {
    switch (current) {
        case ShapeType::Cross:
            return ShapeType::Ball;
        case ShapeType::Ball:
            return ShapeType::Cross;
    }

    return ShapeType::Cross;
}
