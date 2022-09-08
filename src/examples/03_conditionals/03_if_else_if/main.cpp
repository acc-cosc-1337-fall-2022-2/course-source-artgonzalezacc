//write include statements
#include "if_else_if.h"
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;
using std::string;
/*
Write code to capture year from keyboard.
Pass the year to get_generation function and display function result.
*/
int main() 
{

	auto year = 0;
	cout<<"Enter a year: ";
	cin>>year;

	auto result = get_generation(year);
	cout<<"Generation is "<<result<<"\n";
	
	
	return 0;
}