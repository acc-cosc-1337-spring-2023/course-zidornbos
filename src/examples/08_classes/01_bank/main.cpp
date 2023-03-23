#include<iostream>
#include<time.h>
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"

using std::cout; using std::cin; using std::vector;
using std::unique_ptr; using std::make_unique;


int main()
{
	srand(time(NULL));
	vector<unique_ptr<BankAccount>> accounts;
	unique_ptr<BankAccount> savings = make_unique<SavingsAccount>();
	unique_ptr<BankAccount> checking = make_unique<CheckingAccount>();
	accounts.push_back(move(checking));
	accounts.push_back(move(savings));
	
	cout<<accounts[0]->get_balance()<<"\n";
	cout<<accounts[1]->get_balance()<<"\n";

	run_menu(accounts);

	return 0;
}
