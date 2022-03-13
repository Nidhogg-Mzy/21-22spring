#include <iostream>     /* File: fo-greater-than.cpp */
using namespace std;
#include <algorithm>
#include <vector>
#include "init.h"
#include "fo-greater-than.h"

int main()
{
    vector<int> x; my_initialization(x, 100);
    int limit = 0;

    while (cin >> limit)
    {
        vector<int>::const_iterator p = 
            find_if(x.begin(), x.end(), Greater_Than(limit)); // Call FO

        if (p != x.end())
            cout << "Element found: " << *p << endl;
        else
            cout << "Element not found!" << endl;
    }

    return 0;
}
