#include <iostream>     /* File: find-test.cpp */
using namespace std;
typedef int* Int_Iterator;

int main()
{
    const int SIZE = 10; int x[SIZE];
    for (int i = 0; i < SIZE; i++)
        x[i] = 2 * i;

    Int_Iterator begin = x; Int_Iterator end = &x[SIZE];
    while (true)
    {
        cout << "Enter number: "; int num; cin >> num;
        Int_Iterator position = find(begin, end, num);

        if (position == end)
            cout << "Not found\n";
        else if (++position != end)
            cout << "Found before the item " << *position << '\n';
        else
            cout << "Found as the last element\n"; 
    } 
    return 0;
}
