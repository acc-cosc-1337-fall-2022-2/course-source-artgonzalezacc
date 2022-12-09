//atm.cpp
#include "atm.h"

using std::cout; using std::cin;

void ATM::display_balance()
{
    auto& customer = customers[customer_index];
    auto& account = customer.get_account(account_index);

    cout<<"Your balance is: "<<account->get_balance()<<"\n";
}

void ATM::make_deposit()
{
    auto& customer = customers[customer_index];
    auto& account = customer.get_account(account_index);

    auto amount = 0;
    cout<<"Enter amount to deposit: ";
    cin>>amount;
    account->deposit(amount);

}

void ATM::make_withdraw()
{
    auto& customer = customers[customer_index];
    auto& account = customer.get_account(account_index);

    auto amount = 0;
    cout<<"Enter amount to withdraw: ";
    cin>>amount;
    account->withdraw(amount);
}

void ATM::scan_card()
{
    customer_index = rand() % customers.size();
    cout<<"Enter 1 for checking 2 for savings: ";
    cin>>account_index;
    account_index--;
}

//Free function not part of the ATM class !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void run_menu(ATM& atm)
{
    auto choice = 'y';
    auto confirm = 'y';
    auto menu_choice = 0;

    do
    {
        atm.scan_card();//chooses a random customer 

        do
        {
            display_menu();
            cin>>menu_choice;
            //call ATM class functions here
            handle_transaction(atm, menu_choice);

            cout<<"Continue???";
            cin>>choice;

        }while(choice == 'y' || choice == 'Y');

        cout<<"Confirm exit??";
        cin>>confirm;

    }while(confirm == 'y' || confirm == 'Y');

}

void display_menu()
{
    cout<<"\nACC COSC Bank\n";
    cout<<"1)Make Deposit\n";
    cout<<"2)Make Withdraw\n";
    cout<<"3)Display Balance\n";
    cout<<"4)Exit\n\n";
    cout<<"Enter your choice: ";
}

void handle_transaction(ATM& atm, int choice)
{
    switch(static_cast<MENU_CHOICE>(choice))
    {
    case MENU_CHOICE::DEPOSIT:
        atm.make_deposit();
        break;
    case MENU_CHOICE::WITHDRAW:
        atm.make_withdraw();
        break;
    case MENU_CHOICE::DISPLAY:
        atm.display_balance();
        break;
    case MENU_CHOICE::EXIT:
        cout<<"Exiting...\n";
        break;
    default:
        cout<<"Invalid choice";
    }
}