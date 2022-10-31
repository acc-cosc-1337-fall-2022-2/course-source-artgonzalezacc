#include "arr_functions.h"


int main() 
{
	int times_table[ROWS][COLS];

	populate_times_table(times_table, ROWS);
	display_times_table(times_table, ROWS);

	return 0;
}