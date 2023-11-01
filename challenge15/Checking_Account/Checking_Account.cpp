#include "Checking_Account.h"

using namespace std;

Checking_Account::Checking_Account(string name, double balance)
    : Account {name, balance} {
}

bool Checking_Account::withdraw(double amount) {
    amount += Checking_Account::check_fee;
    return Account::withdraw(amount);
}