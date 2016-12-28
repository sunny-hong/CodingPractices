//
//  exercise1_2.cpp
//  ArraysAndStrings
//
//  Created by Hye Sun Hong on 12/26/16.
//  Copyright © 2016 Hyesun. All rights reserved.
//
//  Implement a function void reverse(char* str) in C or C++ which reverses a null- terminated string.


#include <iostream>
#include <string>
#include <vector>
#include "exercise1_2.h"

using std::cout;
using std::endl;

void exercise1_2::reverse(char* str){
   /* if ( str.index() == "\0" || str == NULL){
        str = "\0";
    }
    */
    
    char *ptrEnd = str;
    char temp;
    
    if (str)
    {
        while (*ptrEnd)
        {
            ptrEnd++;
        }
        ptrEnd--;
        
        while (str < ptrEnd)
        {
            temp = *str;
            *str++ = *ptrEnd;
            *ptrEnd-- = temp;
        }
    }

  
}

int exercise1_2::run1_2()
{
    char input[][10] = { "abcde", "cat" };
    for (int i = 0; i < 2; i++)
    {
        
        cout << "reversing the string: " << input[i] << endl;
        reverse(input[i]);
        cout << "reverse of input string is " << input[i] << endl;
    }
    
    return 0;
}
