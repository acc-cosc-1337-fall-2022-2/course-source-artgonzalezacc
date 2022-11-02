//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

using std::vector; using std::cout;

int main() 
{
	const auto SIZE = 3;

	Circle circles[SIZE];

	circles[0].draw();
	circles[1].draw();
	circles[2].draw();

	Line lines[SIZE];
	lines[0].draw();

	Shape* shape = circles;
	shape->draw();
	
	return 0;
}