#include "LinearEquation.h"

void LinearEquation::solve()
{
	if (a == 0)
		if (b == 0)
			cout << "������ ��������� �������� ����� �����" << endl;
		else
			cout << "������ ���������. ��������� �� ������ ������" << endl;
	else
		cout << "x = " << -b / a;
}
