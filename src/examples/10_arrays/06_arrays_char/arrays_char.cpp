//cpp
#include "arrays_char.h"

using std::cout; using std::cin;
using std::string;

void use_char_null_terminated()
{
    const auto SIZE = 11;
    char name[SIZE];//create char array on stack
    /*
    name[0] = 'c';
    name[1] = '+';
    name[2] = '+';
    name[3] = '\0';//null terminator
    */
    cout<<"Enter char: ";
    cin.getline(name, SIZE);
    cout<<name<<"\n";

    int i = 0;

    while(name[i] != '\0')
    {
        cout<<name[i]<<"\n";
        i++;
    }
}

void use_char_not_null_terminated()
{
    const auto SIZE = 11;
    char name[SIZE]{'C', '+', '+', ' ', 'g', 'r', 'e', 'a', 't'};//create char array on stack
    
    cout<<name<<"\n";

    auto i = 0;
    while(name[i] != '\0')
    {
        cout<<name[i]<<"\n";
        i++;
    }
}

void use_string_terminated()
{
    string name = "C++ great";
    cout<<name<<"\n\n";
    name = "C++\0great";
    cout<<name<<"\n\n";
}