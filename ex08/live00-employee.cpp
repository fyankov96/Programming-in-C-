#include <iostream>
#include <string>

using namespace std;

// TODO: add class definitions to match the code below

class Employee
{
public:
    string name;
};

class HourlyEmployee : public Employee
{
public:
    HourlyEmployee(string name, double fee) { this->name = name, this->hourlyFee = fee; }
    double hourlyFee;
};

class CommissionedEmployee : public Employee
{
public:
    CommissionedEmployee(string name) { this->name = name; }
    double commision;
};

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee(string name) { this->name = name; }
    double salary = 1000;
};

int main(void)
{
    HourlyEmployee h = HourlyEmployee("Alice", 1001);
    CommissionedEmployee c = CommissionedEmployee("Bob");
    SalariedEmployee s = SalariedEmployee("Carol");

    cout << "The employee names are: ";
    cout << h.name << ", " << c.name << ", " << s.name << endl;

    cout << "The salary of " << s.name << " is " << s.salary << endl;

    cout << "The salary of " << h.name << " is " << h.hourlyFee << endl;

    return 0;
}
