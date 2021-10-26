#include "ex06.h"
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

fraction::fraction(int n, int d)
{
    this->numerator = n;
    this->denominator = d;
}

void fraction::add(fraction f)
{
    this->numerator = this->numerator * f.denominator + f.numerator * this->denominator;
    this->denominator = this->denominator * f.denominator;
}

void fraction::mult(fraction f)
{
    this->numerator = this->numerator * f.numerator;
    this->denominator = this->denominator * f.denominator;
}

void fraction::div(fraction f)
{
    this->numerator = this->numerator * f.denominator;
    this->denominator = this->denominator * f.numerator;
}

void fraction::display(void)
{
    int greatestCommonDivisor, final1, final2;

    greatestCommonDivisor = gcd(this->numerator, this->denominator);

    final1 = this->numerator / greatestCommonDivisor;
    final2 = this->denominator / greatestCommonDivisor;

    cout << final1 << " / " << final2 << endl;
}
