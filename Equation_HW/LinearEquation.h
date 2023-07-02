#pragma once
#include "Equation.h"
#include <iostream>
using namespace std;
class LinearEquation : public Equation
{
public:
	LinearEquation(double a, double b) : Equation{ a, b } {};
	void solve() override;
};

