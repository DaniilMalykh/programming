//
//  main.cpp
//  Cbrick
//
//  Created by Felix Freidman on 9/27/19.
//  Copyright © 2019 Felix Freidman. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int A, B, C, width, height;
    cout << "Enter the width of hole in the wall" << endl;
    cin >> width;
    cout << "Enter the height of hole in the wall" << endl;
    cin >> height;
    cout << "Enter the length of brick" << endl;
    cin >> A;
    cout << "Enter the width of brick" << endl;
    cin >> B;
    cout << "Enter the height of brick" << endl;
    cin >> C;
    
    int areaOfBrick1 = A * B;
    int areaOfBrick2 = A * C;
    int areaOfBrick3 = B * C;
    int areaOfHole = width * height;
    
    if (areaOfBrick1 <= areaOfHole ) {
        cout << "okay" << endl;
    }
    else if(areaOfBrick2 <= areaOfHole) {
        cout << "okay" << endl;
    }
    else if (areaOfBrick3 <= areaOfHole ) {
        cout << "okay" << endl;
    }
    else {
        cout << "not okay" << endl;
    }
    return 0;
}
