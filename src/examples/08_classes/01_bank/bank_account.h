#include <stdlib.h> //rand function
#include <iostream>
//header guard
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

//bank_account.h
class BankAccount
{
friend void show_balance(const BankAccount& account);
friend std::ostream& operator<<(std::ostream& out, const BankAccount& account);
friend std::istream& operator>>(std::istream& in, BankAccount& account);

public://other code(like main, Test cases, classes) can call public functions
    //they can be called from THIS class private or pubic functions
    //a class constructor
    //BankAccount() = default; create the default constructor that does nothing
    BankAccount() {set_balance_from_db();}//default constructor
    explicit BankAccount(int b) : balance(b){/*empty function block*/}
    virtual int get_balance() const = 0;//pure virtual function
    virtual void deposit(int amount) final;
    virtual void withdraw(int amount) final;
    static int get_bank_balance(){return bank_balance;}

private://access specifier-only  THIS class private or public functions have access to
         //private variables or functions
    int balance{0};// BankAccount wants to protect its data(variables)
    static int bank_balance;
    void set_balance_from_db();
};

#endif

//FREE FUNCTIONS - THEY ARE NOT PART OF THE BANKACCOUNT CLASS!!!!!
void display_balance(const BankAccount& account);
//BankAccount get_account();