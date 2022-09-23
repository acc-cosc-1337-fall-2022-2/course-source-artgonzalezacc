#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_vec.h"
#include "for_ranged_vec.h"

using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test vector val and ref params")
{
	vector<int> num1{1,1,1};
	vector<int> num2{2,2,2};

	vector<int> expected_num1{1,1,1};
	vector<int> expected_num2{-1,-1,-1};

	vector_val_param(num1);
	vector_ref_param(num2);

	REQUIRE(num1 == expected_num1);
	REQUIRE(num2 == expected_num2);

}

TEST_CASE("Test ref function arg w for ranged by val and ref")
{
	vector<int> num1{1,1,1};
	vector<int> expected_num1{-1,-1,-1};

	for_ranged_vector_ref(num1);
	REQUIRE(num1 == expected_num1);
}