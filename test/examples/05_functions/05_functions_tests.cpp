#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "void.h"
#include "val_ref.h"
#include "static.h"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test function value/copy parameters don't change var values")
{
	int num = 10;
	int result = echo_variable(num);

	REQUIRE(num == 10);
	REQUIRE(result == 20);
}

TEST_CASE("Test function referece parameters ????? var values")
{
	int num = 10;
	int num1 = 15;
	val_ref_params(num, num1);

	REQUIRE(num == 10);
	REQUIRE(num1 == 30);
}

TEST_CASE("Test non static var function")
{
	auto result = non_static_var();
	REQUIRE(result == 6);

	result = non_static_var();
	REQUIRE(result == 6);
}

TEST_CASE("Test static var function")
{
	auto result = static_var();
	REQUIRE(result == 6);

	result = static_var();
	REQUIRE(result == 7);
	
}

TEST_CASE("Test get weekly pay function overloads")
{
	REQUIRE(get_weekly_pay(52000) == 1000);
	REQUIRE(get_weekly_pay(40, 10) == 400);
}

TEST_CASE("Test default parameter get total")
{   //double get_total(double amount, double rate=1);
	REQUIRE(get_total(10) == 10);
	REQUIRE(get_total(10, 2) == 20);

	//double get_total(double amount, int num, double rate=1);
	REQUIRE(get_total(10, 1) == 10);
	REQUIRE(get_total(10, 1, 2) == 20);
}