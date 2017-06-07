//
//  main.cpp
//  InterviewQuestion3_4
//
//  Created by Hye Sun Hong on 6/6/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//

#include <iostream>
#include <stack>


using namespace std;

//struct node{
//    int preIndex, value;
//};
//
//class hanoi{
//public:
//    
//    
//    hanoi (int totalsize = 900){
//        node1 = new node[900];
//        stop[0]=stop[1]=stop[2]=-1;
//        this-> totalsize = totalsize;
//        current =0;
//    }
//    
//    void push(int tower,int disksize){
//        if (stop[tower]>900){
//            cout<< "Stack Overflow ";
//        }else{
//            if
//            node1->value = disksize;
//        }
//        
//    }
//    
//private:
//    int totalsize, current, stop[3];
//    node *node1 ;
//};
// https://codetype.wordpress.com/2012/09/15/cracking-the-coding-interview-the-tower-of-hanoi-and-poor-editing/

//void move(int ){
//    
//}

//stack <int> movearound( int disks, stack<int> startst, stack<int> endst){
//    
//    return stack <int> def;
//}

int towersofhanoi(int towers, int disks){
    int array[towers];
    stack<int> st0;
    stack<int> st1;
    stack<int> st2;

    
    if (disks==1){
        array[towers-1] = 1;
        return *array;
    }else{
        // stack (N-1 disks from Start, Aux)
        // stack (N disk to End)
        // stack (N-1 disks from Aux to End)
        

        
        
        
        return 0;
    }
    
    
}


int main() {
    int towers, disks;
    towers = 3; disks=3;
    
    towersofhanoi(towers, disks);

    return 0;
}


//class stack3{
//    
//public:
//    stack3(int totalSize = 40){
//        buf = new node[totalSize];
//        array[0]=array[1]=array[2]=-1;
//        this->totalSize = totalSize;
//        current=0;
//    }
//    ~stack3(){
//        delete[] buf;
//    }
//    void push(int stackNum, int data){
//        if(current>totalSize){
//            cout<<"Stack is full"<<'\n';
//        }
//        cout<<"Data is: "<<data<<" Current is: "<< current<<endl;
//        buf[current].val = data;
//        buf[current].preIndex = array[stackNum];
//        array[stackNum] = current;
//        current++;
//    }
//    void pop(int stackNum){
//        if(current<=0){
//            cout<<"Stack is empty"<<'\n';
//        }
//        array[stackNum] = buf[array[stackNum]].preIndex;
//    }
//    int peek(int stackNum){
//        return buf[array[stackNum]].val;
//    }
//    bool empty(int stackNum){
//        return array[stackNum]==-1;
//    }
//private:
//    node *buf;
//    int array[3];
//    int totalSize;
//    int current;
//};
