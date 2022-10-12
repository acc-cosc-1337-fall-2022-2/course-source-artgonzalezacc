//checking_account.h
#include "bank_account.h"

class CheckingAccount : public BankAccount
{
public:
    CheckingAccount(){}
    CheckingAccount(int b) : BankAccount(b){/*empty code block*/}
};