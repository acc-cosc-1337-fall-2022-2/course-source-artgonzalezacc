//
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
public:
    Vector(int size);//create dynamic memory here
    Vector(const Vector& v);//copy constructor Rule 1 of 3 - Rule of 3 legacy c++
    Vector& operator=(const Vector& v);//Rule 2 of 3
    Vector(Vector&& v);//move constructor Rule 4 of 5 Modern C++
    Vector& operator=(Vector&& v);//move assignment Rule 5 0f 5 in Modern C++
    ~Vector();//destructor-delete/free memory here Rule 3 of 3
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}
    int Size()const{return size;}
    void Reserve(int new_size);
    void Resize(int new_size);
    void Push_Back(int value);

private:
    int size;//index to input a value
    int capacity;//max amount of elements our list can hold
    int* elements;
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPLIER{2};
    
};


#endif
//free function; not part of the class
Vector get_vector();