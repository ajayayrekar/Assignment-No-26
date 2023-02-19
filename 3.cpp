/*3. Define a class Cube and calculate Volume of Cube and initialise it using constructor. */

#include<iostream>
using namespace std;

class Cube {
    int side;

    public:
    Cube(int s) {
        side = s;
    }
    int volume() {
        return side * side * side;
    }
};

int main() {
    Cube c(5);
    cout << "Volume of Cube: " << c.volume() << endl;
    return 0;
}
