// arrayptrs.cpp  INCOMPLETE
// Glenn G. Chappell
// 11 Apr 2018
//
// For CS 201 Fall 2018
// Programming with Arrays and Pointers

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


// printPointerStuff
// A silly little function. Given two pointers to items in a common int
// array, print
//   (1) the distance from ip1 to ip2, and
//   (2) the value of the array item lying halfway between those pointed
//       to by the two pointers.
// If the distance between the two pointers is odd, then we allow
// fudging on "halfway" above: *almost* exactly halfway.
void printPointerStuff(int * ip1, int * ip2)
{
    cout << "Distance from ip1 to ip2: ";
    auto dist = 999999;  // DUMMY; WRITE THIS!!!
    cout << dist << endl;

    cout << "Item halfway between those pointed to by ip1, ip2: ";
    cout << 888888;      // DUMMY; WRITE THIS!!!
    cout << endl << endl;
}


// Main Program
// Make an array and call printPointerStuff multiple times with pointers
// to items in the array.
int main()
{
    // Make an array and stick stuff in it
    const int ARRAY1_SIZE = 100;
    int array1[ARRAY1_SIZE];
    for (int i = 0; i < ARRAY1_SIZE; ++i)
        array1[i] = 1000 + i*i;

    // Make some calls involving the above array & pointers
    printPointerStuff(&(array1[2]),  &(array1[4]));
    printPointerStuff(&(array1[10]), &(array1[90]));
    printPointerStuff(&(array1[5]),  &(array1[68]));

    // Quit when user hits Enter
    cout << "Press ENTER to quit ";
    while (cin.get() != '\n') ;
    cout << endl;
}

