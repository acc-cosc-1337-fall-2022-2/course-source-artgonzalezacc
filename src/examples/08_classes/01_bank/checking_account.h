//checking_account.h
#include "bank_account.h"
#include<iostream>

class CheckingAccount : public BankAccount
{
public:
    CheckingAccount(){}
    CheckingAccount(int b) : BankAccount(b){/*empty code block*/}
    int get_balance() const override {return BankAccount::get_balance();}
};