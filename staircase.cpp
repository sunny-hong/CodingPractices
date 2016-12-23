//  Created by Hye Sun Hong on 12/20/16.
//  Copyright © 2016 Hyesun. All rights reserved.
//
//  main.cpp
//  Staircase
//
//  HackerRank sample coding test.
//  Prompt: Takes integer N, the height of the staircase as its argument and prints a statement as shown in the example.
//  Constraint: 1<=N<=100
//  Sample Input: 6, Sample Output:
//       #
//      ##
//     ###
//    ####
//   #####
//  ######
// Note: there is no leading space in the last line of the output.


#include <iostream>
using namespace std;


void StairCase(int n){
    if (n<1 || n>100){
        cout<<"Out of bound."<<endl;} else {
        
    for (int i=1; i<=n; i++){
        for(int k = n-i; k>=1; k--){
            cout<<" ";
        };
        for (int j=1; j<=i; j++){
            cout<<"#";
        };
        cout<<"\n";

    };
    };//else
};

int main() {
    int n = 0;
    StairCase(n);
    
    return 0;
};

