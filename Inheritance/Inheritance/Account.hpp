//
//  Account.hpp
//  Inheritance
//
//  Created by s fujimoto on 2018/05/08.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp
#include <string>

#include <stdio.h>
class Account {
public:
    void deposit(double amount);
    double balance;
    std::string name;
    void withdraw(double amount);
    Account();
    ~Account();
};

#endif /* Account_hpp */
