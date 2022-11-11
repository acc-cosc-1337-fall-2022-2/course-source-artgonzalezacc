//
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
public:
    Vector(int size);//create dynamic memory here
    Vector(const Vector& v);//copy constructor Rule 1 of 3 - Rule of 3 legacy c++
    ~Vector();//destructor-delete/free memory here
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}
    int Size()const{return size;}

private:
    int* elements;
    int size;
};


#endif
