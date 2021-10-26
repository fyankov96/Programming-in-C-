// We first import some useful libraries
#include <iostream>
#include <math.h>

using namespace std;

int main (){

    double n, i;
    double s = 1;
    double pi = 0;
    cin >> n;
    for (i = 1; i < (n*2); i += 2)
    {
        pi = pi + s * (4/i);
        s = -s;
    }
    cout<< pi;
    
}

