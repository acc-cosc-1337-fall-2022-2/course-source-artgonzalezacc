#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank account get balance with no constructor param")
{
	//assuming bankacountdb existed and we retrieved balance from there

	CheckingAccount account;//create an instance/variable of the BankAccount class

	//REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test bank account get balance with constructor param")
{
	//assuming bankacountdb existed and we retrieved balance from there

	CheckingAccount account(100);//create an instance/variable of the BankAccount class

	REQUIRE(account.get_balance() == 100);
	REQUIRE(account.get_bank_balance() == 100000);
}

TEST_CASE("Test bank account deposit function")
{
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.deposit(50);
	REQUIRE(account.get_balance() == 150);
	REQUIRE(account.get_bank_balance() == 100050);
}

TEST_CASE("Test bank account withdraw function")
{
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 50);
	REQUIRE(account.get_bank_balance() == 100000);
}

TEST_CASE("Test bank account deposit and withdraw functions")
{
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.deposit(50);
	REQUIRE(account.get_balance() == 150);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 100);
	REQUIRE(account.get_bank_balance() == 100000);
}

TEST_CASE("Test bank account deposit negative amount")
{
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.deposit(-50);
	REQUIRE(account.get_balance() == 100);
	REQUIRE(account.get_bank_balance() == 100000);
}

TEST_CASE("Test bank account withdraw negative amount")
{
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(-50);
	REQUIRE(account.get_balance() == 100);
	REQUIRE(account.get_bank_balance() == 100000);
}

TEST_CASE("Test bank account withdraw more than balance")
{
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(101);
	REQUIRE(account.get_balance() == 100);
	REQUIRE(account.get_bank_balance() == 100000);
}

TEST_CASE("Test savings account get balance function override")
{
	SavingsAccount account(100);

	REQUIRE(account.get_balance() == 110);
}