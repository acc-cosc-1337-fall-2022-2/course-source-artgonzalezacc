#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank account get balance with no constructor param")
{
	//assuming bankacountdb existed and we retrieved balance from there

	BankAccount account;//create an instance/variable of the BankAccount class

	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test bank account get balance with constructor param")
{
	//assuming bankacountdb existed and we retrieved balance from there

	BankAccount account(100);//create an instance/variable of the BankAccount class

	REQUIRE(account.get_balance() == 100);
}