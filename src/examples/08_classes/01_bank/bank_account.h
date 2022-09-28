//bank_account.h
class BankAccount
{
public://other code(like main, Test cases, classes) can call public functions
    //they can be called from THIS class private or pubic functions
    //a class constructor
    BankAccount(){}//default constructor
    BankAccount(int b) : balance(b){/*empty function block*/}
    int get_balance() const { return balance;}

private://access specifier-only  THIS class private or public functions have access to
         //private variables or functions
    int balance;// BankAccount wants to protect its data(variables)
};
