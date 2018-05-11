//
//  Savings_Account.hpp
//  Inheritance
//
//  Created by s fujimoto on 2018/05/08.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#ifndef Savings_Account_hpp
#define Savings_Account_hpp

#include <stdio.h>
#include "Account.hpp"

class Savings_Account: public Account {
public:
    double int_rate;
    Savings_Account();
    ~Savings_Account();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif /* Savings_Account_hpp */
