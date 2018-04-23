// student_main.cpp
// Glenn G. Chappell
// 23 Apr 2018
//
// For CS 201 Fall 2018
// Simple Main Program for Class Student
// Requires student.h, student.cpp


// *********************************************************************
// DO NOT MODIFY THIS FILE!
// *********************************************************************


#include "student.h"  // For class Student
#include "student.h"  // Oops! Twice. Hope this isn't a problem ...
#include <iostream>
using std::cout;
using std::endl;
using std::cin;


// Main program
// Create some Student objects and call their printInfo function.
int main()
{
    // Create student objects
    const Student s1("Iggy Abadaba");  // Name; id chosen automatically
    const Student s2("Frederica Figwig", 1234);      // Name & id
    const Student s3("Clifford Clumbergump", 2345);  // Name & id

    // Print info
    cout << "Info on first student:" << endl;
    s1.printInfo();
    cout << endl;

    cout << "Info on second student:" << endl;
    s2.printInfo();
    cout << endl;

    cout << "Info on third student:" << endl;
    s3.printInfo();
    cout << endl;

    // Wait for user
    cout << "Press ENTER to quit ";
    while (cin.get() != '\n') ;
}

