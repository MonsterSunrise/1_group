#ifndef Rect_h
#define Rect_h

#include <iostream>
#include "Shape.h"
class Rect : public Shape {
protected:
    virtual void draw() { std::cout << "Rectangle" << std::endl; }
};

#endif 
