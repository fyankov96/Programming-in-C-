#ifndef _shapes_
#define _shapes_

class Shape
{

public:
    virtual double area() = 0;

    virtual double perimeter() = 0;

    virtual double height() = 0;

    virtual double width() = 0;

    virtual void rotate(){

    };
};

class Rectangle : public Shape
{
public:
    Rectangle(double h, double w);

    double height();

    double width();

    double area();

    double perimeter();

    void rotate();

private:
    double w;
    double h;
};

class Square : public Shape
{

public:
    Square(double s);

    double height();

    double width();

    double perimeter();

    double area();

private:
    double l;
};

class Circle : public Shape
{

public:
    Circle(double r);

    double height();

    double width();

    double area();

    double perimeter();

private:
    double r;
};

//#include "shapes.cpp"

#endif /* SHAPES_H_ */