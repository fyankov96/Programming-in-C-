// We first import some useful libraries
#include <iostream>
#include <math.h>

using namespace std;

void primeFactors(int n) {
    while(n%2 == 0){
        cout << 2 << " * ";
        n = n / 2;
    }

    for(int i = 3; i <= sqrt(n); i = i+2){

        
        while (n%i == 0){

           cout << i;

            if (n%i == 0 && n != 11)
            {
            cout << " * ";
            }

             n = n/i;
            
        }

      
        
    }

    if (n>2)
    cout << n << endl;
}

int main()
{
    unsigned int n;
    cin >> n;
    primeFactors(n);
    return 0;
}