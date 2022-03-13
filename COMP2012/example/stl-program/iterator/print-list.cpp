#include <iostream>        /* File: print-list.cpp */
using namespace std;
#include <list>            // STL list

int main()
{
    list<int> x;                 // An int STL list
    for (int j = 0; j < 5; ++j)
        x.push_back(j);          // Append items to an STL list

    list<int>::const_iterator p; // STL list iterator
    for (p = x.begin(); p != x.end(); ++p)
        cout << *p << endl;

    return 0;
}
