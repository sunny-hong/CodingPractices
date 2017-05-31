//
//  main.cpp
//  InterviewQuestions3_1
//
//
//  3.1 Describe how you could use a single array to implement three stacks.

#include<iostream>
using namespace std;

struct node{
    int val, preIndex;
};


class stack3{
    
public:
    stack3(int totalSize = 40){
        buf = new node[totalSize];
        array[0]=array[1]=array[2]=-1;
        this->totalSize = totalSize;
        current=0;
    }
    ~stack3(){
        delete[] buf;
    }
    void push(int stackNum, int data){
        if(current>totalSize){
            cout<<"Stack is full"<<'\n';
        }
        cout<<"Data is: "<<data<<" Current is: "<< current<<endl;
        buf[current].val = data;
        buf[current].preIndex = array[stackNum];
        array[stackNum] = current;
        current++;
    }
    void pop(int stackNum){
        if(current<=0){
            cout<<"Stack is empty"<<'\n';
        }
        array[stackNum] = buf[array[stackNum]].preIndex;
    }
    int peek(int stackNum){
        return buf[array[stackNum]].val;
    }
    bool empty(int stackNum){
        return array[stackNum]==-1;
    }
private:
    node *buf;
    int array[3];
    int totalSize;
    int current;
};

int main(){
    stack3 mystack;//stack3 mystack;
    for(int i=0; i<10; ++i)
        mystack.push(0, 1);
    for(int i=10; i<20; ++i)
        mystack.push(1, 2);
    for(int i=100; i<110; ++i)
        mystack.push(2, 3);
    for(int i=0; i<3; ++i)
        cout<<mystack.peek(i)<<" ";
    
    cout<<endl;
    
    for(int i=0; i<3; ++i){
        mystack.pop(i);
        cout<<"pop stack: "<< mystack.peek(i)<<" ";
    }
    cout<<endl;
    
    mystack.push(0, 111);
    mystack.push(1, 222);
    mystack.push(2, 333);
    for(int i=0; i<3; ++i)
        cout<<mystack.peek(i)<<" ";
    return 0;
}
