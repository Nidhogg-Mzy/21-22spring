#include <iostream>     /* File: fp-smaller-larger-lambda.cpp */
using namespace std;

int main()
{
    int choice;
    cout << "Choice: (1 for larger; others for smaller): ";
    cin >> choice;

    int (*f)(int, int);

    if (choice == 1)
        f = [] (int x, int y) { return (x > y) ? x : y; };
    else
        f = [] (int x, int y) { return (x > y) ? y : x; };

    cout << f(3, 5) << endl;
    return 0;
}

    

    
