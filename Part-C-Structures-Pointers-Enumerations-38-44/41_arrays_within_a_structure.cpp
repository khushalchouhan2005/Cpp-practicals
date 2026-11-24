#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    int marks[5];
};

int main() {
    Student s;
    int total = 0;

    cout << "Enter student roll number: ";
    cin >> s.rollNo;

    cout << "Enter marks in 5 subjects:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
        total += s.marks[i];
    }

    cout << "\nRoll number: " << s.rollNo << '\n';
    cout << "Marks: ";
    for (int i = 0; i < 5; ++i)
        cout << s.marks[i] << ' ';

    cout << "\nTotal marks: " << total << '\n';
    cout << "Average marks: " << total / 5.0 << '\n';

    return 0;
}
