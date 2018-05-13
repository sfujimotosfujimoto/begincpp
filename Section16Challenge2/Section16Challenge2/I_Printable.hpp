//
//  I_Printable.hpp
//  Section16Challenge2
//
//  Created by s fujimoto on 2018/05/14.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#ifndef I_Printable_hpp
#define I_Printable_hpp

#include <stdio.h>
#include <iostream>
class I_Printable {
    friend std::ostream &operator<<(std::ostream, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() = default;
};

#endif /* I_Printable_hpp */
