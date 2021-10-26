#include <iostream>

using namespace std;


int main() {

    // POINTERS and how they work
    
    int x =5;
    int y = 42;

    int *p = nullptr; // Uninitialized; nullptr -> points nowhere
    p = &x;
    cout << "The value of p is " << p << " and it points to value " << *p << endl;

    p = &y;
    cout << "The value of p is " << p << " and it points to value " << *p << endl;

    int a[] = {100, 101, 102};
    cout << "The value of a is " << a << " and it points to value " << a[0] << endl;

    p = a;
    cout << "The value of p is " << p << " and it points to value " << p[0] << endl;

    cout << "p[0]=" << p[0] << " p[1]=" << p[1] << " p[2]=" << p[2] << endl;
    return 0;
   
}