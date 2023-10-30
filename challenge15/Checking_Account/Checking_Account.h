#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "../Account/Account.h"

using namespace std;

class Checking_Account: public Account {
private:
	static constexpr const char *default_name = "Unnamed Checking Account";
    static constexpr double default_balance = 0.0;
public:
    Checking_Account(
		string name = default_name,
		double balance = default_balance
	); 
    bool withdraw(double amount);
};

#endif