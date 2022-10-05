//bank_account.cpp
#include "bank_account.h"

using std::cout;

void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
        bank_balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount < balance)
    {
        balance -= amount;
        bank_balance -= amount;
    }
}

//private class functions/methods
void BankAccount::set_balance_from_db()
{
    balance = rand() % 10000 + 1;//value between 1 and 10000
}

//Initialize static bank balance
int BankAccount::bank_balance = 100000;

//Friend functions
void show_balance(const BankAccount& account)
{
    cout<<"Friend function: "<<account.balance<<"\n";
}

//Friend operator overload
std::ostream& operator<<(std::ostream& out, const BankAccount& account)
{
    out<<"Operator overload: "<<account.balance<<"\n";

    return out;
}

std::istream& operator>>(std::istream& in, BankAccount& account)
{
    auto amount = 0;
    cout<<"Enter amount: ";
    in>>amount;
    
    account.deposit(amount);

    return in;
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

