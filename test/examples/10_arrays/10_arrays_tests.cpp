#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "arrays_access.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test array list size")
{
	const int SIZE = 5;
    int mylist[SIZE];
    ArrayList list(mylist, SIZE);

	REQUIRE(list.Size() == 0);
}

TEST_CASE("Test array list capacity")
{
	const int SIZE = 5;
    int mylist[SIZE];
    ArrayList list(mylist, SIZE);

	REQUIRE(list.Capacity() == SIZE);
}


TEST_CASE("Test array list size w one value")
{
	const int SIZE = 5;
    int mylist[SIZE];
    ArrayList list(mylist, SIZE);
	list.Add(5);

	REQUIRE(list.Size() == 1);
	REQUIRE(list.Get_Value_at_Index(0) == 5);

	list.Add(10);
	REQUIRE(list.Get_Value_at_Index(1) == 10);
}

TEST_CASE("Test array list get first index of")
{
	const int SIZE = 5;
    int mylist[SIZE];
    ArrayList list(mylist, SIZE);
	list.Add(5);
	list.Add(10);

	REQUIRE(list.Get_First_Index_Of(10) == 1);
}


