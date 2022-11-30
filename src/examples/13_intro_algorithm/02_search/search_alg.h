#include <ctime>
#include <cstdlib>
#include <chrono>
#include <iostream>

void populate_array(int list[], int size, bool randomize);

int linear_search(const int list[], int size, int search_value);

int binary_search(const int list[], int size, int search_value);

void bubble_sort(int list[], int size);