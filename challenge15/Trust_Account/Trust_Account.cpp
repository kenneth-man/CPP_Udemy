#include "Trust_Account.h"

using namespace std;

Trust_Account::Trust_Account(string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate} {
}

bool Trust_Account::deposit(double amount) {
	if (amount >= Trust_Account::bonus_threshold) {
		amount += Trust_Account::bonus_amount;
	}
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if (Trust_Account::withdraws <= 3 && amount < Trust_Account::balance * Trust_Account::max_withdraw_percent) {
		Trust_Account::withdraws += 1;
		return Account::withdraw(amount);
	}
	return false;
}