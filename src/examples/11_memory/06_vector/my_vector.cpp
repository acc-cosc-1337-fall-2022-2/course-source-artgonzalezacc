#include "my_vector.h"

using std::cout;
//
Vector::Vector(int size)
: elements{new int[size]}
{
    cout<<"Create memory: "<<elements<<"\n";
    this->size = size;
    this->capacity = size;

    for(auto i=0; i < size; i++)
    {
        elements[i] = 0;
    }
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

/*
1-clear orginal dynamic memory from v 
2-point elements to v.elements
3-get size from v
4- point v.elements to nullptr
5-set v.size to 0
6-return a reference to this vector
*/
Vector& Vector::operator=(Vector&& v)
{
    cout<<"Move assignment delete memory "<<elements<<"\n";
    delete elements;

    elements = v.elements;
    cout<<"Move assignment steal memory "<<elements<<"\n";

    size = v.size;
    v.elements = nullptr;
    v.size = 0;

    return *this;
}

/*
1-Make sure new allocation is greater than capacity
2-create temp memory of size allocation
3-copy values from old memory to temp array
4-delete the old array
5-set elements to temp memory array
6-set capacity to new allocation size
*/
void Vector::Reserve(int new_size)
{
    if(new_size >= capacity)
    {
        return;
    }

    int* temp = new int[new_size];

    for(auto i=0; i < size; i++)
    {
       temp[i]  = elements[i];
    }

    delete[] elements;

    elements = temp;
    capacity = new_size;
}

/*
1-call reserve
2-initialize elements beyond size
3-set size to new size
*/
void Vector::Resize(int new_size)
{
    Reserve(new_size);

    for(auto i=size; i < new_size; i++)
    {
        elements[i] = 0;
    }

    size = new_size;

}

/*
1-if capacity is 0 call reserve with Reserve Default size
2-else if size is space call Reserve w space * reserve default multiplier
3-set value to current element at size(index)
4-increment the size
*/
void Vector::Push_Back(int value)
{
    if(capacity == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if(capacity == size)
    {
        Reserve(capacity * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] = value;
    size++;
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
