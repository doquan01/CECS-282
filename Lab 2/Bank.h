#ifndef BANK_H
#define BANK_H
#include "Account.h"
class Bank
{
private:
	Account checking;
	Account savings;
public:
	Bank();
	Bank(double checking_amount, double savings_amount);
	void deposit(double amount, string account);
	void withdraw(double amount, string account);
	void transfer(double amount, string account);
	void print_balances();
};
#endif
