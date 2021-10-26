// We first import some useful libraries
#include <iostream>
#include <string>

// This is to avoid having to write std:: in many places (e.g. std::cout)
using namespace std;

// And here is the main entry point of our program
int main()
{
 
    // We declare three variables of type "double"
    // We initialise them to value 0.0.
    // Initialising variables is not required but it is a good practice.
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
    
    // We read the three values
    // Note that separators (blank spaces, tabs, new lines) are used to identify values
    cin >> x;
    cin >> y;
    cin >> z;
    
    // Now we simply output the result of our arithmetic expression
    cout << (x + y) - z << endl;
    
    // We finally return 0 to signal that everything went well
    return 0;
}