//shape.h
#include<iostream>

#ifndef SHAPE_H
#define SHAPE_H

class Shape//abstract class
{
public:
    Shape(int color, int* something){this->color = color; this->something = something;}
    virtual void draw()=0;  //pure virtual function
protected:
    int color;
    int* something;    
};

#endif