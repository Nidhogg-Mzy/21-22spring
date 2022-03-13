#include <iostream>     /* File: stl-example.cpp */
using namespace std;
#include <vector>
#include <string>
#include <iterator>
int main() {
    vector<string> people; string name;
    while (cin >> name) people.push_back(name);

    cout << "With duplicates:" << endl;
    copy(people.begin(), people.end(),
         ostream_iterator<string>(cout, "\n"));

    vector<string> friends;
    copy( people.begin(), people.end(), back_inserter(friends) );
    sort( friends.begin(), friends.end() );

    cout << endl << "Without duplicates:" << endl;
    unique_copy( friends.begin(), friends.end(),
                 ostream_iterator<string>(cout, "\n") );
    return 0;
}
