/*2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time) */

#include<iostream>
using namespace std;

class Time {
    int h, m, s;

    public:
    void setTime(int hours, int minutes, int seconds) {
        h = hours;
        m = minutes;
        s = seconds;
    }
    void showTime() {
        cout << h << ":" << m << ":" << s << endl;
    }
    void normalize() {
        if(s >= 60) {
            m += s/60;
            s = s%60;
        }
        if(m >= 60) {
            h += m/60;
            m = m%60;
        }
    }
    Time add(Time t) {
        Time result;
        result.s = s + t.s;
        result.m = m + t.m;
        result.h = h + t.h;
        result.normalize();
        return result;
    }
};

int main() {
    Time t1, t2, t3;
    t1.setTime(5, 40, 15);
    t2.setTime(2, 30, 45);
    t3 = t1.add(t2);
    t3.showTime();
    return 0;
}
