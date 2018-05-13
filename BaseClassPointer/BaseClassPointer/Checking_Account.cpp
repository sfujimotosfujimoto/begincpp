//
//  Checking_Account.cpp
//  Section15Challenge
//
//  Created by s fujimoto on 2018/05/11.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#include "Checking_Account.hpp"

Checking_Account::Checking_Account(std::string name, double balance)
:Account(name, balance) {
    
}


bool Checking_Account::withdraw(double amount) {
    std::cout << "In Checking_Account::withdraw" << std::endl;
    amount += per_check_fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Checking_Account: " << account.name << ": " << account.balance << "]";
    return os;
}


