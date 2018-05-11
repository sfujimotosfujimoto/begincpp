//
//  Account.cpp
//  OOP2
//
//  Created by s fujimoto on 2018/05/03.
//  Copyright © 2018 sfujimoto. All rights reserved.
//
#include "Account.hpp"

void Account::set_name(std::string n) {
    name = n;
}

string Account::get_name() {
    return name;
}


bool Account::deposit(double amount) {
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}
