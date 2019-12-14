//
//  main.cpp
//  Lesson20C
//
//  Created by Felix Freidman on 13.12.2019.
//  Copyright © 2019 Felix Freidman. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int** createArray(int n){
    int** pArr = new int*[n];
    for (int i = 0; i < n; i++)
        pArr[i] = new int[n] {};
    
     for (int i = 0; i < n; i++)
       {
           pArr[i][i] = 0;
           for (int j = i+1; j < n; j++)
           {
               pArr[i][j] = rand() % 10;
               pArr[j][i] = rand() % 10;
           }
       }
    
       for(int i = 0; i < n; i++){
           for(int j = 0; j < n; j++) {
               cout << pArr[i][j] << " ";
           }
           cout << endl;
       }
       cout << endl;
    return pArr;
}

void printArray(int** pArr, int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << pArr[i][j] << " ";
    cout << endl;
    }
}

int main() {
    
//    задание 3
        
//        srand(time(0));
//        int n, sum{};
//        cout << "Enter size of array: ";
//        cin >> n;
//        int* pArr = new int[n];
//
//        for (int i = 0; i < n; i++)
//            cout << (pArr[i] = rand() % 100) << " ",
//            sum += pArr[i];
//
//        cout << endl << endl;
//        for (int i = n - 1; i > 0; i--)
//            pArr[i] = (sum -= pArr[i]);
//
//        for (int i = 0; i < n; i++)
//            cout << pArr[i] << " ";
//
//        cout << endl;
//    задание 7
//    srand(time(NULL));
//    int size;
//    float sum{};
//    cout << "Enter size of array: ";
//    cin >> size;
//    float* pArr = new float[size];
//    for (int i = 0; i < size; i++)
//        cout << (pArr[i] = rand() % 100) << " ";
//
//    cout << endl << "\nNew array:\n" << setprecision(2);
//    for (int i = 0; i < size; i++)
//        cout << (sum += pArr[i]) / (i + 1) << " ";
//
//    cout << endl;
//    return 0;
    
//    задание 8
//    srand(time(NULL));
//    int size;
//    float min = 100;
//    cout << "Enter size of array: ";
//    cin >> size;
//    int* pArr = new int[size];
//    for (int i = 0; i < size; i++)
//        cout << (pArr[i] = rand() % 100) << " ";
//
//    cout << endl << "\nNew array:\n";
//    for (int i = 0; i < size; i++)
//    {
//        if (pArr[i] < min)
//            min = pArr[i];
//        pArr[i] = min, cout << pArr[i] << " ";
//    }
//
//    cout << endl;
//    return 0;
//    задание 9
    srand(time(0));
    int n;
    cout << "Enter amount of players: ";
    cin >> n;
    auto pArr = createArray(n);
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            pArr[i][i] += pArr[i][j] - pArr[j][i];

    printArray(pArr, n);
    return 0;
    }
