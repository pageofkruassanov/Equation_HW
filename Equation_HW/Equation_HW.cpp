#include <iostream>
#include "LinearEquation.h"
#include "QuadraticEquation.h"
int main()
{
    setlocale(0, "Rus");
    // linear equation:
    {
        double a, b;
        char symb;
        cout << "¬ведите число a: ";
        cin >> a;
        cout << endl << "¬ведите число b: ";
        cin >> b;
        cout << "¬ведите операцию +/-: ";
        cin >> symb;
        if (symb != '+' && symb != '-')
            symb = '+';
        cout << "Ћинейное уравнение: " << a << " * x " << symb << " " << b << " = 0" << endl;
        if (symb == '-')
            b *= -1;
        LinearEquation eq(a, b);
        eq.solve();
        cout << endl << "-----------------" << endl;
    }
    // quadratic equation:
    {
        double a, b, c;
        char firstSymb, secondSymb;
        cout << " вадратное уравнение: a*x^(2) (+/-) b*x (+/-) c = 0" << endl;
        cout << "¬ведите a: ";
        cin >> a;
        system("cls");
        cout << " вадратное уравнение: " << a << "*x^(2) (+/-) b * x (+/-) c = 0" << endl;
        cout << "¬ведите первую операцию(+/-): ";
        cin >> firstSymb;
        if (firstSymb != '+' && firstSymb != '-')
            firstSymb = '+';
        system("cls");
        cout << " вадратное уравнение: " << a << "*x^(2) " << firstSymb << " b*x (+/ -) c = 0" << endl;
        cout << "¬ведите b: ";
        cin >> b;
        system("cls");
        cout << " вадратное уравнение: " << a << "*x^(2) " << firstSymb << " " << b << "*x (+/ -) c = 0" << endl;
        cout << "¬ведите вторую операцию(+/-): ";
        cin >> secondSymb;
        if (secondSymb != '+' && secondSymb != '-')
            secondSymb = '+';
        system("cls");
        cout << " вадратное уравнение: " << a << "*x^(2) " << firstSymb << " " << b << "*x " << secondSymb << " c = 0" << endl;
        cout << "¬ведите c: ";
        cin >> c;
        system("cls");
        cout << " вадратное уравнение: " << a << "*x^(2) " << firstSymb << " " << b << "*x " << secondSymb << " " << c << " = 0" << endl;
        if (firstSymb == '-')
            b *= -1;
        if (secondSymb == '-')
            c *= -1;
        QuadraticEquation qe(a, b, c);
        qe.solve();
        system("pause");
    }
}