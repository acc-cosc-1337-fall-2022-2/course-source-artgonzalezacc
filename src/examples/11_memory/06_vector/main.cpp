//
#include "my_vector.h"
#include<string>

using std::cout;
using std::string;

template<typename T>
T add(T value1, T value2)
{
    return value1 + value2;
}
int main()
{
    string v1 = "C++ ";
    string v2 = "rocks";
    cout<<add(5, 5)<<"\n";
    cout<<add(6.4, 3.5)<<"\n";
    cout<<add(v1, v2)<<"\n";

    
    //Vector v<int>(3);
    
    return 0;
}

