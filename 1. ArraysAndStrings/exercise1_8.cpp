//
//  main.cpp
//  Exercise1_8
//
//  Created by Hye Sun Hong on 1/5/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//
//  CTCI 5th version question 1.5 :
//  Assume you have a method isSubstring if a word is a substring of another. Given two strings s1, s2, write code to check if s2 is a rotation of s1 using only one call to isSubstring. ("waterbottle" is a rotation of "erbottlewat")

#include <iostream>

bool isValid;
std::string temp;

void check_length(std::string a, std::string b){
    if (a.length() != b.length()){
        isValid = 0;
    }
}

void isSubstring(std::string input1, std::string input2){
    check_length(input1, input2);
    temp = input2 + input2;
    std::size_t pos = temp.find(input1);
    if (pos == -1){
//        std::cout<<input1 << " is not a substring of:"<<input2 << std::endl;
        
    }else{
//        std::cout<<input1<< " is a substring of : "<<input2<< std::endl;
        isValid = 1;
    }
    std::cout<< "Result : " << isValid<<std::endl;
}

int main() {
    isValid = 0;
    std::string a1 = "waterbottle";
    std::string a2 = "erbottlewat";
    
    isSubstring(a1, a2);
    
    return 0;
}
