#include <iostream>
#include <string>
#include "ex06.h"

using namespace std;

int main(void)
{
    int num1, num2;
    string op;
    int num3, num4;

    while (cin)
    {

        cin >> num1;
        cin >> op;
        cin >> num2;
        cin >> op;

        fraction m(num1, num2);

        if (op == "+")
        {

            cin >> num3;
            cin >> op;
            cin >> num4;
            
            m.add(fraction(num3, num4));
            m.display();
        }

        if (op == "*")
        {

            cin >> num3;
            cin >> op;
            cin >> num4;

            m.mult(fraction(num3, num4));
            m.display();
        }

        if (op == "div")
        {

            cin >> num3;
            cin >> op;
            cin >> num4;

            m.div(fraction(num3, num4));
            m.display();
        }
    }
    return 0;
}