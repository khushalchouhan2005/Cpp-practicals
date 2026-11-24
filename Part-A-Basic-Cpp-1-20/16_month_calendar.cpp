#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int startDay, days;
    cout << "Enter starting day (0=Sunday, 1=Monday, ..., 6=Saturday): ";
    cin >> startDay;
    cout << "Enter number of days in month: "; cin >> days;
    if (startDay < 0 || startDay > 6 || days < 1 || days > 31) {
        cout << "Invalid input.\n"; return 0;
    }
    cout << "Sun Mon Tue Wed Thu Fri Sat\n";
    for (int i = 0; i < startDay; ++i) cout << "    ";
    for (int day = 1; day <= days; ++day) {
        cout << setw(3) << day << ' ';
        if ((startDay + day) % 7 == 0) cout << '\n';
    }
    cout << '\n';
    return 0;
}
