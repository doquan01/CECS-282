#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <iostream>
using namespace std;
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
Account::Account() : bal(0.0)
{
}
Account::Account(double b) :
bal(b)
{	
}
double Account::deposit(double d){
	bal = bal + d;
}
double Account::withdraw(double w){
	if(w > bal){
			bal = bal - 5;
		}
		else{
			bal = bal - w;
		}
}
double Account::get_balance(){
	return bal;
}

