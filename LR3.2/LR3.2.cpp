// Lab_03_2.cpp
// Біда О. М., група ІК-12
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 1

#include <iostream>

using namespace std;

int main()
{
    double x;   // вхідний аргумент
    double a;   // вхідний параметр
    double b;   // вхідний параметр
    double c;   // вхідний параметр
    double F1;  // результат для скороченої форми if
    double F2;  // результат для повної форми if...else

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // Спосіб 1:  розгалуження у скороченій формі
    if (x < 0 && b != 0)
        F1 = a * x * x + b;

    if (x > 0 && b == 0)
        F1 = (x - a) / (x - c);

    if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
        F1 = x / c;

    cout << "1) F = " << F1 << endl;

    // Спосіб 2:  розгалуження у повній формі
    if (x < 0 && b != 0)
        F2 = a * x * x + b;
    else
        if (x > 0 && b == 0)
            F2 = (x - a) / (x - c);
        else
            F2 = x / c;

    cout << "2) F = " << F2 << endl;

    return 0;
}