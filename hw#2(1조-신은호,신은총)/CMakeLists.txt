cmake_minimum_required(VERSION 3.26)
project(hw2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hw2
        Circle.h
        GE.cpp
        GE.h
        GE.hpp
        Line.h
        main.cpp
        Rect.h
        Shape.h
        UI.cpp
        UI.h)
