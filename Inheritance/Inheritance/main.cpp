//
//  main.cpp
//  Inheritance
//
//  Created by s fujimoto on 2018/05/08.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#include <iostream>
#include "Account.hpp"
#include "Savings_Account.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    
    //
    cout << "\n===============================================" << endl;
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);
    
    cout << endl;
    
    Account *p_acc {nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;
    
    
    // Savings account class
    cout << "\n===============================================" << endl;
    Savings_Account sav_acc {};
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);
    
    
    cout << endl;
    
    Savings_Account *p_sav_acc {nullptr};
    p_sav_acc = new Savings_Account();
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(500.0);
    
    
    cout << "\n===============================================" << endl;
    
    return 0;
}
