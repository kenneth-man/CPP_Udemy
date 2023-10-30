#include <iostream>
#include <vector>
#include "./Account_Util/Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000});
    accounts.push_back(Account {"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    // Savings 
    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {});
    sav_accounts.push_back(Savings_Account {"Superman"});
    sav_accounts.push_back(Savings_Account {"Batman", 2000});
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0});

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

	// Checking 
    vector<Checking_Account> chk_accounts;
    chk_accounts.push_back(Checking_Account {});
    chk_accounts.push_back(Checking_Account {"Superman"});
    chk_accounts.push_back(Checking_Account {"Batman", 2000});
    chk_accounts.push_back(Checking_Account {"Wonderwoman", 5000});

    display(chk_accounts);
    deposit(chk_accounts, 1000);
    withdraw(chk_accounts, 2000);

	// Trust 
    vector<Trust_Account> tst_accounts;
    tst_accounts.push_back(Trust_Account {});
    tst_accounts.push_back(Trust_Account {"Superman"});
    tst_accounts.push_back(Trust_Account {"Batman", 2000});
    tst_accounts.push_back(Trust_Account {"Wonderwoman", 5000, 5.0});

    display(tst_accounts);
    deposit(tst_accounts, 1000);
    withdraw(tst_accounts, 2000);

    return 0;
}

