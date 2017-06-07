//
//  main.cpp
//  InterviewQuestion3_4 "Towers of Hanoi"
//
//  Created by Hye Sun Hong on 6/6/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

void towersofhanoi(int num,
                   stack<int> *first,
                   stack<int> *temp,
                   stack<int> *dest){
    
    if (num ==0){
        return;
    }
    towersofhanoi(num-1, first, dest, temp); // disks= num-1;
                                             //  towersofhanoi(num, From, temporary, End Tower);
    (*dest).push( (*first).top() );
    (*first).pop();
    towersofhanoi(num-1, temp, first, dest);// towersofhanoi(num, From, temporary, End Tower);
    
}

void printstack( stack<int> *obj ){
    
    while ( !(*obj).empty() ) {
        cout<< (*obj).top()<<" ";
        (*obj).pop();
    }
    cout<<endl;

}

int main(){
    stack <int> start, st1, end;
    int disks;
    disks= 3;
    for(int i=0; i<disks; i++ ){
        start.push(disks-i);
    }
    
    towersofhanoi(disks, &start, &st1, &end);
    cout<<"End stack : ";
    printstack(&end);
    
}
    

