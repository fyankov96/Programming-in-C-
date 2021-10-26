// We first import some useful libraries
#include <iostream>
#include <math.h>

using namespace std;

int main (){


    int n;
    
    cin >> n;

    int first=0;

    int second = 0;
    
    bool sorted = true;

    while(cin >> second && second >= 0){

            if(!(second >= first))
            {
                sorted = false;
            }

        first = second;
        
    }

    if(sorted) {
        cout << "SORTED";
    } else {
        cout << "UNSORTED";
    }

}