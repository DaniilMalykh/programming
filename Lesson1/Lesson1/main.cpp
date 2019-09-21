//
//  main.cpp
//  Lesson1
//
//  Created by Felix Freidman
//  Copyright © 2019 Felix Freidman. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int h3;
    int m3;
    int date = 1;
    cout <<"Type in the department hour less then 24\n";
    int h1;
    cin>>h1;
//    while(h1 > 24 || h1 < 0) {
//        std::cout <<"Type in the department hour\n";
//        cin>>h1;
//    }
    cout <<"Type in the department minutes less then 60\n";
    int m1;
    cin>>m1;
//    while(m1 >= 60 || m1 < 0) {
//        std::cout <<"Type in the department hour\n";
//        cin>>m1;
//    }
    cout <<"Type in the traveling hours\n";
    int h2;
    cin>>h2;
    cout <<"Type in the traveling minutes\n";
    int m2;
    cin>>m2;
//    while(m2 >= 60 || m2 < 0) {
//        std::cout <<"Type in the department hour less then 60\n";
//        cin>>m2;
//    }
    
    h3 = h2 + h1;
    m3 = m1 + m2;
    date = h3 / 24 + date;
    cout <<date<<endl;
    h3 = h3 + m3 / 60;
    h3 = h3 % 24;
    cout <<h3<<endl;
    m3 = m3 % 60;
    cout <<m3<<endl;
    cout <<date<<"\t"<<h3<<":"<<m3<<endl;
    return 0;
}
