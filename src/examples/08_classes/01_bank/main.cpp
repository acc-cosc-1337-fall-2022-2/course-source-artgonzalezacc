#include "atm.h"
#include "customer.h"
#include<time.h>

using std::cout; using std::cin;
using std::vector;

int main()
{
	//truly generate a random every time the app runs
  	srand(time(NULL));

	vector<Customer> customers;
	customers.push_back(Customer(1, "John Doe"));
	customers.push_back(Customer(2, "Mary Doe"));
	customers.push_back(Customer(3, "John Hancock"));
	customers.push_back(Customer(4, "Mary Hancock"));

	ATM atm(customers);

	run_menu(atm);

	return 0;
}