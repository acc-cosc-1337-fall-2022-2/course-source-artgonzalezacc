#include <stdlib.h> //rand function
#include <iostream>

//bank_account.h
class BankAccount
{
public://other code(like main, Test cases, classes) can call public functions
    //they can be called from THIS class private or pubic functions
    //a class constructor
    BankAccount() {set_balance_from_db();}//default constructor
    BankAccount(int b) : balance(b){/*empty function block*/}
    int get_balance() const { return balance;}
    void deposit(int amount);
    void withdraw(int amount);

private://access specifier-only  THIS class private or public functions have access to
         //private variables or functions
    int balance{0};// BankAccount wants to protect its data(variables)
    void set_balance_from_db();
};

//FREE FUNCTIONS - THEY ARE NOT PART OF THE BANKACCOUNT CLASS!!!!!
void display_balance(const BankAccount& account);
BankAccount get_account();