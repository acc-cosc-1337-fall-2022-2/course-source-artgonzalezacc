#include "search_alg.h"

using std::cout; using std::endl;


void populate_array(int* list, int size, bool randomize) 
{
	srand(time(NULL));

	if (randomize) {
		for (int i = 0; i < size; i++)
		{
			list[i] = rand() % 10000 + 1;
		}
	}
	else 
	{
		for (int i = 0; i < size; i++)
		{
			list[i] = i;
		}
	}
}

/*
O(1) is a adding a new item to an array
Order of 1
NO EXAMPLE
*/

/*
O(n)-grows in direct propoportion to the amount of data
Order of n
PARAM VALUES 300k and 500k
*/
int linear_search(const int list[], int size, int search_value) 
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found) 
	{
		if (list[index] == search_value)
		{
			found = true;
			position = index;
		}

		index++;
	}

	return position;
}

/*
O(log n) occurs when data being used decreases by approximately 50%
Order of log n
Because log n grows much slower than n, a huge increase in the size of the problem
results in only a small increase in the running time of the algorithm. 
This complexity is characteristic of search problems that eliminate half of the search
 space with each basic operation
Data must be sorted param values 1000,  20k and 200k
*/
int binary_search(const int list[], int size, int search_value) 
{
	int first = 0,
		last = size - 1,
		middle,
		position = -1;
	bool found = false;

	while (!found && first <= last) 
	{
		middle = (first + last) / 2;

		if (list[middle] == search_value)
		{
			found = true;
			position = middle;
		}
		else if (list[middle] > search_value)
			last = middle - 1;
		else
			first = middle + 1;
	}

	return position;
}

/*
O(n^2) - time to complete is proportional to square of the amount of data
Order of n squared
This performance is characteristic of algorithms that make multiple passes over
the input data using two nested loops. An increase in the size of the problem 
causes a much greater increase in the running time of the algorithm.
PARAM values 50k and 100k
*/
void bubble_sort(int list[], int size)
{
	int temp;
	bool swapped;

	do
	{
		swapped = false;

		for (int i = 0; i < (size - 1); i++)
		{
			if (list[i] > list[i + 1])
			{
				temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
				swapped = true;
			}
		}

	} while (swapped);
}

