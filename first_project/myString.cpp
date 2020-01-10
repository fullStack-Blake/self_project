//
//  myString.cpp
//  first_project
//
//  Created by 엽쌍 on 2020-01-09.
//  Copyright © 2020 blake. All rights reserved.
//
#include <iostream>
#include "myString.hpp"

using namespace std;
//class MyString{
//    char* string_content;
//    int string_length;
//public:
//    MyString(char c);
//    MyString(const char* str);
//    MyString(const MyString& str);
//};
MyString::MyString(char c){
    string_content = new char[1];
    string_content[0] = c;
    string_length = 1;
}
MyString::MyString(const char* str){
    string_length = stringLen(str);
    string_content = new char[string_length + 1];
    for(unsigned i=0; i!= string_length; i++)
        string_content[i] = str[i];
}
MyString::MyString(const MyString& str){
    string_length = str.string_length;
    string_content = new char[string_length + 1];
    for(unsigned i =0; i != string_length; i++)
        string_content[i] = str.string_content[i];
}
MyString::~MyString(){
    delete [] string_content;
}
int MyString::stringLen(const char* str){
    unsigned i = 0;
    while(str[i] != '\0') ++i;
    return i;
}
int MyString::length() const {return string_length;}

std::ostream& MyString::print(std::ostream& os){
    for(int i=0; i != string_length; i++){
        os << string_content[i];
    }
    os << endl;
    return os;
}
std::ostream& operator<<(std::ostream& os, MyString a){
    a.print(os);
    return os;
}
MyString& MyString::assign(const MyString& str){
    if(str.string_length > string_length){
        delete [] string_content;
        
        string_content = new char[str.string_length + 1];
    }
    for(int i=0; i != string_length; i++)
        string_content[i] = str.string_content[i];
    
    string_length = str.string_length;
    
    return *this;
}
MyString& MyString::assign(const char* str){
    unsigned length = stringLen(str);
    if(length > string_length){
        delete[] string_content;
    }
    string_content = new char[length+1];
    
    
    for(int i=0; i != length; i++)
        string_content[i] = str[i];
    
    string_length = length;
    
    return *this;
}
