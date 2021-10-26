#include "vector2d.h"
#include <cmath>
#include <iostream>

using namespace std;

v2d::v2d(double a, double b)
{
    this->x = a;
    this->y = b;
}

v2d::v2d(const v2d &v)
{
    this->x = v.x;
    this->y = v.y;
}

v2d::~v2d()
{
    // Write your code here
}

v2d &v2d::operator=(const v2d &v)
{
    this->x = v.x;
    this->y = v.y;

    return *this;
}

v2d &v2d::operator+(const v2d &v)
{
    double temp1, temp2;

    temp1 = this->x + v.x;
    temp2 = this->y + v.y;

    this->x = temp1;
    this->y = temp2;

    return *this;
}

double v2d::operator*(const v2d &v)
{
    double temp1, temp2, finalResult;

    temp1 = this->x * v.x;
    temp2 = this->y * v.y;

    finalResult = temp1 + temp2;

    return finalResult;
}

v2d &v2d::operator*(double k)
{
    double temp1, temp2;

    temp1 = k * this->x;
    temp2 = k * this->y;

    this->x = temp1;
    this->y = temp2;

    return *this;
}

double v2d::length()
{
    double squareRoot;

    squareRoot = sqrt((*this) * (*this));

    return squareRoot;
}
