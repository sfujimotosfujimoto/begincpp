//  Account.cpp
//  Created by s fujimoto on 2018/05/11.
//  Copyright © 2018 sfujimoto. All rights reserved.

#include "Account.hpp"

Account::Account(std::string name, double balance)
:name{name}, balance{balance} {
}



bool Account::deposit(double amount) {
    if (amount < 0)
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
    std::cout << "In Account::withdraw" << std::endl;
    if (balance-amount >= 0) {
        balance-=amount;
        return true;
    } else
        return false;
}

double Account::get_balance() const {
    return balance;
}

std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "[Account: " << account.name << ": " << account.balance << "]";
    return os;
}





