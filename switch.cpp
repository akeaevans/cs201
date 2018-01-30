// switch.cpp
// Glenn G. Chappell
// 29 Jan 2018
//
// For CS 201 Spring 2018
// Switch-Statement Example

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main()
{
    // Input an integer n
    int n;
    cout << "Type an integer: ";
    cin >> n;

    // Explanatory output
    cout << endl;
    cout << "Now we do something based on the entered value.";
    cout << " (See the source code.)" << endl;
    cout << endl;

    // Example switch: do something based on n.
    // Note: for a nonnegative integer n, n%10 is the ones digit of n.
    cout << "You typed a number ending with ";
    switch (n%10)
    {
    case 1:
    case 2:
        cout << "one or two.";
        break;
    case 3:
        cout << "three.";
        break;
    default:
        cout << "some digit other than one, two, or three.";
        break;
    }
    cout << endl;
    cout << endl;

    // Wait for user
    cout << "PRESS ENTER ";
    while (cin.get() != '\n') ;
    while (cin.get() != '\n') ;

    return 0;
}

