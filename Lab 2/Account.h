#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;
class Account
{
private:
	double bal;
public:
	Account();
	Account(double b);
	double deposit(double d);
	double withdraw(double w);
	double get_balance();
	double add_interest(double i);
};
#endif

