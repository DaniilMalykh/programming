//
//  main.cpp
//  Lesson11C
//
//  Created by Felix Freidman on 01/11/2019.
//  Copyright © 2019 Felix Freidman. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
 
void task(int payload, int *a, int n)
{
    if (payload)
    {
                int i;
                for (i = 0; i < n; ++i)
                {
                    if (a[i] > abs(payload))
                    {
                        i--;
                        break;
                    }
                }
                int in = min(n-1,i+1);
                int placed;
                if (abs(payload-a[i])<abs(payload-a[in])) 
                    placed=a[i];
                else
                    placed = a[in];
                if (payload>0)
                {
                    cout<<"on other cup: " << placed <<endl;
                    task(payload-placed, a, n);
                }
                else
                {
                    cout<<"on item cup: " << placed <<endl;
                    task(payload+placed, a, n);
                }
    }
}
int main(void) {
    int weights[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int n = sizeof(weights)/sizeof(int);
 
    int payload;
    cout << "Weight on first cup?" << endl;
    cin>>payload;
    task(payload,weights,n);
    return 0;
}
