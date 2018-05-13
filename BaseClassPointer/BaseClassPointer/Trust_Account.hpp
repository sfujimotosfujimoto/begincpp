//
//  Trust_Account.hpp
//  Section15Challenge
//
//  Created by s fujimoto on 2018/05/11.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#ifndef Trust_Account_hpp
#define Trust_Account_hpp

#include <stdio.h>
//#include "Account.hpp"
#include "Savings_Account.hpp"


class Trust_Account: public Savings_Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
    
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus_amount = 50.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr int max_withdrawals = 3;
    static constexpr double max_withdraw_percent = 0.2;
    
protected:
    int num_withdrawals;
    
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    virtual bool withdraw(double amount);
    ~Trust_Account() {
        std::cout << "In Trust_Account Destructor" << std::endl;
    }
};

#endif /* Trust_Account_hpp */
