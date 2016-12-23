//
//  main.cpp
//  Palindrome
//
//  Created by Hye Sun Hong on 12/20/16.
//  Copyright © 2016 Hyesun. All rights reserved.
//
//■ Question 1 Please implement a function that checks whether a positive number is a palindrome or not. For example, 121 is a palindrome, but 123 is not.
// page 21 of Copy of Coding Interviews.

#include <iostream>

void Is_Palindrome (char input[]){

    int len = strlen(input);
    bool isPalindrome;
    
    for (int i=0; i<len; i++){
        if (input[i] != input[len-i-1]){
            std::cout<<"Not Palindrome";
            isPalindrome = 0;
            break;
        }
        isPalindrome = 1;
    }
    if (isPalindrome ==1){
        std::cout<<"Palindrome";};
    
    std::cout <<"\n"<<"\n";
};

int main() {
    char v[]= "-125521-";
    Is_Palindrome(v);
    /*
     Still need to figure out how to have a normal int into a string that has the int, not the ascii output of it.
     */

    return 0;
};
