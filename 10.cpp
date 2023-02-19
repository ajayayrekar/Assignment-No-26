/* 10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.*/

#include <iostream>
using namespace std;

class StaticCount {
    private:
        static int count;

    public:
        void incrementCount() {
            count++;
        }

        void displayCount() {
            cout << "Value of count: " << count << endl;
        }
};

int StaticCount::count = 0;

int main() {
    StaticCount s;
    s.incrementCount();
    s.incrementCount();
    s.incrementCount();
    s.displayCount();
    return 0;
}


