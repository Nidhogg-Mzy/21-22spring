#include <iostream>     /* File: print-int-array.cpp */
using namespace std;

int main()
{
    const int LENGTH = 5;
    int x[LENGTH];

    for (int j = 0; j < LENGTH; ++j)
        x[j] = j;

    // x_end points to a non-existing element just beyond the array
    const int* x_end = &x[LENGTH]; 

    for (const int* p = x; p != x_end; ++p)
        cout << *p << endl;

    return 0;
}
