#include <list> /* File: c-sum.cpp */
#include <algorithm>
#include "init.h"

int total = 0;
inline int sum(int value) { return total += value; }

int main()
{
    list<int> x; my_initialization(x);
    for_each( x.begin(), x.end(), sum );
    cout << "Sum = " << total << endl;
}
