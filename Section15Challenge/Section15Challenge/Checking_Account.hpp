//
//  Checking_Account.hpp
//  Section15Challenge
//
//  Created by s fujimoto on 2018/05/11.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#ifndef Checking_Account_hpp
#define Checking_Account_hpp

#include <stdio.h>
#include "Account.hpp"

class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
    
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;

protected:
    double fee;
    
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    
    bool withdraw(double amount);
    //inherits the Account::deposit method
    
};

#endif /* Checking_Account_hpp */
