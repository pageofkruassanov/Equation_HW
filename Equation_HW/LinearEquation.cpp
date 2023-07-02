#include "LinearEquation.h"

void LinearEquation::solve()
{
	if (a == 0)
		if (b == 0)
			cout << "Корнем уравнения является любое число" << endl;
		else
			cout << "Пустое множество. Уравнение не умиеет корней" << endl;
	else
		cout << "x = " << -b / a;
}
