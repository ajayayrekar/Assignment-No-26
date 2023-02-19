/*7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.*/

#include <iostream>
using namespace std;

class Box {
private:
    float length;
    float breadth;
    float height;
public:
    // constructor to initialize member variables
    Box(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }
    // member function to calculate volume of box
    float volume() {
        return length * breadth * height;
    }
};

int main() {
    float l, b, h;
    // get input from user for length, breadth and height of box
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;
    cout << "Enter height: ";
    cin >> h;
    // create object of Box class using constructor
    Box b1(l, b, h);
    // calculate volume using volume() function and display
    cout << "Volume of box: " << b1.volume() << endl;
    return 0;
}
