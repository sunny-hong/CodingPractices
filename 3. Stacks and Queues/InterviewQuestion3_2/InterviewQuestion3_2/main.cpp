//
//  main.cpp
//  InterviewQuestion3_2
//
//  Created by Hye Sun Hong on 5/31/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//  How would you design a stack which, in addition to push and pop, also has a function "min" which returns the minimum element? Push, pop, in should all operate in O(1) time.

#include <iostream>
#include <stack>

using namespace std;

struct node{
    int preIndex, val;
};

class mystack{
private:
    node *buf;
    int current, totalSize;
    int stop[3];
    int minimum[3]={0,0,0};
public:
    mystack(int totalSize = 1000){
        current = 0;
        buf = new node[totalSize];
        stop[0]=stop[1]=stop[2]=-1;
        this-> totalSize = totalSize;
    }
    ~mystack(){
        delete[] buf;
    }
    
    void push(int stackNum, int data){
        if(current>totalSize){
            cout<<"Stack is full"<<'\n';
        }
        cout<<"Data is: "<<data<<" Current is: "<< current<<endl;
        buf[current].val = data;
        buf[current].preIndex = stop[stackNum];
        if (data<minimum[stackNum]){
            minimum[stackNum] = data;
        }
        stop[stackNum] = current;
        current++;
    }
    void pop(int stackNum){
        if(current<=0){
            cout<<"Stack is empty"<<'\n';
        }
        stop[stackNum] = buf[stop[stackNum]].preIndex;
    
    }
    int min(int stackNum){
        if (isEmpty(stackNum)){
            return INT_MAX;
        }
        return minimum[stackNum];
    }
    
    bool isEmpty(int stackNumber){
        
        return stop[stackNumber]==-1;
    }
    
    int peek(int stackNumber) {
        return buf[stop[stackNumber]].val;
    }
};

int main(int argc, const char * argv[]) {
    
        mystack mystack1;//stack3 mystack;
        for(int i=0; i>-10; --i)
            mystack1.push(0, i);
        for(int i=-10; i>-20; --i)
            mystack1.push(1, i);
        for(int i=100; i<110; ++i)
            mystack1.push(2, i);
        for(int i=0; i<3; ++i)
            cout<<mystack1.peek(i)<<" ";
    
        cout<<endl;
    
        for(int i=0; i<3; ++i){
            mystack1.pop(i);
            cout<<"pop stack: "<< mystack1.peek(i)<<" ";
        }
        cout<<endl;
    
        mystack1.push(0, 111);
        mystack1.push(1, 222);
        mystack1.push(2, 333);
        for(int i=0; i<3; ++i)
            cout<<mystack1.peek(i)<<" ";
    cout<<endl;
    
        for (int i=0; i<3; ++i)
            cout<<mystack1.min(i)<<" ";
    cout<<endl;
    return 0;
}
