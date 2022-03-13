#include <iostream>     /* File: iostream-iterators.cpp */
using namespace std;
#include <iterator> 
#include "fo-add.h"

int main()
{
    list<int> x; vector<int> y;

    // An istream iterator only accepts int
    istream_iterator<int> input_iterator(cin); // Ready for the first input
    x.push_back(*input_iterator); // Equivalent to: cin >> x[0]

    // Actual read occurs when it is incremented, not when dereferenced
    for (int j = 1; j < 5; ++j)
    { ++input_iterator; x.push_back(*input_iterator); } // cf. cin >> x[j]

    // Copy x to y after adding 77 to x's items
    // back_insert(y) create an iterator for y to do insertion
    transform(x.begin(), x.end(), back_inserter(y), Add(77) );

    // Print to an ostream iterator linked to cout with newline separator
    copy(y.begin(), y.end(), ostream_iterator<int>(cout, "\n"));
    return 0;
}
