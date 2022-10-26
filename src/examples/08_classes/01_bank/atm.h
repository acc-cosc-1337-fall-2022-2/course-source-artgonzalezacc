//atm.h
#include "bank_account.h"
#include "customer.h"
#include<iostream>
#include<stdlib.h>//rand numbers
#include<vector>

#ifndef ATM_H
#define ATM_H

enum class MENU_CHOICE{DEPOSIT=1, WITHDRAW=2, DISPLAY=3, EXIT=4};

class ATM
{
public:
    ATM(std::vector<Customer>& c) : customers(c){/*empty code blocl*/}
    void display_balance();
    void make_deposit();
    void make_withdraw();
    void scan_card();

private:
    std::vector<Customer>& customers;
    int customer_index{0};
    int account_index{0};
};

#endif

//Free functions not part of the ATM Class!!!!!!!!!!!!
void run_menu(ATM& atm);
void display_menu();
void handle_transaction(ATM& atm, int choice);