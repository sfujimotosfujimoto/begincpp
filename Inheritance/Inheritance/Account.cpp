//
//  Account.cpp
//  Inheritance
//
//  Created by s fujimoto on 2018/05/08.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#include "Account.hpp"
#include <iostream>

Account::Account()
: balance{0.0}, name {"An Account"}
{
    
}

Account::~Account() {
    
}

void Account::deposit(double amount) {
    std::cout << "Account deposit called with " << amount << std::endl;
}

void Account::withdraw(double amount) {
    std::cout << "Account withdraw called with " << amount << std::endl;
}


