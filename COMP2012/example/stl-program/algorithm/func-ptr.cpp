#include <list> /* File: func-ptr.cpp */
#include <vector>
#include <algorithm>
#include "init.h"

inline int multiply_10(int x) { return x * 10; }
inline int multiply_100(int x) { return x * 100; }

int main()
{
    const int MULTIPLY_10 = 1;
    const int MULTIPLY_100 = 2;
    int  which_function;
    int (*f)(int);

    list<int> x; my_initialization(x);
    vector<int> y(x.size());

    cout << "Enter " << MULTIPLY_10 << " for multiply_10(), and " 
         << MULTIPLY_100 << " for multiply_100(): ";
    cin >> which_function;
    f  = (which_function == MULTIPLY_10) ? multiply_10 : multiply_100;
        
    transform( x.begin(), x.end(), y.begin(), f );
    copy(y.begin(), y.end(), ostream_iterator<int>( cout, "\n") );
    cout << endl;
}
