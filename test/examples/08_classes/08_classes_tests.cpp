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

	//REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test bank account get balance with constructor param")
{
	//assuming bankacountdb existed and we retrieved balance from there

	BankAccount account(100);//create an instance/variable of the BankAccount class

	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test bank account deposit function")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.deposit(50);
	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test bank account withdraw function")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 50);
}

TEST_CASE("Test bank account deposit and withdraw functions")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.deposit(50);
	REQUIRE(account.get_balance() == 150);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test bank account deposit negative amount")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.deposit(-50);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test bank account withdraw negative amount")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(-50);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test bank account withdraw more than balance")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(101);
	REQUIRE(account.get_balance() == 100);
}