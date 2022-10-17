#include <iostream>
#include <memory>

using std::cout;
using std::unique_ptr;
using std::make_unique;

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

	//create memory
	int* num_ptr1 = new int(5);//create dynamic memory on the heap
	//use memory
	cout<<*num_ptr<<"\n";
	//delete memory
	delete num_ptr1;
	num_ptr1 = nullptr;//don't point/reference to anything

	//Smart pointer
	unique_ptr<int> nums = make_unique<int>(10);
	cout<<"Unique pointer: "<<*nums<<"\n";
	//no need to call delete; 
	
	return 0;
}