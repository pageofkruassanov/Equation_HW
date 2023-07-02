#pragma once
class Equation
{
protected:
	double a;
	double b;
public:
	Equation(double a, double b) : a{ a }, b{ b } {};
	virtual void solve() = 0;
};

