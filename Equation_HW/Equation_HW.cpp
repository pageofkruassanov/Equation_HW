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
        cout << "������� ����� a: ";
        cin >> a;
        cout << endl << "������� ����� b: ";
        cin >> b;
        cout << "������� �������� +/-: ";
        cin >> symb;
        if (symb != '+' && symb != '-')
            symb = '+';
        cout << "�������� ���������: " << a << " * x " << symb << " " << b << " = 0" << endl;
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
        cout << "���������� ���������: a*x^(2) (+/-) b*x (+/-) c = 0" << endl;
        cout << "������� a: ";
        cin >> a;
        system("cls");
        cout << "���������� ���������: " << a << "*x^(2) (+/-) b * x (+/-) c = 0" << endl;
        cout << "������� ������ ��������(+/-): ";
        cin >> firstSymb;
        if (firstSymb != '+' && firstSymb != '-')
            firstSymb = '+';
        system("cls");
        cout << "���������� ���������: " << a << "*x^(2) " << firstSymb << " b*x (+/ -) c = 0" << endl;
        cout << "������� b: ";
        cin >> b;
        system("cls");
        cout << "���������� ���������: " << a << "*x^(2) " << firstSymb << " " << b << "*x (+/ -) c = 0" << endl;
        cout << "������� ������ ��������(+/-): ";
        cin >> secondSymb;
        if (secondSymb != '+' && secondSymb != '-')
            secondSymb = '+';
        system("cls");
        cout << "���������� ���������: " << a << "*x^(2) " << firstSymb << " " << b << "*x " << secondSymb << " c = 0" << endl;
        cout << "������� c: ";
        cin >> c;
        system("cls");
        cout << "���������� ���������: " << a << "*x^(2) " << firstSymb << " " << b << "*x " << secondSymb << " " << c << " = 0" << endl;
        if (firstSymb == '-')
            b *= -1;
        if (secondSymb == '-')
            c *= -1;
        QuadraticEquation qe(a, b, c);
        qe.solve();
        system("pause");
    }
}