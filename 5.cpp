/*5.Define a class Date and write a program to Display Dateand initialise date object
using Constructors. */

#include<iostream>
using namespace std;

class Date {
    int day, month, year;

    public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    void showDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d(19, 2, 2023);
    d.showDate();
    return 0;
}
