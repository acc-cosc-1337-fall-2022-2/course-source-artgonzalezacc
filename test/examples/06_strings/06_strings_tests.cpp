#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_str.h"
#include "for_ranged_str.h"

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test string reference param")
{
	string name = "C++";
	loop_ref_str_w(name);

	REQUIRE(name == "python");
}

TEST_CASE("Test string reference param w for ranged")
{
	string name = "C++";
	loop_str_w_for_range(name);
	REQUIRE(name == "zzz");
}