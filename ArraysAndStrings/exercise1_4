//
//  main.cpp
//  Exercise1_4
//
//  Created by Hye Sun Hong on 12/29/16.
//  Copyright © 2016 Hyesun. All rights reserved.
//
//  Write a method to replace all spaces in a string to %20. Assume that the string has sufficient space to hold additional characters, and that you are given "true" length of the string.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// caution : i didn't use replace_spaces function. I just return cout. I think this works too.

string replace_spaces(string input){
    
    if( ! input.length() > 0 ){
        return {"ERROR"};
    }
    int a = input.length();
    int i=0; int j=0;
    //string output(a);
    string output = ""; // output is a string that has a size of input.length()
    while (i< a){
        if (input[j]==32 ){ // 32 is ASCII value of a space. " "
            cout<<"%20";
            j++;
            i= i+4; // "%20" is four characters due to the null character hidden!
        }else {
            cout<<input[j];
            j++;
            i++;
        }
    }
    ;
    return output;
}

int main() {
    
    string output = replace_spaces("Mary Had a Little Lamb         ");
    //string output = replace_spaces("Ade        ");
    //string output = replace_spaces("");
    //string output = replace_spaces("    ");
    cout<<output<<endl;
    return 0;
}
