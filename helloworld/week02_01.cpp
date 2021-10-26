#include <iostream>

using namespace std;

void printArray(int n, int array[]) {
    cout << "This array contains: ";
    for(int i=0; i < n ; i = i +1 ) {
        cout  << array[i] << " ";

    }
    cout << endl;
}

int main() {
 
    int aGiven[] = {1, 2, 3};
    printArray(3, aGiven);

    int aLengthComp[3]; // Uninitialised!
    cout << "Please enter the 3 array values: ";
    for(int i = 0; i < 3; i = i+1) {
        cin >> aLengthComp[i];
    }
    printArray(3, aLengthComp);


    cout << "Please enter the array size: ";
    int n;
    cin >> n;


    // This is NOT standard C++!
    // int aLenghtRun[n];

    // This is the RIGHT way, use a pointer and remember to delete it afterwards

    int *aLengthRun = nullptr; // A pointer to an integer, nullptr means that the pointer points to null 
    // and will be assigned later -> row 40
    // you have to delete all the memory that is created with "new"
    aLengthRun = new int[n];

    cout << "Please insert the " << n << " values:";

    for(int i = 0; i < n; i = i + 1) {
        cin >> aLengthRun[i];
    }

    printArray(n, aLengthRun);

    delete[] aLengthRun;

    return 0;
   
}