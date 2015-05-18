//
//  main.c
//  FahrToCelusis
//
//  Created by ammar falmban on 5/13/15.
//  Copyright (c) 2015 devAspirant.wordpress.com. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // insert code here...
    // This Code to change the fahernhit to celusis tempreture
    
    float fahernhit, celsuis;
    
    float lower, upper, step;
    
    lower = 0;
    upper = 300;
    step  = 20;
    
    fahernhit = lower;
    
    while(fahernhit <= upper)
    {
        celsuis = (5.0 / 9.0) * (fahernhit - 32.0);
        printf("%3.0f %6.1f \n ",fahernhit, celsuis);
        fahernhit = fahernhit + step;
    }
}
