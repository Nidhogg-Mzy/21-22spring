#include <list> /* File: c-add10.cpp */
#include <vector>
#include <algorithm>
#include "init.h"

inline int add_10(int x) { return x + 10; }

int main()
{
    list<int> x; my_initialization(x);
    vector<int> y(x.size());

    transform( x.begin(), x.end(), y.begin(), add_10 );
    copy(y.begin(), y.end(), ostream_iterator<int>( cout, "\n") );
    cout << endl;
}
