#include <iostream>
#include <cmath>
#include "shapes.h"

using namespace std;

Rectangle::Rectangle(double h, double w)
{
    this->h = h;
    this->w = w;
}

Square::Square(double l)
{
    this->l = l;
}

Circle::Circle(double r)
{
    this->r = r;
}

double Rectangle::height()
{
    return this->h;
}

double Rectangle::width()
{
    return this->w;
}

double Rectangle::area()
{
    return this->height() * this->width();
}

double Rectangle::perimeter()
{
    return 2 * (this->width() + this->height());
}

void Rectangle::rotate()
{
    double tmp;

    tmp = this->w;

    this->w = this->h;

    this->h = tmp;
}

double Square::width()
{
    return this->l;
}

double Square::height()
{
    return this->width();
}

double Square::area()
{
    return this->width() * this->height();
}

double Square::perimeter()
{
    return 4 * this->width();
}

double Circle::area()
{
    return M_PI * (this->r * this->r);
}

double Circle::perimeter()
{
    return 2 * M_PI * this->r;
}

double Circle::width()
{
    return this->r * 2;
}

double Circle::height()
{
    return this->width();
}