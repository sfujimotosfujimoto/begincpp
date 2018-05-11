//
//  Account.hpp
//  Section15Challenge
//
//  Created by s fujimoto on 2018/05/11.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
    
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
    
protected:
    std::string name;
    double balance;
    
public:
    Account(std::string name = def_name, double balance = def_balance);
//    Account(std::string name = "Unnamed Account", double balance = 0.0);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
};



#endif /* Account_hpp */
