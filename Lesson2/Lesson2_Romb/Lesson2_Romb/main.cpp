//
//  main.cpp
//  Lesson2_Romb
//
//  Created by Felix Freidman on 9/20/19.
//  Copyright © 2019 Felix Freidman. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    setlocale(LC_ALL, "Russian");
    int a, b, periodH, periodW;
    cout << "Введите диагональ a" << endl;
    cin >> a;
    cout << "Введите диагональ b" << endl;
    cin >> b;
    periodH = a / 2;
    periodW = b / 2;
    return 0;
}
