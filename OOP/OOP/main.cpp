//
//  main.cpp
//  OOP
//
//  Created by s fujimoto on 2018/05/02.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};
    
    // methods
    void talk(string);
    bool is_dead();
    
    
};

class Account {
    string name {"Account"};
    double balance {0.0};

    bool deposit(double);
    bool withdraw(double);
    
};

int main(int argc, const char * argv[]) {
    Account frank_account;
    Account jim_account;
    
    Player frank;
    Player hero;
    
    Player players[] {frank, hero};
    
    vector<Player> player_vec {frank};
    player_vec.push_back(hero);
    
    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;
    
    

    return 0;
}
