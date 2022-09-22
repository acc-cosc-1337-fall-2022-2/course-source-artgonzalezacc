#include "for_ranged_str.h"

void loop_str_w_for_range(std::string& str)
{
    for(auto& ch: str)
    {
        ch = 'z';
    }
}