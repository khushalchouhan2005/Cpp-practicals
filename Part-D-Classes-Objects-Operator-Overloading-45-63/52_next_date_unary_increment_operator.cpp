#include <iostream>
using namespace std;

class Date {
    int day, month, year;

    bool leapYear() const {
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }

    int daysInMonth() const {
        int days[] = {31, leapYear() ? 29 : 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};
        return days[month - 1];
    }

public:
    void input() {
        cout << "Enter date (day month year): ";
        cin >> day >> month >> year;
    }

    Date& operator++() {
        if (day < daysInMonth()) {
            ++day;
        } else {
            day = 1;
            if (month == 12) {
                month = 1;
                ++year;
            } else {
                ++month;
            }
        }
        return *this;
    }

    void display() const {
        cout << day << '/' << month << '/' << year << '\n';
    }
};

int main() {
    Date d;
    d.input();
    ++d;
    cout << "Next date: ";
    d.display();
    return 0;
}
