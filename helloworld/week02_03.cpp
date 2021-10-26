#include <iostream>

using namespace std;

// TIPS FOR C++


// define a static value, you can use it either as string or int

#define MAXIMUM 10

int main() {

    // int MAXIMUM = 10; // you cant do that since MAXIMUM is coppied as 10, meaning int 10 = 10; ERROR

    // MAXIMUM is defined as 10 earlier as #define
    // postfix i++ same as i = i + 1
    

    for(int i = 0; i < MAXIMUM; i++) {

        // Conditional expression, instead of if/else statement you use "condition ? whenTrue : whenFalse"

        string evenOrOdd = ((i % 2) == 0) ? "even" : "odd";

        /*
        if((i % 2 ) == 0) {
            evenOrOdd = "even";
        } else {
            evenOrOdd = "odd";
        }
        */

        cout << "The number " << i << " is " << evenOrOdd << endl;
    }


    return 0;
   
}