#include <iostream>     /* File: find-composer.cpp */
using namespace std;
#include <string>
#include <list>
#include <algorithm> 

int main()
{
    list<string> composers;
    composers.push_back("Mozart");
    composers.push_back("Bach");
    composers.push_back("Chopin"); 
    list<string>::iterator p =
        find(composers.begin(), composers.end(), "Bach");

    if (p == composers.end())
        cout << "Not found." << endl;
    else if (++p != composers.end())
        cout << "Found before: " << *p << endl;
    else
        cout << "Found at the end of the list." << endl;

    return 0;
}
