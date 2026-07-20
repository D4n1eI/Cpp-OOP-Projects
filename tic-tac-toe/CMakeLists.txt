cmake_minimum_required(VERSION 4.2)
project(tic_tac_toe)

set(CMAKE_CXX_STANDARD 26)

add_executable(tic_tac_toe main.cpp
        Board.cpp
        Board.hpp
        Tile.cpp
        Tile.hpp
        TileSet.cpp
        TileSet.hpp
        BoardPrinter.cpp
        BoardPrinter.hpp
        Shape.hpp
        Cross.cpp
        Cross.hpp
        Ball.cpp
        Ball.hpp
        BoardInserter.cpp
        BoardInserter.hpp
        ShapeFactory.cpp
        ShapeFactory.hpp
        ShapeType.hpp
        InputProcessor.cpp
        InputProcessor.hpp
        GameUtils.cpp
        GameUtils.hpp
        VictoryMonitor.cpp
        VictoryMonitor.hpp
        BoardUtils.cpp
        BoardUtils.hpp
)
