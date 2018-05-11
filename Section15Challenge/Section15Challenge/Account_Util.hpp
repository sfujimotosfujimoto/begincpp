//
//  Account_Util.hpp
//  Section15Challenge
//
//  Created by s fujimoto on 2018/05/11.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#ifndef Account_Util_hpp
#define Account_Util_hpp

#include <stdio.h>
#include <vector>
#include "Account_Util.hpp"
#include "Account.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"


// for Account class
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// for Savings Account class
void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &accounts, double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);

// for Checking Account class
void display(const std::vector<Checking_Account> &accounts);
void deposit(std::vector<Checking_Account> &accounts, double amount);
void withdraw(std::vector<Checking_Account> &accounts, double amount);


// for Trust Account class
void display(const std::vector<Trust_Account> &accounts);
void deposit(std::vector<Trust_Account> &accounts, double amount);
void withdraw(std::vector<Trust_Account> &accounts, double amount);
#endif /* Account_Util_hpp */
