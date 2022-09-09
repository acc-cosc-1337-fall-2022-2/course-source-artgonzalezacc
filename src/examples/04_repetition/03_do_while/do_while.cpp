#include "do_while.h"

using std::cout;
using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    auto choice = 'n';

    do
    {
        ///other code 
        
        cout<<"Continue, enter y?";
        cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');

}


void run_menu()
{
    auto option = 0;

    do
    {
        cout<<"1-Accounts Receivables\n";
        cout<<"2-Accounts Payable\n";
        cout<<"3-Payroll\n";
        cout<<"4-Exit\n";
        cin>>option;
    }
    while(option != 4);
}


