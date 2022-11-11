#include "my_vector.h"

using std::cout;
//
Vector::Vector(int size)
: elements{new int[size]}
{
    cout<<"Create memory: "<<elements<<"\n";
    this->size = size;
}

/*
1-Initialize size for v1
2-Initialize memory for v1
3-copy elements from v to v1
*/
Vector::Vector(const Vector& v)
: size{v.size}, elements{new int[v.size]}
{
    cout<<"Copy constructor - create memory: "<<elements<<"\n";
    
    for(auto i =0; i < v.size; i++)
    {
        elements[i] = v.elements[i];
    }
}

Vector::~Vector()
{
    cout<<"Delete memory: "<<elements<<"\n";
    delete[] elements;
}

