/*9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/

#include <iostream>
using namespace std;

class Bill {
    private:
        string name;
        int units;
        float amount;

    public:
        void get() {
            cout << "Enter customer name: ";
            cin >> name;
            cout << "Enter units consumed: ";
            cin >> units;
        }

        void calculateBill() {
            if (units <= 100) {
                amount = units * 1.20;
            } else if (units <= 200) {
                amount = 100 * 1.20 + (units - 100) * 2;
            } else {
                amount = 100 * 1.20 + 100 * 2 + (units - 200) * 3;
            }
        }

        void displayBill() {
            cout << "Name: " << name << endl;
            cout << "Units consumed: " << units << endl;
            cout << "Amount to be paid: Rs. " << amount << endl;
        }
};

int main() {
    Bill b;
    b.get();
    b.calculateBill();
    b.displayBill();
    return 0;
}
