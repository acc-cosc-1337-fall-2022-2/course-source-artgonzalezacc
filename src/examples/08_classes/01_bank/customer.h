//customer.h
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include <memory>
#include <string>
#include <vector>

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
public:
    Customer(int id, std::string n);
    std::unique_ptr<BankAccount>& get_account(int index){return accounts[index];}

private:
    int customer_id;
    std::string name;
    std::vector<std::unique_ptr<BankAccount>> accounts;
};

#endif