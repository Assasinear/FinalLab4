#pragma once
class Rational {
private:
	int numerator;
	int denominator;

	int gcd(int x, int y);
	void normalize();
public:
	Rational();
	Rational(int n, int d);
	Rational(int n);

	int getNumerator();
	void setNumerator(int n);
	int getDenominator();
	void setDenominator(int d);

	void print();
};

