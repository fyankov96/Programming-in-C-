#ifndef _shapes_
#define _shapes_

class Shape {

public:


private:

};

class Rectangle : public Shape {
public:

    Rectangle(double a, double b);

    double area();

    double perimeter();

    double height();

    double width();

    double rotate();

private:

    double x;
    double y;
};

class Square : public Shape {

public:

    Square(double a);

     double area();

    double perimeter();

    double height();

    double width();

    double rotate();

private:

    double z;
};

class Circle : public Shape {

public:

    Circle(double a);

     double area();

    double perimeter();

    double height();

    double width();

    double rotate();

private:

    double i;
};

 
#include "shapes.hpp"

#endif /* SHAPES_H_ */