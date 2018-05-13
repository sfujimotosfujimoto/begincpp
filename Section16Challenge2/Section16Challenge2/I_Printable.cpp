//
//  I_Printable.cpp
//  Section16Challenge2
//
//  Created by s fujimoto on 2018/05/14.
//  Copyright © 2018 sfujimoto. All rights reserved.
//

#include "I_Printable.hpp"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return os;
}
