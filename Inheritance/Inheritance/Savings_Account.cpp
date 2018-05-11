//
//  Savings_Account.cpp
//  Inheritance
//
//  Created by s fujimoto on 2018/05/08.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#include "Savings_Account.hpp"
#include <iostream>

Savings_Account::Savings_Account():int_rate {3.0} {
    
}

Savings_Account::~Savings_Account() {
    
}

void Savings_Account::deposit(double amount) {
    std::cout << "Savings Account deposit called with " << amount << std::endl;
}

void Savings_Account::withdraw(double amount) {
    std::cout << "Savings Account withdraw called with " << amount << std::endl;
}





