/*8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.*/

#include <iostream>
using namespace std;

class Bank {
    private:
        float principal, rate, year, si;

    public:
        Bank(float p, float r, float y) {
            principal = p;
            rate = r;
            year = y;
        }

        void calculateSI() {
            si = (principal * rate * year) / 100;
        }

        void displaySI() {
            cout << "Principal: " << principal << endl;
            cout << "Rate of Interest: " << rate << "%" << endl;
            cout << "Year: " << year << endl;
            cout << "Simple Interest: " << si << endl;
        }
};

int main() {
    Bank b(10000, 8.5, 2);
    b.calculateSI();
    b.displaySI();
    return 0;
}

