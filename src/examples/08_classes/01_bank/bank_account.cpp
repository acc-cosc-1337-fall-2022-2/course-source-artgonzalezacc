//bank_account.cpp
#include "bank_account.h"

using std::cout;

void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount < balance)
    {
        balance -= amount;
    }
}

//private class functions/methods
void BankAccount::set_balance_from_db()
{
    balance = rand() % 10000 + 1;//value between 1 and 10000
}

//FREE FUNCTIONS - THEY ARE NOT PART OF THE BANKACCOUNT CLASS!!!!!
void display_balance(const BankAccount& account)
{
    cout<<"display_function: "<<account.get_balance()<<"\n";
}

BankAccount get_account()
{
    BankAccount account;
    return account;    
}