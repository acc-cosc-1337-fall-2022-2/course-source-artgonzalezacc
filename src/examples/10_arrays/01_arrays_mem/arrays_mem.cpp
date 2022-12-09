//write code for for stack_array and display each element to screen
#include "arrays_mem.h"

using std::cout; using std::string;

void use_stack_array()
{
    const auto SIZE = 3;
    int numbers[SIZE]{};
    numbers[0] = 3;
    numbers[1] = 10;

    for(auto i=0; i < SIZE; i++ )
    {
        cout<<numbers[i]<<"\n";
    }
}

void array_months()
{
    const auto MONTHS = 3;
    int month_numbers[MONTHS]{1, 2, 3};//initialize to 1, 2, 3
    string month_names[MONTHS]{"Jan", "Feb", "Mar"};

    for(auto i=0; i < MONTHS; i++)
    {
        cout<<month_numbers[i]<<" "<<month_names[i]<<"\n";
    }
}

void arrays_and_pointers()
{
    const auto SIZE = 3;//allocate 1 4 byte memory 
    int numbers[SIZE]{1,2,3};//allocate 3 continuous memory addresses
    cout<<numbers<<"\n";
    cout<<*numbers<<"\n";

    int* ptr = numbers;
    *ptr++;
    cout<<*ptr<<"\n";

    *ptr++;
    cout<<*ptr<<"\n";

}

void display_array(int* nums, const int SIZE)
{
    for(auto i=0; i < SIZE; i++)
    {
        cout<<nums[i]<<"\n";
    }
}