#include "arrays_mem.h"

int main() 
{
	//use_stack_array();
	//array_months();
	//arrays_and_pointers();

	const auto SIZE = 3;//allocate 1 4 byte memory 
    int numbers[SIZE]{1,2,3};//allocate 3 continuous memory addresses
	display_array(numbers, SIZE);

	return 0;

}