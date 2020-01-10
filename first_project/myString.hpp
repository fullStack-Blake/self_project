//
//  myString.hpp
//  My String Class
//
//  Created by SangYeup Han
//  Referenced from modoocode.com
//  Copyright © 2020 blake. All rights reserved.
//

#ifndef myString_hpp
#define myString_hpp

#include <stdio.h>

class MyString{
    char* string_content;
    int string_length;
    int memory_capacity; // memory_capacity for efficient dynamic allocation
public:
    MyString(char c);
    MyString(const char* str);
    MyString(const MyString& str);
    ~MyString();
    int stringLen(const char* str);
    int length() const;
    std::ostream& print(std::ostream& os=std::cout);
    MyString& assign(const MyString& str);
    MyString& assign(const char* str);

};
    std::ostream& operator<<(std::ostream& os, const MyString);

#endif /* myString_hpp */
