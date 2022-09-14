#include<iostream>

using std::cout;

int main()
{
    int num = 10;
    int& num_ref = num;//this means get the memory address where num is stored
    cout<<"Display the value stored in num via num_ref: "<<num_ref<<"\n";
    
    cout<<"Change num value via num_ref: \n";
    
    num_ref = 20;
    cout<<"Display the value stored in num via num_ref: "<<num_ref<<"\n";
    cout<<"Display the value of num: "<<num<<"\n";
    cout<<"Display the address of num: "<<&num<<"\n";
    cout<<"Display the address of num_ref: "<<&num_ref<<"\n";

    return 0;
}