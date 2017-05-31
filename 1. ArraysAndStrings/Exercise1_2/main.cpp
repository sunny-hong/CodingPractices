//
//  main.cpp
//  exercise1_2
//
//  Created by Hye Sun Hong on 12/28/16.
//  Copyright © 2016 Hyesun. All rights reserved.
//

#include<iostream>

void reverse(char* str);

int main(){
    
    char input[][9] = { "abcd", "cat" };
    
    for (int i = 0; i < 2; i++)
    {
        std::cout << "reversing the string: " << input[i] << std::endl;
        reverse(input[i]);
        std::cout << "reverse of input string is " << input[i] << std::endl;
    }
    
    return 0;
}

void reverse(char* str){
    char *ptrEnd = str;
    
    char temp; char temp2;
    
    if (str) // if str is there
    {
        while (*ptrEnd)
        {
            ptrEnd++; //add ptrEnd until *ptrEnd is true
        }
        
        char stringtemp[*ptrEnd];
        
        ptrEnd--; //one index before because the end is a null pointer.
        
        while (str < ptrEnd)
        {
            temp = *str;
            *str++ = *ptrEnd;
            *ptrEnd-- = temp;
        }
//        for (int i=0; i<*ptrEnd; i++){
//            stringtemp[i] = *str;
//            *str++;
//        }
//        for (auto i=0; i:*ptrEnd-1){
//            str[i] = stringtemp[i];}
    }
}

