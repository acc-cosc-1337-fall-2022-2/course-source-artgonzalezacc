#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test number in 1 to 10 range using AND")
{
	REQUIRE(num_in_range_1_10(0) == false);
	REQUIRE(num_in_range_1_10(1) == true);
	REQUIRE(num_in_range_1_10(5) == true);
	REQUIRE(num_in_range_1_10(10) == true);
	REQUIRE(num_in_range_1_10(11) == false);
}

TEST_CASE("Test is letter not a vowel")
{
	REQUIRE(is_letter_cons('a') == false);
	REQUIRE(is_letter_cons('b') == true);
	REQUIRE(is_letter_cons('i') == false);
	REQUIRE(is_letter_cons('z') == true);
}

TEST_CASE("Test sum of squares function")
{
	REQUIRE(sum_of_squares(3) == 14);
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}
