//
//  main.cpp
//  lesson2
//
//  Created by Felix Freidman on 9/20/19.
//  Copyright © 2019 Felix Freidman. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    setlocale(LC_ALL, "Russian");
    cout << "Введите 3-значное число" << endl;
    int number;
    cin >> number;
    int result;
    result = number / 100;
    number = number % 100;
    result = number / 10 + result;
    number = number % 10;
    result = result + number;
    cout << result << endl;
    return 0;
}
