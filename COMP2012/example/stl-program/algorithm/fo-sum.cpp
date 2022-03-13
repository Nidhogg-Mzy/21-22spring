#include <iostream>     /* File: fo-sum.cpp */
using namespace std;
#include <list> 
#include <algorithm>

class Sum
{
  private:
    int sum;
  public:
    Sum() : sum(0) { }
    void operator()(int value) { sum += value; }
    int result() const { return sum; }
};

int main()
{
    list<int> x; 
    for (int j = 0; j < 5; ++j) x.push_back(j); // Initialize x
    Sum sum = for_each( x.begin(), x.end(), Sum() );
    cout << "Sum = " << sum.result() << endl; return 0;
}
