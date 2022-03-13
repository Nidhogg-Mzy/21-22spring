#include <iostream>     /* File: find-gt350.cpp */ 
using namespace std;
#include <vector> 
#include <algorithm>
#include "init.h"

bool greater_than_350(int value) { return value > 350; }

int main()
{
    vector<int> x; 
    my_initialization(x, 100);

    vector<int>::const_iterator p =
        find_if( x.begin(), x.end(), greater_than_350 );

    if (p != x.end())
        cout << "Found element: " << *p << endl;

    return 0;
}
