// vector.cpp
// Glenn G. Chappell
// 14 Feb 2018
//
// For CS 201 Spring 2018
// Using a vector

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <vector>
using std::vector;


int main()
{
    vector<int> data;  // Our dataset

    // Create the dataset, treating the vector as a variable-sized
    // container.

    // Dataset will hold squares of integers 0, 1, ....
    for (auto i = 0; i < 15; ++i)
    {
        data.push_back(i*i);
    }

    // Process the dataset, treating the vector as a fixed-size
    // container.

    cout << "Squares:" << endl;
    for (int i = 0; i < int(data.size()); ++i)
    {
        cout << data[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Wait for user
    cout << "PRESS ENTER to quit ";
    while (cin.get() != '\n') ;
}

