// insertion_sort.cpp  INCOMPLETE
// Glenn G. Chappell
// 27 Feb 2018
//
// For CS 201 Spring 2018
// Insertion Sort

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <vector>
using std::vector;
#include <algorithm>
using std::sort;
using std::equal;


// insertionSort
// Sort the given vector, in ascending order, in a stable manner, using
// Insertion Sort.
void insertionSort(vector<int> & data)
{
    for (int i = 1; i < int(data.size()); ++i)
    {
        // Items 0 .. i-1 are sorted.

        // Figure out which spot item i goes in
        int spot;  // Declare outside loop so we can use after loop
        for (spot = i; spot > 0; --spot)
        {
            if (data[i] >= data[spot-1])
                break;
        }
        // Item i should be at index "spot"

        // Put it there

        // WRITE THIS!!! ******************************
    }
}


// printVector
// Print the items in the given vector to cout, separated by blanks and
// followed by a newline.
void printVector(const vector<int> & data)
{
    for (int i = 0; i < int(data.size()); ++i)
    {
        if (i > 0)
            cout << " ";
        cout << data[i];
    }
    cout << endl;
}


// Main program
// Create a dataset, print it, sort it with insertionSort, and print it
// again. Results of sorting are tested; a message indicating correct or
// incorrect sort is printed.
int main()
{
    // Print header
    cout << "Testing Insertion Sort" << endl;
    cout << endl;

    // Create dataset & copy
    const vector<int> original {
        52, 12, 37, 34, 15, 10, 16, 26,
        18, 20, 29, 30, 34, 50, 16, 25
    };
    vector<int> vv = original;

    // Print unsorted
    cout << "Dataset (before sorting):" << endl;
    cout << "  ";
    printVector(vv);
    cout << endl;

    // Sort
    insertionSort(vv);

    // Print sorted
    cout << "Dataset (after sorting):" << endl;
    cout << "  ";
    printVector(vv);
    cout << endl;

    // Check whether sorting was done correctly
    vector<int> sorted = original;
    sort(sorted.begin(), sorted.end());
    bool success = (vv.size() == sorted.size())
                && (equal(vv.begin(), vv.end(), sorted.begin()));
    cout << "Dataset was sorted ";
    cout << (success ? "correctly" : "INCORRECTLY **********");
    cout << endl << endl;

    // Wait for user
    cout << "PRESS ENTER ";
    while (cin.get() != '\n') ;
}

