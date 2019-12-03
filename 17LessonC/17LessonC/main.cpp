//
//  main.cpp
//  17LessonC
//
//  Created by Felix Freidman on 29.11.2019.
//  Copyright © 2019 Felix Freidman. All rights reserved.
//

#include <iostream>
 
using namespace std;
 
int main()
{
    int N, t, Move, n;
    cout << "Введите размер массива:" << endl;
    cout << "N = ";
    cin >> N;
    cout << "Введите размер хода" << endl;
    cout << "Move = ";
    cin >> Move;
    int* A = new int[N];
    for (int i = 0; i < N; i++)
    {
        A[i] = i;
        cout << A[i] << " ";
    }
    cout << endl;
    
    for (int i = N - Move; i >= 0; i--)
    {
        t = A[N-Move - i];
        A[i] = A[i-Move];
        A[i - Move + i] = t;
        
    }
    cout << "Массив после сдвига элементов:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    delete[] A;
    return 0;
}


