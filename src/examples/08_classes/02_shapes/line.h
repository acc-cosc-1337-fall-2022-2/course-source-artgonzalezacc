//line.h
#include "shape.h"

#ifndef LINE_H
#define LINE_H

class Line: public Shape
{
public:
    void draw(){std::cout<<"Line\n";}    
};

#endif