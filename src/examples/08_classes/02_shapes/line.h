//line.h
#include "shape.h"

#ifndef LINE_H
#define LINE_H

class Line: public Shape
{
public:
    Line(int color, int* something) : Shape(color, something){/**/}
    void draw(){std::cout<<"Line "<<color<<" "<<*something<<"\n";}    
};

#endif