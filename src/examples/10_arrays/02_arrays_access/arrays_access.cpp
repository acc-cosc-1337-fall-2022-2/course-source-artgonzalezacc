//cpp
#include "arrays_access.h"

void ArrayList::Add(int value)
{
    if(current_index < size)
    {
        elements[current_index] = value;
        current_index++;
    }
}

int ArrayList::Get_First_Index_Of(int value)
{
    auto index = -1;
    auto count = 0;
    
    while(count < current_index)
    {
        if(value == elements[count])
        {
            index = count;
            break;
        }
        count++;
    }

    return index;
}

void ArrayList::Delete(int value)
{
    auto index = Get_First_Index_Of(value);

    if(index != -1)
    {
        Adjust_Elements(index);
    }

}

void ArrayList::Adjust_Elements(int index)
{

}