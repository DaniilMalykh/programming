#include <iostream>
#include <cmath>
const double MATH_PI = 3.14159;
const double MATH_EXP = 2.71828;

using namespace std;

int main(int argc, const char * argv[]) {
    /*Задание 1*/
//    double i; //счетчик для функции
//    double y1, y2, y3; //значения функции для проверки четности
//    int j = 0; //счетчик для массива
//    int sumOfValues = 0; //с помощью него мы проверяем контрольную сумму четности
//    int values[111]; // массив будущих значений функции
//    for(i = -5; i <= 5; i += 0.1) {
//        while(j < 111) {
//        y1 = pow(i, 4); //y = x^4
//        y2 = pow(-i, 4);
//        y3 = -1 * pow(i, 4);
    
//        y1 = tan(i * (MATH_PI/180)); //y = tg(x)
//        y2 = tan(-i * (MATH_PI/180));
//        y3 = -1 * tan(i * (MATH_PI/180));
    
//        y1 = pow(MATH_EXP, i); //y = e^x
//        y2 = pow(MATH_EXP, -i);
//        y3 = -1 * pow(MATH_EXP, i);
//
//        if(y1 == y2){ // стандартная проверка четности
//            values[j] = 0;
//        } else if(y2 == y3) {
//            values[j] = 1;
//        } else {
//            values[j] = 2;
//        }
//        sumOfValues = sumOfValues + values[j]; // подсчитываем контрольную сумму
//            j++;
//
//    }
//    }
//
//    if(sumOfValues == 0) {
//        cout << "Функция четная на данном промежутке" << endl;
//    } else if(sumOfValues == 111) {
//        cout << "Функция нечетная на данном промежутке" << endl;
//    } else {
//        cout << "Функция общего вида на данном промежутке" << endl;
//    }
//
//
        
//    }
//    /*Задание 5*/
//    double miles = 0;
//    double fromMilesToKm;
//    cout <<  "Из Мили в километры" << endl;
//    cout << "Мили \t" << "Километры \t" << endl;
//    for(int i = 0; i < 5; i++) {
//        cin >> miles;
//        fromMilesToKm = miles * 1.609344;
//        cout << miles << "\t" << fromMilesToKm << endl;
//    }
    
    /*Задание 4*/
//    int creditMoney, persentagePerYear, incomePerYear, yearsWithCredit, persentageInMoney;
//    yearsWithCredit = 0;
//    cout << "Введите значение кредита" << endl;
//    cin >> creditMoney;
//    cout << "Введите % в год" << endl;
//    cin >> persentagePerYear;
//    cout << "Введите доход в год" << endl;
//    cin >> incomePerYear;
//    while(creditMoney > 0) {
//        persentageInMoney = (creditMoney - incomePerYear) * (10 / 100);
//        creditMoney = (creditMoney-incomePerYear) + persentageInMoney;
//        yearsWithCredit++;
//    }
//    cout << yearsWithCredit << endl;
    /*8 задание*/
//    double E, x;
//    double n = 1;
//    cout << "Введите погрешность" << endl;
//    cin>> E;
//    do {
//        x=pow((1+1/n), n);
//        n+=1;
//        }
//    while (fabs(x - MATH_EXP) > E);
//    cout << n - 1 << endl;
    /*7 задание*/
//    double x,E;
//    cout << "Введите погрешность" << endl;
//    cin>> E;
//     for(x = 1; x < 100; x++) {
//    if(((sin(1/x)) / 1/x) >= 1-E && ((sin(1/x)) / 1/x) <= 1 + E) {
//    cout<< 1/x << endl;
//        }
//    }
//    return 0;
}

