#include "Rational.h"
#include <iostream>
#include <cassert>


int Rational::gcd(int x, int y) {
    while (x > 0 && y > 0) {
        if (x > y) {
            x %= y;
        }
        else {
            y %= x;
        }
    }
    return x + y;
}
void Rational::normalize() {
    if (numerator != 0) {
        int NOD = gcd(numerator, denominator);
        numerator = numerator / NOD;
        denominator = denominator / NOD;
    }
}
Rational::Rational() {
    numerator = 0;
    denominator = 1;
}
Rational::Rational(int n, int d) {
    assert(d != 0);
    numerator = n;
    denominator = d;
    normalize();
}
Rational::Rational(int n) {
    numerator = n;
    denominator = 1;
}
int Rational::getNumerator() {
    return numerator;
}
void Rational::setNumerator(int n) { 
    numerator = n;
    normalize();
}
int Rational::getDenominator() {
    return denominator;
}
void Rational::setDenominator(int d) {
    assert(d != 0);
    denominator = d;
    normalize();
}
void Rational::print() {
    if (numerator == 0 || denominator == 1) {
        std::cout << numerator << std::endl;
    }
    if (numerator > denominator) {
        int natural = numerator / denominator;
        numerator -= natural * denominator;
        std::cout << natural << " " << numerator << "/" << denominator << std::endl;
    }
    else {
        std::cout << numerator << "/" << denominator << std::endl;
    }
}