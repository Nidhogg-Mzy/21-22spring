#include <iostream>     /* File: fo-count.cpp */
using namespace std;
#include <vector>
#include <algorithm>
#include "fo-greater-than.h"

int main()
{
    vector<int> x;
    for (int j = -5; j < 5; ++j)
        x.push_back(j*10);

    // Count how many items are greater than 10
    cout << count_if(x.begin(), x.end(), Greater_Than(10)) << endl;

    return 0;
}
