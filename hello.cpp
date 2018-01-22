// hello.cpp
// Glenn G. Chappell
// 19 Jan 2018
//
// For CS 201 Spring 2018
// Hello-World Example

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main()
{
    // Print something
    cout << "Hello, world!" << endl;
    cout << "I hope you're having ";
    cout << "a great day!" << endl;
    cout << endl;

    // Wait for user
    cout << "PRESS ENTER ";
    while (cin.get() != '\n') ;

    return 0;
}

