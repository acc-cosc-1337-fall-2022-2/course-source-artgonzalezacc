#include "while.h"

using std::cout;

bool num_in_range_1_10(int num)//use &&(AND)
{
    return num >= 1 && num <= 10;
}

bool is_letter_cons(char letter)
{
    return (!(letter == 'a' || letter == 'e' || letter == 'i' ||
              letter == 'o' || letter == 'u'));
}



//Using a while loop write code for sum_of_squares function that accepts an int and returns  
//the sum of all the squares of that number from 1 to the number. 
//Example: sum_of_squares(4) 
//1*1 + 2 * 2 + 3*3 + 4*4 = 30
int sum_of_squares(int num)
{
    auto sum = 0;

    while(num > 0)
    {
        sum += num * num;
        num--;//unary decrement operator 
    }

    return sum;
}


//Using a while loop write code for display function that accepts a string and displays 
//each character of the string in a line
//Example: display("Hello")
/*
result:

H
e
l
l
0

*/
void display(std::string str)
{
    auto index = 0;

    while(index < str.size())
    {
        cout<<str[index]<<"\n";
        index++;//the same as index = index + 1 AND index +=1
    }
}

