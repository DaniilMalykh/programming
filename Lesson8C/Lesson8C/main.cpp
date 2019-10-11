#include <iostream>
#include <cmath>
const double MATH_PI = 3.14159;
const double MATH_EXP = 2.71828;

using namespace std;

int main(int argc, const char * argv[]) {
    double i;
    double y1, y2, y3;
    for(i = -5; i <= 5; i += 0.1) {
//        y1 = pow(i, 4); y = x^4
//        y2 = pow(-i, 4);
//        y3 = -1 * pow(i, 4);
//        y1 = tan(i * (MATH_PI/180)); y = tg(x)
//        y2 = tan(-i * (MATH_PI/180));
//        y3 = -1 * tan(i * (MATH_PI/180));
//        y1 = pow(MATH_EXP, i); y = e^x
//        y2 = pow(MATH_EXP, -i);
//        y3 = -1 * pow(MATH_EXP, i);
        if(y1 == y2){
            cout << "Четная" << endl;
        } else if(y2 == y3) {
            cout << "Нечетная" << endl;
        } else {
            cout << "Общего вида" << endl;
        }
    }
    
    return 0;
}
