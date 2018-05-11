//
//  main.cpp
//  Section15Challenge
//
//  Created by s fujimoto on 2018/05/11.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#include <iostream>
#include "Account_Util.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    cout.precision(2);
    cout << fixed;
    
    //Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account{"Curly", 5000});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    // Savings
    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account{});
    sav_accounts.push_back(Savings_Account{"Superman"});
    sav_accounts.push_back(Savings_Account{"Batman", 2000});
    sav_accounts.push_back(Savings_Account{"Wonderwoman", 5000, 5.0});
    
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    
    // Checking Account
    vector<Checking_Account> c_accounts;
    c_accounts.push_back(Checking_Account{});
    c_accounts.push_back(Checking_Account{"Kirk"});
    c_accounts.push_back(Checking_Account{"Spock", 2000});
    c_accounts.push_back(Checking_Account{"Bones", 5000});

    display(c_accounts);
    display(c_accounts);
    deposit(c_accounts, 1000);
    withdraw(c_accounts, 2000);
    
    
    
    
    // Trust Account
    vector<Trust_Account> t_accounts;
    t_accounts.push_back(Trust_Account{});
    t_accounts.push_back(Trust_Account{"Athos", 10000, 5.0});
    t_accounts.push_back(Trust_Account{"Porthos", 20000, 4.0});
    t_accounts.push_back(Trust_Account{"Aramis", 30000});
    
    display(t_accounts);
    deposit(t_accounts, 1000);
    withdraw(t_accounts, 3000);
    
    for (int i=1; i<=5; i++)
        withdraw(t_accounts, 1000);

    
    return 0;
}
