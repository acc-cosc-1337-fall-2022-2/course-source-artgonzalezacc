//circle.h
#include "shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape
{
public: 
    Circle(int color, int* something) : Shape(color, something){/**/}
    void draw(){std::cout<<"Circle "<<color<<" "<<something<<"\n";}    
};

#endif