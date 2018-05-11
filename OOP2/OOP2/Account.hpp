//
//  Account.hpp
//  OOP2
//
//  Created by s fujimoto on 2018/05/03.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>

#include <string>


using namespace std;


class Account {
private:
    string name;
    double balance;
    
public:
    void set_balance(double bal) {balance = bal;};
    double get_balance() { return balance; };
    
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
    
};

#endif /* Account_hpp */
