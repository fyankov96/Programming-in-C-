#include <iostream>
#include <cmath>

using namespace std;


Rectangle::Rectangle(double a, double b){
    this->x = a;
    this->y = b;
}


Square::Square(double a){
    this->z = a;
}

Circle::Circle(double a){
    this->i = a;
}

double Rectangle::area(){
    double area;

    area = this->x * this->y;

    return area;
}

double Rectangle::perimeter(){
    double perimeter;

    perimeter = 2 * (this->x + this->y);

    return perimeter;
}

double Square::area(){
    double area;

    area = this->z * this->z;

    return area;
}

double Square::perimeter(){
    double perimeter;

    perimeter = 4 * this->z;

    return perimeter;
}

double Circle::area(){
    double pi;
    double area;

    pi = M_PI;

    area = pi * (this->i * this->i);

    return area;

}

double Circle::perimeter(){
    double pi;
    double perimeter;

    pi = M_PI;

    perimeter = 2 * pi * this->i;

    return perimeter;


}