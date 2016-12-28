//
//  main.cpp
//  Exercise1_3
//
//  Created by Hye Sun Hong on 12/28/16.
//  Copyright © 2016 Hyesun. All rights reserved.
//

// Given two strings, write a method to decide if one is a permutation of the other.

#include <iostream>


bool permutation_string(std::string in1, std::string in2)
{

    int length1 = in1.length();
    int length2 = in2.length();

    if (length1 != length2){ // first filters out if
        return false;
        
    }else {
        
        for (auto i=0; i<length1 ; i++){    // check until the end of the input string - does it exist?
                                            //find_first_of is used to see if it exists.
            int existingindexin1;
            existingindexin1 = in1.find_first_of(in2[0]);
                if (existingindexin1<0) {return false;};
            in1.replace(existingindexin1, 1, "");// .replace(index, size, replacementstring)
            in2.replace(0,1,"");
                
        }
        return true;
    }
    
}


int main() {
    std::string a = "aaaa";
    std::string b = "aaaa";
    bool output = permutation_string(a,b);
    
    std::cout << output<< std::endl;
    return 0;
}

