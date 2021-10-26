// We first import some useful libraries
#include <iostream>
#include <math.h>

using namespace std;

int main (){

    int counter[1000] = {0};

    int num;

    while(true) {

    cin >> num;

    if(num == 0){
        return 0;
    }

    cout << counter[num-1] << endl;

    counter[num-1]++;

    }
}

