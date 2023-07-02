#pragma once
#include "Equation.h"
#include <iostream>
using namespace std;
class QuadraticEquation : public Equation
{
	double c;
public:
	QuadraticEquation(double a, double b, double c) : Equation{ a, b }, c{ c } {};
	void solve() override;
};

