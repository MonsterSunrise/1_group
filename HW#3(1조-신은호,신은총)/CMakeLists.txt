cmake_minimum_required(VERSION 3.26)
project(untitled5)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled5 main.cpp
        Shape.cpp
        Shape.h
        Circle.cpp
        Circle.h
        Rect.cpp
        Rect.h
        Line.cpp
        Line.h
        GE.cpp
        GE.h)
