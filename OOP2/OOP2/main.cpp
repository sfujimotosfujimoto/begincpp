//
//  main.cpp
//  OOP2
//
//  Created by s fujimoto on 2018/05/03.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#include <iostream>
#include "Account.hpp"

int main(int argc, const char * argv[]) {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    if (frank_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not allowed" << endl;
    
    if (frank_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    if (frank_account.withdraw(1500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    
    // frank_account.deposit(1000.0);
    // frank_account.withdraw(500.0);
    
    cout << frank_account.get_balance() << endl;
    
    
    // Player frank;
    // frank.name = "Frank";
    // frank.health = 100;
    // frank.xp = 12;
    // frank.talk("Hi there");
    
    // Player *enemy = new Player;
    // (*enemy).name = "Enemy";
    // (*enemy).health = 100;
    // enemy->xp = 15;
    
    // enemy->talk("I will destroy you!");
    
    cout << endl;
    return 0;
}
