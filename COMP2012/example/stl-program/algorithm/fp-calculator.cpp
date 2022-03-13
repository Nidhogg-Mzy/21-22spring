#include <iostream>     /* File: fp-calculator.cpp */
using namespace std;
double add(double x, double y) { return x+y; }
double subtract(double x, double y) { return x-y; }
double multiply(double x, double y) { return x*y; }
double divide(double x, double y) { return x/y; } // No error checking

int main()
{
    double (*f[])(double x, double y) // Array of function pointers
        = { add, subtract, multiply, divide };
    
    int operation; double x, y;
    cout << "Enter 0:+, 1:-, 2:*, 3:/, then 2 numbers: ";
    while (cin >> operation >> x >> y) 
    {
        if (operation >= 0 && operation <= 3)
            cout << f[operation](x, y) << endl; // Call + - * /
        cout << "Enter 0:+, 1:-, 2:*, 3:/, then 2 numbers: ";
    }
    return 0;
}

    

    
