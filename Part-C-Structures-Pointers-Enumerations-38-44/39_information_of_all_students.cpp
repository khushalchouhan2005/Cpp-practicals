#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student students[100];
    int n;

    cout << "Enter number of students (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid number of students.\n";
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << i + 1 << '\n';
        cout << "Enter roll number: ";
        cin >> students[i].rollNo;
        cin.ignore();

        cout << "Enter name: ";
        getline(cin, students[i].name);

        cout << "Enter marks: ";
        cin >> students[i].marks;
    }

    cout << "\nInformation of All Students\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nRoll number: " << students[i].rollNo
             << "\nName: " << students[i].name
             << "\nMarks: " << students[i].marks << '\n';
    }

    return 0;
}
