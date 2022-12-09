#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	auto overtime = is_overtime(40);

	cout<<"Overtime variable is "<<overtime<<"\n";

	return 0;
}
