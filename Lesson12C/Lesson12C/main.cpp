//
//  main.cpp
//  Lesson12C
//
//  Created by Felix Freidman on 01/11/2019.
//  Copyright © 2019 Felix Freidman. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

uint factorial(int a) {
    uint fact = 1;
    for(int i = 1; i <= a; i++) {
        fact *= i;
    }
    return fact;
}

int main(void) {
    
    int a = 0;
    cin >> a;
    cout << factorial(a) << endl;
    
    return 0;
}
