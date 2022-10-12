#include <iostream>

using std::cout;

int main() 
{
	int num = 10;
	int* num_ptr = &num;//get address of num store it in num_ptr

	cout<<"Display num value via num: "<<num<<"\n";
	cout<<"Display num value via num_ptr: "<<*num_ptr<<"\n";//get the value that num_ptr points to 
	cout<<"Display address of num: "<<&num<<"\n";
	cout<<"Display address that num_ptr points to: "<<num_ptr<<"\n";
	cout<<"Display address where num_ptr is stored: "<<&num_ptr<<"\n";

	int num1 = 20;
	num_ptr = &num1;
	cout<<"Display num1 value via num_ptr: "<<*num_ptr<<"\n";//get the value that num_ptr points to 
	
	return 0;
}