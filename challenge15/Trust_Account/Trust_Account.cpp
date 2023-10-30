#include "Trust_Account.h"

using namespace std;

Trust_Account::Trust_Account(string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate} {
}

bool Trust_Account::deposit(double amount) {
	if (amount >= 5000) {
		amount += 50;
	}
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if (Trust_Account::withdraws <= 3 && amount < Trust_Account::balance * 0.2) {
		Trust_Account::withdraws += 1;
		return Account::withdraw(amount);
	}
	return false;
}