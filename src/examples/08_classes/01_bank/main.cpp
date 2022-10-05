#include "bank_account.h"
#include<time.h>

using std::cout; 
using std::cin;

int main()
{
	//truly generate a random every time the app runs
	srand(time(NULL));
	BankAccount account3(100);
	cout<<account3;

	BankAccount account(500);
	BankAccount account2 = account;
	cout<<"size of "<<sizeof(account)<<"\n";
	cout<<account;
	cout<<"size of "<<sizeof(account2)<<"\n";
	cout<<account2;

//	cin>>account;
	display_balance(account);
	cout<<account.get_balance()<<"\n";

	BankAccount account1 = get_account();
	cout<<account1.get_balance()<<"\n";

	show_balance(account1);

	return 0;
}