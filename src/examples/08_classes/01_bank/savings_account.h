//savings_account.h
#include "bank_account.h"
#include <iostream>

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(){}
    SavingsAccount(int b) : BankAccount(b){/*empty code block*/}

    int get_balance() const{std::cout<<"child\n"; return BankAccount::get_balance() + 10;}    
};

#endif