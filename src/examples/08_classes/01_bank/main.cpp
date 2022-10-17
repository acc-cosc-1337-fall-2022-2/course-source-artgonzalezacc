#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<time.h>
#include <memory>

using std::cout; using std::cin;
using std::unique_ptr; using std::make_unique;

int main()
{
	//truly generate a random every time the app runs
  	srand(time(NULL));
	SavingsAccount account;
	account.get_balance();
	BankAccount* account_ptr = &account;
	cout<<"Balance: "<<account_ptr->get_balance()<<"\n";
	cout<<*account_ptr<<"\n";

	unique_ptr<BankAccount> account1 = make_unique<CheckingAccount>();
	cout<<"Balance: "<<account1->get_balance()<<"\n";
	cout<<*account1<<"\n";

	unique_ptr<BankAccount> account2 = make_unique<SavingsAccount>();
	cout<<"Balance: "<<account2->get_balance()<<"\n";
	cout<<*account2<<"\n";

	return 0;
}