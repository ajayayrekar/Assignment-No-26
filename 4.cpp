/*4. Define a class Counter and Write a program to Show Counter using Constructor. */

#include<iostream>
using namespace std;

class Counter {
    static int count;

    public:
    Counter() {
        count++;
    }
    void showCount() {
        cout << "Counter: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    c1.showCount();
    c2.showCount();
    c3.showCount();
    return 0;
}
