#ifndef EX06_H_

#define EX06_H_

#include <iostream>

using namespace std;

int gcd(int a, int b);

class fraction
{
private:
    // Internal representation of a fraction as two integers
    int numerator;
    int denominator;

public:
    // Class constructor
    fraction(int n, int d);

    // Methods to update the fraction
    void add(fraction f);
    void mult(fraction f);
    void div(fraction f);

    // Display method

    void display(void);
};

#endif