#include "QuadraticEquation.h"

void QuadraticEquation::solve()
{
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "Корень уравнения: x = " << x << endl;
    }
    else {
        cout << "Уравнение не имеет корней" << endl;
    }
}
