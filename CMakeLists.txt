cmake_minimum_required(VERSION 3.29)
project(pigdice4_0)

set(CMAKE_CXX_STANDARD 20)

add_executable(pigdice4_0 main.cpp
        die.cpp
        turn.cpp
        game.cpp
        die.h
        turn.h
        game.h)
