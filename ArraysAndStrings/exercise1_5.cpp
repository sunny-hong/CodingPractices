//
//  main.cpp
//  Exercise1_5
//
//  Created by Hye Sun Hong on 12/30/16.
//  Copyright © 2016 Hyesun. All rights reserved.
//
//  Implement a method to perform basic string compression using the counts of repeated characters
//  aabcccccaaa would become a2blc5a3.
//  do nothing if this would not make the string smaller.


//  Creates a vector called "changedindices" with the size of string "a"'s length-1. Sets them into value zero. The purpose of this is to give true/false if the sequence of characters changed inbetween. For example, for string "aabbc", changedindices() is {0,1,0,1}; (a-a, a-b, b-b, b-c).

#include <iostream>
#include <vector>
#include <string>

using namespace std;


vector<string> compress_string( string a){
    
    int len = a.length();
    
    if (len < 1){
        return {"ERROR"};
    }
    

    int i = 0;
    vector<bool> changedindices(len-1, false);
    
    
    while (i<len-1){
        
        if (a[i] != a[i+1]){
            changedindices[i] = true;
        }
        i++;
    }
    
    i=0; int j=0;
    
    size_t n = count(changedindices.begin(), changedindices.end(), '1');
    cout << n<<endl;
    if (n*2>len ){
        return {a};
    }else {
        
        // print char, num freq, char, num freq.
        
    return {" "};
    }
    
}


int main() {

    string input;
    input = "abc";
    vector<string> output;
    output = compress_string(input);
    //cout<< output[0][0] <<endl;
//    for (int i=0; i< sizeof(output); )
//    cout << output[i] << endl;
    
    
    return 0;
}
