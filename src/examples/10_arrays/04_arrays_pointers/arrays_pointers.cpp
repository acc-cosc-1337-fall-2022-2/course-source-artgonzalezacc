//cpp
#include "arrays_pointers.h"

using std::cout; using std::shared_ptr;

void use_dynamic_memory(const int num)
{
    //create memory
    int* numbers = new int[num];//created a list on the heap
    //use memory
    numbers[0] = 5;
    numbers[1] = 10;
    numbers[2] = 15;

    cout<<numbers[0]<<"\n";
    cout<<numbers[1]<<"\n";
    cout<<numbers[2]<<"\n";

    //delete memory
    delete[] numbers;
}

void limit_dynamic_memory_scope(const int num)
{
    int* nums = get_dynamic_memory(num);
    nums[0] = 5;
    cout<<nums[0]<<"\n";
    cout<<"Delete memory\n";
    delete[] nums;
}

int* get_dynamic_memory(const int num)
{
    int* nums = new int[num];
    cout<<"Create memory at address: "<<nums<<"\n";
    return nums;
}

void delete_dynamic_memory(int* array)
{
    cout<<"Delete memory at address: "<<array<<"\n";
    delete[] array;
}

void limit_dynamic_memory_scope_w_smart_ptr(const int num)
{
    //create memory
    shared_ptr<int[]> nums(get_dynamic_memory(num), delete_dynamic_memory);

    //use memory
    nums[0] = 5;
    nums[1] = 10;
    nums[2] = 2;

    //use memory
    cout<<nums[0]<<"\n";
    //more lines of codes for function calls 

    //delete memory
    cout<<"Exiting use dynamic memory scope function\n";
}
