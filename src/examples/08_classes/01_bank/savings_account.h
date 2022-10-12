//savings_account.h
#include "bank_account.h"

class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(){}
    SavingsAccount(int b) : BankAccount(b){/*empty code block*/}

    int get_balance() const{return BankAccount::get_balance() + 10;}    
};