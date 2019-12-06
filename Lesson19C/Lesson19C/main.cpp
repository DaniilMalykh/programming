//
//  main.cpp
//  Lesson19C
//
//  Created by Felix Freidman on 02.12.2019.
//  Copyright © 2019 Felix Freidman. All rights reserved.
//

#include <iostream>
using namespace std;

int input() {
    int N = 0;
    cout << "Введите количество строк:" << endl;
    cout << "N = ";
    cin >> N;
    return N;
}

int main(int argc, const char * argv[]) {
    int N = input();
    srand(time(NULL));
    rand();
    int** Array = new int*[N];
    for(int i = 0; i < N; i++) {
        Array[i] = new int[N];
    }
    cout << endl;
//     задание 1
    int ArrayDiag = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            Array[i][j] = rand() % 10;
            cout << Array[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    for(int i = 0; i < N; i++) {
        int diag= Array[i][i];
        for(int j = 0; j < N; j++) {
            
            //сохраняем значение диагонали
            Array[i][j] =
                      Array[i][j] / diag;
            cout << Array[i][j] << " ";
        }
        ArrayDiag++;
        cout << endl;
    }
// задание 3
//    cout << "Введите размер массива:" << endl;
//    cout << "N = ";
//    cin >> N;
//    int* Array = new int[N];
//    for(int i = 0; i < N; i++) {
//        Array[i] = rand() % 10;
//        cout << Array[i] << " ";
//    }
//
//    cout << endl;
//    
//    for(int i = 1; i < N; i++) {
//        Array[i] = Array[i-1] + Array[i];
//    }
//    
//    cout << endl;
//    
//    for(int i = 0; i < N; i++) {
//          cout << Array[i] << " ";
//      }
//    
//    cout << endl;
//    
//    return 0;
}
