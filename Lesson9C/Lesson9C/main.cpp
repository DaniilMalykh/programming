
//  main.cpp
//  Lesson9C
//
//  Created by Felix Freidman on 18/10/2019.
//  Copyright © 2019 Felix Freidman. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[31];
    int j  = 1;
    for(int i = 0; i < 31; i++) {
        array[i] = j;
        j++;
        cout << array[i] << endl;
        
    }
   
    
    return 0;
}
