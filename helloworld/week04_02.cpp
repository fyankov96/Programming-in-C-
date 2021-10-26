#include <iostream>

using namespace std;

void swapWrong(int x, int y)
{
    //DOESNT WORK
    int tmp = x;
    x = y;
    y = tmp;
}

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int a = 1, b = 42;

    cout << "a=" << a << " , b=" << b << endl; // We get a = 1, b = 42

    swapWrong(a, b);

    swap(&a, &b);

    cout << "After swapping(); ";
    cout << "a=" << a << ", b" << b << endl; // We should get a = 42, b = 1

    return 0;
}
