#include <iostream>     /* File: fp-qsort.cpp */
using namespace std;
#include <cstdlib>      // Contain the qsort function declaration

// Prototype required by the generic qsort()
// Need to write a compare() for each data type + casting
int i_compare(const void* i, const void* j)
{ 
    return *(static_cast<const int*>(i)) - *(static_cast<const int*>(j));
}
int main()
{
    int data[] = { 3, 7, 5, 1, 9 };
    int num_data = sizeof(data)/sizeof(data[0]);
    qsort(data, num_data, sizeof(data[0]), i_compare); // Quicksort
    
    for (int j = 0; j < num_data; ++j)
        cout << data[j] << ' ';
    cout << endl;
    return 0;
}

    

    
