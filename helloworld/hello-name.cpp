// We first import some useful libraries
#include <iostream>
#include <string>

// This is to avoid having to write std:: in many places (e.g. std::cout)
using namespace std;

// And here is the main entry point of our program
int main()
{
    // We declare a variable "name" of type "string"
    // We initialise it to the empty string.
    // Initialising variable is not required but it is a good practice.
    string name = "";
    
    // We now read a string from the console input
    // Note that the string will not contain separators (blank spaces, tabs, new lines)
    cin >> name;

    // We send the desired string to the console output
    cout << "Hello " << name << "!" << endl;
    
    // You may notice that we use endl here instead of "\n"
    // They are not exactly the same thing, but both are equivalent for our purposes
    
    // We finally return 0 to signal that everything went well
    return 0;
}