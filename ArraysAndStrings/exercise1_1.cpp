//
//  exercise1_1.cpp
//  ArraysAndStrings
//
//  Created by Hye Sun Hong on 12/26/16.
//  Copyright © 2016 Hyesun. All rights reserved.
//
//  Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?

#include <iostream>
#include <string>
#include <vector>

//using std::string;
//using std::vector;
using namespace std;

int check_unique(vector<string> input){
    
    vector<int> tally(120);
//    for (auto i:input){
//        int k= input[i]-"a";
//        tally[k] += 1;
//    }
//    
    int result = 9;
    
    return result;
}

int main() {
    // insert code here...
    vector<string> stringvector;
    stringvector = {"hey", "now"};
    int output = check_unique(stringvector );
    cout << output;
    return 0;
}
