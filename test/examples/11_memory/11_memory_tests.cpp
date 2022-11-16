#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*
TEST_CASE("Verify vector element value via []")
{
	Vector v(3);
	v[0] = 5;

	REQUIRE(v[0] == 5);
}

TEST_CASE("Test vector get size")
{
	Vector v(3);

	REQUIRE(v.Size() == 3);
}

TEST_CASE("Test create vector from existing vector class-no copy constructor")
{
	Vector v(3);
	v[0] = 5;
	v[1] = 10;
	v[2] = 3;
	Vector v1 = v;
	
	REQUIRE(v[0] == v1[0]);
	v[0] = 8;

	REQUIRE(v[0] != v1[0]);

}

TEST_CASE("Test create 2 vectors v and v1 overwrite v1 with v")
{
	Vector v(3);
	Vector v1(3);
	v1 = v;
}
*/

TEST_CASE("Test overwrite vector with a vector return function")
{
	Vector v1(3);
	Vector v2 = std::move(v1);
}
