//cpp
#include "arrays_pointers.h"

using std::cout;

void use_dynamic_memory(const int num)
{
    //create memory
    int* numbers = new int(num);//created a list on the heap
    //use memory
    numbers[0] = 5;
    numbers[1] = 10;
    numbers[2] = 15;

    cout<<numbers[0]<<"\n";
    cout<<numbers[1]<<"\n";
    cout<<numbers[2]<<"\n";

    //delete memory
    delete numbers;
}

void limit_dynamic_memory_scope(const int num)
{
    int* nums = get_dynamic_memory(num);
    nums[0] = 5;
    cout<<nums[0]<<"\n";
    cout<<"Delete memory\n";
    delete nums;
}

int* get_dynamic_memory(const int num)
{
    cout<<"Create memory\n";
    return new int(num);
}

void delete_dynamic_memory(int* array)
{

}
