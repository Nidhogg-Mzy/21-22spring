#include <list>         /* File: fo-add.h */
#include <vector>
#include <algorithm>

class Add
{
  private:
    int data;
  public:
    Add(int i) : data(i) { }
    int operator()(int value) { return value + data; }
};

class Print
{
  private:
    ostream& os;
  public:
    Print(ostream& s) : os(s) { }
    void operator()(int value) { os << value << " "; }
};
