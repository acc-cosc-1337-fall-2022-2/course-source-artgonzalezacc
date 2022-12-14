#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify vector element value via []")
{
	Vector<int> v(3);
	v[0] = 5;

	REQUIRE(v[0] == 5);
}

TEST_CASE("Test vector get size")
{
	Vector<double> v(3);

	REQUIRE(v.Size() == 3);
}

TEST_CASE("Test create vector from existing vector class-no copy constructor")
{
	Vector<int> v(3);
	v[0] = 5;
	v[1] = 10;
	v[2] = 3;
	Vector<int> v1 = v;
	
	REQUIRE(v[0] == v1[0]);
	v[0] = 8;

	REQUIRE(v[0] != v1[0]);

}

TEST_CASE("Test create 2 vectors v and v1 overwrite v1 with v")
{
	Vector<double> v(3);
	Vector<double> v1(3);
	v1 = v;
}

TEST_CASE("Test overwrite vector with a vector return function")
{
	Vector<char> v1(3);
	Vector<char> v2 = std::move(v1);
}

TEST_CASE("Test overwrite v with a value return from get vector")
{
	Vector<int> v(3);
	v = get_vector();
}

TEST_CASE("Test vector capacity")
{
	Vector<int> v(3);

	REQUIRE(v.Capacity() == 3);
}

TEST_CASE("Test vector pushback")
{
	Vector<int> v(3);
	REQUIRE(v.Size() == 3);
	REQUIRE(v.Capacity() == 3);

	v.Push_Back(5);
	REQUIRE(v.Size() == 4);
	REQUIRE(v.Capacity() == 6);

	REQUIRE(v[3] == 5);
}

TEST_CASE("Test vector pushback w default constructor")
{
	Vector<int> v;
	REQUIRE(v.Size() == 0);
	REQUIRE(v.Capacity() == 0);

	v.Push_Back(5);
	REQUIRE(v.Size() == 1);
	REQUIRE(v.Capacity() == 8);
	REQUIRE(v[0] == 5);
}