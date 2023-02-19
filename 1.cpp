/*1. 1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)*/

#include<iostream>
using namespace std;

class Complex {
    int a, b;

    public:
    void setData(int real, int img) {
        a = real;
        b = img;
    }
    void showData() {
        cout << a << " + " << b << "i" << endl;
    }
    Complex add(Complex c) {
        Complex result;
        result.a = a + c.a;
        result.b = b + c.b;
        return result;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.setData(3, 2);
    c2.setData(1, 7);
    c3 = c1.add(c2);
    c3.showData();
    return 0;
}
