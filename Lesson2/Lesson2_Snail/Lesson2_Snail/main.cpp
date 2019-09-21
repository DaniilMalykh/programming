//
//  main.cpp
//  Lesson2_Snail
//
//  Created by Felix Freidman on 9/20/19.
//  Copyright © 2019 Felix Freidman. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int height, speedAtDay, decSpeedAtNight, daysToTheFinish, t1;
    setlocale(LC_ALL, "Russian");
    cout << "Введите высоту столба" << endl;
    cin >> height;
    cout << "Введите скорость улитки днем" << endl;
    cin >> speedAtDay;
    cout << "Введите скорость падения улитки ночью" << endl;
    cin >> decSpeedAtNight;
    daysToTheFinish = (height - speedAtDay) / (speedAtDay - decSpeedAtNight) + 1;
    cout << daysToTheFinish << endl;
    
    return 0;
}
