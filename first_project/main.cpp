//
//  main.cpp
//  first_project
//
//  Created by 엽쌍 on 2020-01-08.
//  Copyright © 2020 blake. All rights reserved.
//

#include <iostream>
#include <string.h>
#include "myString.hpp"

int main() {
    MyString str1("My string");
    MyString str2(str1);
    
    
    str1.print();
    str2.print();
}
