#include <iostream>     /* File: decimal2binary.cpp */
#include <stack>
using namespace std;

int main()  // Convert +ve decimal number to binary number using a stack
{
    stack<int> a;
    int x, number;
    
    while (cin >> number)
    {
        // Conversion: decimal to binary
        x = number;
        do { a.push(x % 2); x /= 2; } while (x > 0);

        // Print a binary that is stored on a stack
        cout << number << " (base 10) = "; 
        while (!a.empty()) { cout << a.top(); a.pop(); }
        cout << " (base 2)" << endl;
    }
    
    return 0; 
}
