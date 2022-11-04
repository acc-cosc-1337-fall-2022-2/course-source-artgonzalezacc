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
	int something = 10;

	Shape* shape = new Circle(123, &something);
	
	shape->draw();
	delete shape;

	shape = new Line(321, &something);
	
	shape->draw();
	
	delete shape;

	//class shallow copy
	
	Circle circle1(111, &something);
	Circle circle2 = circle1;
	circle1.draw();
	circle2.draw();

	return 0;
}