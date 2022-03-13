#include <iostream>     /* File: find-iterator-test.cpp */
using namespace std;
#include <vector>

int main()
{
    const int SIZE = 10; vector<int> x(SIZE);
    for (int i = 0; i < x.size(); i++)
        x[i] = 2 * i;

    while (true) 
    {
        cout << "Enter number: "; int num; cin >> num;
        vector<int>::iterator position = find(x.begin(), x.end(), num);

        if (position == x.end()) 
            cout << "Not found\n";
        else if (++position != x.end())
            cout << "Found before the item " << *position << '\n';
        else
            cout << "Found as the last element\n"; 
    }

    return 0;
}    
