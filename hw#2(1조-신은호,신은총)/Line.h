#ifndef Line_h
#define Line_h

#include <iostream>
#include "Shape.h"
class Line : public Shape {
protected:
    virtual void draw() { std::cout << "Line" << std::endl; }
};

#endif 
