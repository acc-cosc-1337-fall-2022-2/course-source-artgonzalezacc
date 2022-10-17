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
	Shape* shape = new Circle();
	Shape* shape1 = new Line();	

	vector<Shape*> shapes{shape, shape1};

	for(auto shape: shapes)
	{
		shape->draw();
	}

	delete shapes[0];
	delete shapes[1];


	return 0;
}