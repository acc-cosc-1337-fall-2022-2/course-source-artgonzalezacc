#include "search_alg.h"
#include <iostream>
#include <chrono>
#include <thread>

int main ()
{	

  const int SIZE = 2000000000;
  int* list = new int[SIZE];
  populate_array(list, SIZE, false);

  //std::cout<<"function executing...: \n";
  auto t1 = std::chrono::high_resolution_clock::now();

  //100000,250000,500000,1000000
  //linear_search(list, SIZE, -5);
  //10000,100000,200000
  binary_search(list, SIZE, -5);
  //10000,100000,200000
  //bubble_sort(list, SIZE);
  auto t2 = std::chrono::high_resolution_clock::now();
  //std::cout<<"function done: \n";
  std::chrono::duration<double, std::milli> fp_ms = t2 - t1;
  std::cout<<"Milliseconds: "<<fp_ms.count()<<"\n";

  delete[] list;

  return 0;
} 	