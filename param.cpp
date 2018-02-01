// param.cpp
// Glenn G. Chappell
// 31 Jan 2018
//
// For CS 201 Spring 2018
// Demo of Function Call, Parameters, String Length

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;


// printCount
// Print the given message the given number of times, each on a separate
// line.
void printCount(string message,  // The message to print
                int count)       // Number of times to print it
{
    for (int i = 0; i < count; ++i)
    {
        cout << message << endl;
    }
}


int main()
{
    // Set up data
    const string msg = "Zebras are zebraic.";  // Our message
    const int ct = 4;                          // Times to print it

    // Explanatory output
    cout << "The message: " << msg << endl;
    cout << "Length of the message: " << msg.size()
         << " (characters)" << endl;
    cout << "Number of times to print it: " << ct << endl;
    cout << endl;

    // Call the function, passing msg and ct
    printCount(msg, ct);
    cout << endl;

    // Wait for user
    cout << "PRESS ENTER ";
    while (cin.get() != '\n') ;

    return 0;
}

