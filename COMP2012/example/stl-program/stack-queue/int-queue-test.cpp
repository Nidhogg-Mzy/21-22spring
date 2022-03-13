#include <iostream>     /* File: int-queue-test.cpp */
#include <queue>
using namespace std;

void print_queue_info(const queue<int>& a) {
    cout << "\nNo. of data currently on the queue = " << a.size() << endl;
    if (!a.empty()) {
        cout << "First: " << a.front() << "\nLast: " << a.back() << endl; }
}
int main()
{
    queue<int> a; print_queue_info(a);
    a.push(4);    print_queue_info(a);
    a.push(15);   print_queue_info(a);
    a.push(26);   print_queue_info(a);
    a.push(37);   print_queue_info(a);
    a.pop();      print_queue_info(a);
    a.push(48);   print_queue_info(a);
    a.push(59);   print_queue_info(a);
    a.pop();      print_queue_info(a);
    a.pop();      print_queue_info(a);
    a.pop();      print_queue_info(a);
    a.pop();      print_queue_info(a);
    a.pop();      print_queue_info(a); return 0; 
}
