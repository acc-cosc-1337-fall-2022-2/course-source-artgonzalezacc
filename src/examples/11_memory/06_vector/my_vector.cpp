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

/*
1-Create temporary memory for v1
2-Copy values from v into v1 temporary memory
3-Delete v1 elements memory
4-Point v1 elements to temporary memory
5-Set v1 size to v.size
5-Return a reference to vector(this)
*/
Vector& Vector::operator=(const Vector& v)
{
    int* temp = new int[v.size];

    for(auto i=0; i < v.size; i++)
    {
        temp[i] = v.elements[i];
    }

    cout<<"copy assignment delete memory: "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    cout<<"Copy assignment-create memory: "<<elements<<"\n";
    size = v.size;

    return *this;
}

/*
1-Get v.elements memory(steal the guts)
2-Get size from V
3-point v.elements to nothing(nullptr)
4-set v size to 0
*/
Vector::Vector(Vector&& v)
: size{v.size}, elements{v.elements}
{
    cout<<"Move constructor-steal the memory "<<elements<<"\n";
    v.elements = nullptr;
    v.size = 0;
}


Vector::~Vector()
{
    cout<<"Delete memory: "<<elements<<"\n";
    delete[] elements;
}

//free function; not part of the class
Vector get_vector()
{
    Vector v(3);
    return v;
}
