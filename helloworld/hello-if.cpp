// We first import some useful libraries
#include <iostream>
#include <string>

// This is to avoid having to write std:: in many places (e.g. std::cout)
using namespace std;

// And here is the main entry point of our program
int main()
{
    // We declare two variables of type "int" (integer)
    // and give them initial values (this is not necesary but it is a good practice)
    int x = 0;
    int y = 0;
    
    // We read two integers from the console input
    // Note that the program will automatically get rid of separators (blank spaces, tabs, new lines)
    cin >> x;
    cin >> y;
    
    // We use an if-then-else construct to decide what to print
    if (x == y) {
        cout << x << " is equal to " << y << endl;
    } else if (x > y) {
        cout << x << " is bigger than " << y << endl;
    } else {
        cout << x << " is smaller than " << y << endl;
    }
    
    // We finally return 0 to signal that everything went well
    return 0;
}