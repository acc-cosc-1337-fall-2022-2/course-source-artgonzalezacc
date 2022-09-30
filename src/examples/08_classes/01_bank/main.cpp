#include "bank_account.h"
#include<time.h>

using std::cout;

int main()
{
	//truly generate a random every time the app runs
	srand(time(NULL));

	BankAccount account(500);
	display_balance(account);
	cout<<account.get_balance()<<"\n";

	BankAccount account1 = get_account();
	cout<<account1.get_balance()<<"\n";

	return 0;
}