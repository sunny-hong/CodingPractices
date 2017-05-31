//
//  strings_justdoit.cpp
//  strings_justdoit
//
//  Created by Hye Sun Hong on 1/20/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//
//http://www.cplusplus.com/forum/beginner/90543/


//1.	Make and run a program that will accept a user input of not more than 50 characters and find set of letters that will produce the string “just do it” consecutively. The program should output the string “just do it” or “string not found” if the entered words were unable to produce the desired string.
//
//
//Sample Output:
//The brown fox jumps over the lazy dog
//
//The word just do it cannot be found on the sentence you type.


#include <iostream>
#include <string>


using namespace std;
int main() {
    string input = "just do it, you are strong!";
    string match = "just do it";
    int i= input.length()-1;

    int ii =  0;
    int k = match.length();

    int kk = 0;
    int streak = 0;
    
    while (i>0){
        
        if(input[ii] == match[kk] ){
            streak ++;
            ii++;
            kk++;
            if (streak == k){
                cout << "found!"<<endl;
                return 0;
            }
        }else {
            streak = 0;
            ii++;
            kk=0;
        }
            i--;
    }

    cout << "just do it _ not found!"<<endl;
    return 0;
    
}
