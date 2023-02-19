/*6.6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details.*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    int age;
    string address;
public:
    // constructor to initialize member variables
    Student(string n, int r, int a, string ad) {
        name = n;
        roll_no = r;
        age = a;
        address = ad;
    }
    // member function to display student details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    // create object of Student class using constructor
    Student s("John Doe", 1234, 18, "1234 Main Street");
    // call display() function to display student details
    s.display();
    return 0;
}


