
#include <iostream>

#include "Board.hpp"
#include "BoardInserter.hpp"
#include "BoardPrinter.hpp"
#include "GameUtils.hpp"
#include "InputProcessor.hpp"
#include "ShapeFactory.hpp"

int main() {
    GameUtils utils{};
    utils.loop();
}
