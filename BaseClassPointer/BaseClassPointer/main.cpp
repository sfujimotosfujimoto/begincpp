//
//  main.cpp
//  Section15Challenge
//
//  Created by s fujimoto on 2018/05/11.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#include <iostream>
#include "Account_Util.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    
    
    
    
    cout.precision(2);
    cout << fixed;
    
    std::cout << "\n===== Pointers =====" << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings_Account();
    Account *p3 = new Checking_Account();
    Account *p4 = new Trust_Account();
    
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    
    std::cout << "\n===== Array ===== " << std::endl;
    Account *array[] = {p1, p2, p3, p4};
    for (auto i=0; i<4; ++i)
        array[i]->withdraw(1000);
    
    std::cout << "\n===== Array ===== " << std::endl;
    array[0] = p4;
    for (auto i=0; i<4; ++i)
        array[i]->withdraw(1000);
    
    
    std::cout << "\n===== Vectors ===== " << std::endl;
    std::vector<Account *> accounts {p1, p2, p3, p4};
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw(1000);
    
    std::cout << "\n===== Vectors ===== " << std::endl;
    accounts.push_back(p4);
    accounts.push_back(p4);
    for (auto acc_ptr : accounts)
        acc_ptr->withdraw(1000);
    
    
    
    
    std::cout << "\n===== Clean up =====" << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}
