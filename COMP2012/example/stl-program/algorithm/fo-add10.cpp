#include <iostream>     /* File: fo-add10.cpp */ 
using namespace std;
#include "fo-add.h"

int main()
{
    list<int> x;
    for (int j = 0; j < 5; ++j)   // Initialize x
        x.push_back(j);

    vector<int> y(x.size());
    transform( x.begin(), x.end(), y.begin(), Add(10) );

    for_each( y.begin(), y.end(), Print(cout) );
    cout << endl;

    return 0;
}
