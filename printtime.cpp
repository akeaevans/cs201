// printtime.cpp  INCOMPLETE
// Glenn G. Chappell
// 20 Apr 2018
//
// For CS 201 Fall 2018
// Time of Day Class & Program

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


// Class Time
// Holds a time of day: hours, minutes, seconds. Can print its stored
// time in a nice format.
class Time {

// ***** Time: constructors *****
public:

    // TODO: Put something here!

// ***** Time: general public member functions *****
public:

    void print() const
    {
        cout << "SOMETHING NEEDS TO GO HERE";  // DUMMY
        // TODO: Write this!
    }

// ***** Time: data members *****
private:

    int _hr;   // Hours past midnight
    int _min;  // Minutes past the hour
    int _sec;  // Seconds past the minute

};  // End class Time


int main()
{
    // Print header
    cout << "Here are some times:" << endl;
    cout << endl;

    // Make a Time object; print it
    Time t1;
    cout << "Time #1: [";
    t1.print();
    cout << "]" << endl;
    cout << endl;

    // Wait for user
    cout << "PRESS ENTER to quit ";
    while (cin.get() != '\n') ;
}

