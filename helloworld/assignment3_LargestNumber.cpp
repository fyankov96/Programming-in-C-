// We first import some useful libraries
#include <iostream>
#include <math.h>

using namespace std;

int main (){

    int arraySize;

    cin >> arraySize;

    int *data = new int[arraySize];

    int biggest = -1;

    int biggestPosition = 0;

    for (int counter = 0; counter < arraySize; counter++){

        int currentNumber;

        cin >> currentNumber;

        data[counter] = currentNumber;

        if(currentNumber > biggest){
            biggest = currentNumber;
            biggestPosition = counter;
        } 

    

    }

    for (int counter = 0; counter < arraySize; counter++){
        if(counter == biggestPosition) {
            cout << "*" << biggest << "* ";
        }
        else {
            cout << data[counter] << " ";
        }
    
    }

    delete[] data;

}