#include<iostream>

using std::cout;

int main()
{
    auto num = 5;
    auto dec = 5.5;
    auto letter = 'a';

    cout<<sizeof(num)<<"\n";
    cout<<sizeof(dec)<<"\n";
    cout<<sizeof(letter)<<"\n";

    return 0;
}