#ifndef Circle_h
#define Circle_h

#include <iostream>
#include "Shape.h"
class Circle : public Shape {
protected:
    virtual void draw() { std::cout << "Circle" << std::endl; }
};

#endif
