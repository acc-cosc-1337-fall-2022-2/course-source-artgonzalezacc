#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "recursion.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test iterative recursion")
{
	REQUIRE(iterative_recursion(5) == 120);
}

TEST_CASE("Test recursive factorial")
{
	REQUIRE(recursive_factorial(5) == 120);
}