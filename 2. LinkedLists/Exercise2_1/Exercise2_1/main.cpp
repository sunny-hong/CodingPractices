//
//  main.cpp
//  Exercise2_1
//
//  Created by Hye Sun Hong on 1/5/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//
//  Write code to remove duplicates from an unsorted linked list.
//  helpful source: http://www.cprogramming.com/tutorial/lesson15.html
//                  http://stackoverflow.com/a/34379346/6030862

#include <iostream>

struct node {
    int data;
    node *next;
};


int main() {
//    node *root;
//    node *a;  // This will point to each node as it traverses the list
//    node *b;
//    root = new node;  // Sets it to actually point to something
//    root->next = 0;   //  Otherwise it would not work well
//    root->x = 12;
//    a = root; // The a points to the first node
//    b = a;
//    if ( a != 0 ) {
//        while ( a->next != 0)
//            a = a->next;
//    }
//    a->next = new node;  // Creates a node at the end of the list
//    a = a->next; // Points to that node
//    a->next = 0;         // Prevents it from going any further
//    a->x = 42;
//    if (b != 0){
//        while (b-> next != 0)
//            b = b->next;
//    }
//    b-> next= new node;
//    b = b-> next;
//    b->next = 0;
//    b -> x = 32;
    node *root;
    root = new node;
    root -> next = 0;
    root -> data = 12;
    node *current = root;
    while (current) {
        node *forward_head = current->next;
        node *forward_tail = current;
        while (forward_head) {
            if (forward_head-> data == current->data) {  // duplicated item found.
                forward_tail->next = forward_head->next;
            }
            else
                forward_tail = forward_tail->next;
            forward_head = forward_head->next;
        }
        current = current->next;
    }
    
    return 0;
}
