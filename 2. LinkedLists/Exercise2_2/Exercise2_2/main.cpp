//
//  main.cpp
//  Exercise2_2
//
//  Created by Hye Sun Hong on 1/6/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//
//Implement an algorithm to find the kth to last element of a singly linked list.


#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct LinkedList{
    Node* head = NULL;
    void append(int);
};

int k_th_linked_list(Node* head, int k){
    int i=1;
    int temp;
    Node* current = head;
    
    while(current && i<=k){
        temp = current -> data;
        i++;
        current = current -> next ;
    }
    return temp;
};


int main() {
    int k = 3;
    
    Node *head = NULL;             //empty linked list
    Node *temp;             //create a temporary node
    Node *temp2;
    Node *temp3;
    temp = (Node*) malloc(sizeof(Node)); //allocate space for node
    temp->data = 8;             // store data(first field)
    temp->next = head;  // store the address of the pointer head(second field)
    head = temp;                  // transfer the address of 'temp' to 'head'
    
    temp2 = (Node*) malloc(sizeof(Node)); //allocate space for node
    temp2 -> data = 9;
    temp2 -> next= temp;
    
    temp3 = (Node*) malloc(sizeof(Node)); //allocate space for node
    temp3 -> data = 10;
    temp3 -> next = temp2;
    
    std::cout<< k_th_linked_list(temp3, k) << std::endl;
    
    return 0;
}
