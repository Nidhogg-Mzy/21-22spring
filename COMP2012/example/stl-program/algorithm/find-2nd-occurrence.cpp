#include <iostream>     /* File: find-2nd-occurrence.cpp */
using namespace std;
#include <vector>
#include <algorithm>
#include "init.h"

int main()
{
    const int search_value = 341;
    vector<int> x; 
    my_initialization(x, 100);

    vector<int>::iterator p = find(x.begin(), x.end(), search_value);

    if (p != x.end())	// Value found for the first time!
    {
        p = find(++p, x.end(), search_value); // Search again
        if (p != x.end())
            cout << search_value << " appears after " << *--p << endl;
    }
    return 0;
}
