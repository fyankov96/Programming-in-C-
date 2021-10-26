// We first import some useful libraries
#include <iostream>

// This is to avoid having to write std:: in many places (e.g. std::cout)
using namespace std;

// And here is the main entry point of our program
int main()
{
    int n = 0; // Number of values to read and sum
    int counter = 0; // Will be used to count how many values we have read
    float value = 0.0; // The last value read from the user
    float total = 0.0; // Will store the sum total

    // We read n, i.e., the number of values we will read and sum
    cin >> n;

    // Repeat the following loop n times
    while (counter < n) {
        // Note: separators (blank spaces, tabs, new lines) separate values
        cin >> value;
        total = total + value;
        counter = counter + 1; // Don't forget to increment the counter!
    }

    // Here is an alternative solution using a 'for' loop
    // for (counter = 0; counter < n; counter = counter + 1) {
    //     cin >> value;
    //     total = total + value;
    // }

    // Now we simply output the result of the sum
    cout << total << endl;
    
    // We finally return 0 to signal that everything went well
    return 0;
}