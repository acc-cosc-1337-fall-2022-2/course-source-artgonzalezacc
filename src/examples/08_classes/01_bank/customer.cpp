//customer.cpp
#include "customer.h"

using std::make_unique;

Customer::Customer(int id, std::string n)
: customer_id(id), name(n)
{
    accounts.push_back(make_unique<CheckingAccount>());
    accounts.push_back(make_unique<SavingsAccount>());
}