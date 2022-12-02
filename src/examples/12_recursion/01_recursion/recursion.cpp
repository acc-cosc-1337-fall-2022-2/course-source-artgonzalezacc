#include "recursion.h"

using std::cout;

void iterative_hello()
{
    while(true)
    {
        cout<<"hello\n";
    }
}

//Write code for recursive display function
void recursive_hello_crash_stack()
{
    cout<<"hello\n";
    recursive_hello_crash_stack();
}

void recursive_hello(int num)
{
    if(num == 0)
    {
        cout<<"base case\n";
        return;
    }

    cout<<"load stack\n";
    recursive_hello(num-1);
    cout<<"unload stack\n";
}


//Write code for recursive factorial
/*
1*2*3*4*5=120
*/
int iterative_recursion(int num)
{
    auto factorial = 1;

    for(auto i=num; i > 0; i--)
    {
        factorial *= i;
    }

    return factorial;
}

int recursive_factorial(int num)
{
    int f;//tracks num * r
    int r;//track the return value of recursive_factorial function
    
    if(num == 0)
    {
        cout<<"base case\n";
        return 1;
    }

    cout<<"load stack "<<num-1<<"\n";
    r = recursive_factorial(num-1);
    f = num * r;
    cout<<"unload stack n: "<<num<<" r: "<<r<<" f: "<<f<<"\n";

    return f;
}

