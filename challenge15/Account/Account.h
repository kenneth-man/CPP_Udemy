// Simple Account 
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

using namespace std;

class Account {
    friend ostream &operator<<(ostream &os, const Account &account);
private:   
    static constexpr const char *default_name = "Unnamed Base Account";
    static constexpr double default_balance = 0.0;
protected:
    string name;
    double balance;
public:
    Account(
		string name = default_name,
		double balance = default_balance
	);
    bool deposit(double);
    bool withdraw(double);
    double get_balance() const;
};

#endif