//
//  car.cpp
//  car
//
//  Created by Hye Sun Hong on 3/13/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//


#include <stdio.h>
#include "car.h"

// car constructor
Car::Car(int license, int expdate){
    setCar(license, expdate);
};

// car member function

void Car::setCar( int license, int expdate)
{
    a_license = license;
    a_expdate = expdate;
};
