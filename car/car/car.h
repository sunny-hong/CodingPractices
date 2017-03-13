//
//  Header.h
//  car
//
//  Created by Hye Sun Hong on 3/13/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//

#ifndef CAR_H
#define CAR_H

class Car{
    
private:
  
    int a_license;
    int a_expdate;

public:
    Car(int license, int expdate);
    void setCar(int license, int expdate);
    
    int getLicense(){ return a_license;}
    int getExpdate(){ return a_expdate;}
};


#endif  /* car_h */
