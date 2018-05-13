//
//  Trust_Account.cpp
//  Section15Challenge
//
//  Created by s fujimoto on 2018/05/11.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#include "Trust_Account.hpp"


Trust_Account::Trust_Account(std::string name, double balance, double int_rate) : Savings_Account(name, balance, int_rate), num_withdrawals{0} {
    
};

bool Trust_Account::deposit(double amount) {
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    amount += amount * (int_rate/100);
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    std::cout << "In Trust_Account::withdraw" << std::endl;
    if (num_withdrawals >= max_withdrawals || amount > balance * max_withdraw_percent) {
        return false;
    } else {
        ++num_withdrawals;
        return Savings_Account::withdraw(amount);
    }
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "% withdrawals: " << account.num_withdrawals << "]";
    return os;
}
