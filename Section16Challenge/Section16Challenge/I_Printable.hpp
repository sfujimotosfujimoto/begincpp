//
//  I_Printable.hpp
//  Section16Challenge
//
//  Created by s fujimoto on 2018/05/13.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#ifndef I_Printable_hpp
#define I_Printable_hpp

#include <iostream>

#include <stdio.h>
class I_Printable {
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() = default;
};

#endif /* I_Printable_hpp */
