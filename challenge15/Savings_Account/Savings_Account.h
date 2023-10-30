#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "../Account/Account.h"

using namespace std;

class Savings_Account: public Account {
    friend ostream &operator<<(ostream &os, const Savings_Account &account);
private:
    static constexpr const char *default_name = "Unnamed Savings Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;
protected:
    double int_rate;
public:
    Savings_Account(
		string name = default_name,
		double balance = default_balance,
		double int_rate = default_interest_rate
	);
	// Overriding Account::deposit() 
    bool deposit(double amount);
    // ...Inherits the other Account methods
};

#endif