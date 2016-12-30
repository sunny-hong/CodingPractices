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
    
    
    if ((n+1)*2>len ){
        cout<<"returns same thing"<<endl;
        return {a};
    }else {
        cout<<"returns compressed"<<endl;
        vector<string> output((n+1)*2);
        int k=1;
        while(i<len){ // i= index of the given string; j = index of output vector; k= frequency
            if (changedindices[i] == true){
                output[j] = a[i];
                output[j+1] = to_string(k);
                j+=2; k=1;
            }else{
                
                if (i == len-1){
                    k=k;
                }else{
                
                    k=k+1;}
            }
            i++;
            
        }
        output[j] = a[i-1];
        output[j+1] = to_string(k);
        return output;
    }

    
}
    



int main() {

    string input;
    input = "HHEEEEEEEEEEEEEEE";
    vector<string> output;
    output = compress_string(input);
    for (int x=0; x<  output.size() ; x++){
        cout<<output[x];
    }
    
    cout<<endl;
    return 0;
}
