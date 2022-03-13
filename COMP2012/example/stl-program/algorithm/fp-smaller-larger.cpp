#include <iostream>     /* File: fp-smaller-larger.cpp */
using namespace std;

int larger(int x, int y) { return (x > y) ? x : y; }
int smaller(int x, int y) { return (x > y) ? y : x; }

int main()
{
    int choice;
    cout << "Choice: (1 for larger; others for smaller): ";
    cin >> choice;

    int (*f)(int, int) = (choice == 1) ? larger : smaller;

    cout << f(3, 5) << endl;
    return 0;
}

    

    
