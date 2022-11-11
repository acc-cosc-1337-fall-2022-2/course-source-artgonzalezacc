#include "arrays_dyn_1.h"

using std::cout; using std::cin;
using std::shared_ptr;

void use_dynamic_char_array(const int size)
{
    char* name = new char[size];//dynamic memory on the heap/free store

    cout<<"Enter char: ";
    cin.getline(name, size);
    cout<<name<<"\n";

    delete[] name;
}

char* get_dynamic_char_array(const int size)
{
    char* char_ptr = new char[size];//create dynamic memory
    return char_ptr;
}

void limit_dynamic_char_array_scope(const int size)
{
    char* name = get_dynamic_char_array(size);//create memory
    cout<<"Enter name: ";
    cin.getline(name, size);
    cout<<name<<"\n";

    delete[] name;
}

char* get_dynamic_char_mem(const int size)
{
    char* char_ptr = new char[size];//create dynamic memory
    cout<<"Create memory "<<char_ptr<<"\n";
    return char_ptr;
}

void delete_dynamic_char_mem(char* array)
{
    cout<<"Delete memory "<<array<<"\n";
    delete[] array;
}

void limit_dynamic_char_mem_scope(const int size)
{
    shared_ptr<char[]> name(get_dynamic_char_mem(size), delete_dynamic_char_mem);//create
    cout<<"Enter name: ";
    cin.getline(name.get(), size);
    cout<<name<<"\n";

    cout<<"Exiting limit dynamic char mem function\n";
}
