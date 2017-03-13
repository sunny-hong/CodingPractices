//
//  main.cpp
//  car
//
//  Created by Hye Sun Hong on 3/13/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//
//http://www.learncpp.com/cpp-tutorial/89-class-code-and-header-files/
//http://quiz.geeksforgeeks.org/basic-concepts-of-object-oriented-programming-using-c/

#include <iostream>
#include "car.h"

using namespace std;


int main() {
    Car myCar(607001,20170314) ;
    cout<<"Hi!"<<endl;
    int output = myCar.getLicense();
    cout << output;
    return 0;
}
