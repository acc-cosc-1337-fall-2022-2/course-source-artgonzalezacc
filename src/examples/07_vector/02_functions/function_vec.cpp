#include "function_vec.h"

void vector_val_param(std::vector<int> nums)
{
    for(auto i=0; i < nums.size(); i++)
    {
        nums[i] = -1;
    }
}

void vector_ref_param(std::vector<int>& nums)
{
    for(auto i=0; i < nums.size(); i++)
    {
        nums[i] = -1;
    }
}