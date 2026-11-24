#include <iostream>
#include <string>
using namespace std;

struct Date {
    int day, month, year;
};

struct Student {
    int rollNo;
    string name;
    Date dateOfBirth;   // Nested structure
};

int main() {
    Student s;

    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cin.ignore();

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter date of birth (day month year): ";
    cin >> s.dateOfBirth.day >> s.dateOfBirth.month >> s.dateOfBirth.year;

    cout << "\nStudent Information\n";
    cout << "Roll number: " << s.rollNo << '\n';
    cout << "Name: " << s.name << '\n';
    cout << "Date of birth: " << s.dateOfBirth.day << '/'
         << s.dateOfBirth.month << '/' << s.dateOfBirth.year << '\n';

    return 0;
}
