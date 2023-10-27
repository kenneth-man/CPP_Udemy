#include <iostream>
#include "Account_Util.h"

using namespace std;

void display(const vector<Account> &accounts) {
    cout << "\n=== Accounts ==========================================" << endl;
    for (const auto &acc: accounts) 
        cout << acc << endl;
}

void deposit(vector<Account> &accounts, double amount) {
    cout << "\n=== Depositing to Accounts =================================" << endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            cout << "Deposited " << amount << " to " << acc << endl;
        else
            cout << "Failed Deposit of " << amount << " to " << acc << endl;
    }
}

void withdraw(vector<Account> &accounts, double amount) {
    cout << "\n=== Withdrawing from Accounts ==============================" <<endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            cout << "Withdrew " << amount << " from " << acc << endl;
        else
            cout << "Failed Withdrawal of " << amount << " from " << acc << endl;
    } 
}
 
void display(const vector<Savings_Account> &accounts) {
    cout << "\n=== Savings Accounts ====================================" << endl;
    for (const auto &acc: accounts) 
        cout << acc << endl;
}

void deposit(vector<Savings_Account> &accounts, double amount) {
    cout << "\n=== Depositing to Savings Accounts ==========================" << endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            cout << "Deposited " << amount << " to " << acc << endl;
        else
            cout << "Failed Deposit of " << amount << " to " << acc << endl;
    }
}

void withdraw(vector<Savings_Account> &accounts, double amount) {
    cout << "\n=== Withdrawing from Savings Accounts ======================" << endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            cout << "Withdrew " << amount << " from " << acc << endl;
        else
            cout << "Failed Withdrawal of " << amount << " from " << acc << endl;
    } 
}