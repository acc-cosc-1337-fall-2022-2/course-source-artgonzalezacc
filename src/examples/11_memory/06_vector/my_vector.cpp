#include "my_vector.h"

using std::cout;
template<typename T>
Vector<T>::Vector()
: size{0}, capacity{0}, elements{nullptr}
{
//empty code block
}
//
template<typename T>
Vector<T>::Vector(int size)
: elements{new T[size]}
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
template<typename T>
Vector<T>::Vector(const Vector<T>& v)
: size{v.size}, elements{new T[v.size]}
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
template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v)
{
    T* temp = new T[v.size];

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
template<typename T>
Vector<T>::Vector(Vector<T>&& v)
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
template<typename T>
Vector<T>& Vector<T>::operator=(Vector<T>&& v)
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
template<typename T>
void Vector<T>::Reserve(int new_size)
{
    if(new_size < capacity)
    {
        return;
    }

    T* temp = new T[new_size];
    cout<<"Reserve create memory "<<temp<<"\n";

    for(auto i=0; i < size; i++)
    {
       temp[i]  = elements[i];
    }

    cout<<"Delete memory "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    capacity = new_size;
}

/*
1-call reserve
2-initialize elements beyond size
3-set size to new size
*/
template<typename T>
void Vector<T>::Resize(int new_size)
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
template<typename T>
void Vector<T>::Push_Back(T value)
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

template<typename T>
Vector<T>::~Vector()
{
    cout<<"Delete memory: "<<elements<<"\n";
    delete[] elements;
}

//tell C++ what data type this template supports
template class Vector<int>;
template class Vector<double>;
template class Vector<char>;

//free function; not part of the class
Vector<int> get_vector()
{
    Vector<int> v(3);
    return v;
}
