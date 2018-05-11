//
//  Savings_Account.hpp
//  Section15Challenge
//
//  Created by s fujimoto on 2018/05/11.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#ifndef Savings_Account_hpp
#define Savings_Account_hpp

#include <stdio.h>
#include "Account.hpp"


class Savings_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
    
private:
    static constexpr const char *def_name = "Unnamed Savings";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    
protected:
    double int_rate;
    
public:
    Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    // inherits the Account::withdraw methods
};












#endif /* Savings_Account_hpp */
