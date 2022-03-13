#include "add.h" /* File: add.cpp */
#include "init.h"

int main()
{
    list<int> x; my_initialization(x);
    vector<int> y(x.size());

    transform( x.begin(), x.end(), y.begin(), Add(10) );
    for_each( y.begin(), y.end(), Print(cout) );
    cout << endl;
}
