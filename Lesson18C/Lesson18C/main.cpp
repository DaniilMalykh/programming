//
//  main.cpp
//  Lesson18C
//
//  Created by Felix Freidman on 02.12.2019.
//  Copyright © 2019 Felix Freidman. All rights reserved.
//


#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main (){
int l;
double sum;
const int N = 20;
double Z[N];
    srand(time(NULL));
        rand();
int d;
int b = 100, e = 200;
for (int i = 0; i < N; i++) {
Z[i] = rand() % 10;
    cout << Z[i] << " ";
}
cout << endl;
cout <<"введите число l" << endl;
cin>>l;
for (int i = 0; i <= l; i++) {
sum=sum+Z[i];
}
sum=sum/l;
    cout << sum << endl;
    
    for(int i = 0; i < N; i++){
        Z[i] = sum;
        cout << Z[i] << " ";
    }
return 0;
}















//#include <iostream>
//using namespace std;
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    //задание 1
//    srand(time(NULL));
//    rand();
//    int array[30] = {0};
//    for (int i = 0; i < 30; i++) {
//        array[i] = rand() % 100;
//        cout << array[i] << " ";
//    }
//    cout << endl;
//    int counter = 0;
//    int counterArray[30] = {0};
//    int maxCounter;
//    for(int i = 0; i < 29; i++) {
//        if(array[i+1] > array[i]){
//            counter++;
//            counterArray[i] = counter;
//            cout << counterArray[i] << " ";
//        }
//        else{
//            counter = 0;
//            counterArray[i] = counter;
//            cout << counterArray[i] << " ";
//        }
//    }
//    for(int i = 0; i < 29; i++) {
//        if (counterArray[i+1] > counterArray[i]) {
//            maxCounter = counterArray[i + 1];
//        }
//    }
//    cout << endl;
//    cout << maxCounter << endl;
    
// задание 2
//    int array[10] = {0};
//    for (int i = 0; i < 10; i++) {
//            array[i] = rand() % 10;
//            cout << array[i] << " ";
//        }
//    double average = 0;
//    double counter = 0;
//    for(int i = 0; i < 10; i++) {
//        if(array[i] % 2 != 0) {
//            average = average + array[i];
//            counter++;
//        }
//    }
//    cout << endl;
//    cout << average / counter << endl;
//    return 0;
    
// задание 3
//    int array[10][10] = {};
//    for( int j  = 0; j < 10; j++) {
//        for(int i = 0; i < 10; i++) {
//        array[i][j] = rand() % 10;
//        cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//    int sum = 0;
//    int maxElement = 0;
//    for( int j  = 0; j < 10; j++) {
//        for(int i = 0; i < 10; i++) {
//            if(array[i][j] > maxElement) {
//                maxElement = array[i][j];
//            }
//
//        }
//        sum = sum + maxElement;
//        maxElement = 0;
//    }
//    cout << sum << endl;
    
// задание 4
//    int array[30] = {0};
//    for(int i = 0; i < 30; i++) {
//        array[i] = rand() % 100;
//        cout << array[i] << " ";
//    }
//
//    cout << endl;
//
//    int minScore = 100;
//    for(int i = 0; i < 30; i++) {
//        if(array[i] > 19 && array[i] < minScore) {
//            minScore = array[i];
//        }
//    }
//
//    cout << minScore << endl;
    
// задание 5
//    int array[30] = {0};
//    for(int i = 0; i < 30; i++) {
//        array[i] = rand() % 100;
//        cout << array[i] << " ";
//    }
//
//    int sum = 0;
//
//    for(int i = 0; i < 30; i++) {
//        if(array[i] < 0) {
//            sum = sum + array[i];
//        }
//    }
//
//    cout << endl;
//
//    if(sum == 0) {
//        cout << "Нет отрицательных чисел" << endl;
//        return 0;
//    } else
//        return 0;

