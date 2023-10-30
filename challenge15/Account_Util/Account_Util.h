#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "../Account/Account.h"
#include "../Savings_Account/Savings_Account.h"
#include "../Checking_Account/Checking_Account.h"
#include "../Trust_Account/Trust_Account.h"

using namespace std;

void display(const vector<Account> &accounts);
void deposit(vector<Account> &accounts, double amount);
void withdraw(vector<Account> &accounts, double amount);

void display(const vector<Savings_Account> &accounts);
void deposit(vector<Savings_Account> &accounts, double amount);
void withdraw(vector<Savings_Account> &accounts, double amount);

void display(const vector<Checking_Account> &accounts);
void deposit(vector<Checking_Account> &accounts, double amount);
void withdraw(vector<Checking_Account> &accounts, double amount);

void display(const vector<Trust_Account> &accounts);
void deposit(vector<Trust_Account> &accounts, double amount);
void withdraw(vector<Trust_Account> &accounts, double amount);

#endif