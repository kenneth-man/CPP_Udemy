#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "../Savings_Account/Savings_Account.h"

using namespace std;

class Trust_Account: public Savings_Account {
private:
    static constexpr const char *default_name = "Unnamed Trust Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;
	static constexpr double bonus_amount = 50.0;
	static constexpr double bonus_threshold = 5000.0;
	static constexpr double max_withdraw_percent = 0.2;
protected:
	int withdraws {0};
public:
    Trust_Account(
		string name = default_name,
		double balance = default_balance,
		double int_rate = default_interest_rate
	); 
    bool deposit(double);
	bool withdraw(double);
};

#endif