#include "QuadraticEquation.h"

void QuadraticEquation::solve()
{
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "����� ���������: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "������ ���������: x = " << x << endl;
    }
    else {
        cout << "��������� �� ����� ������" << endl;
    }
}
