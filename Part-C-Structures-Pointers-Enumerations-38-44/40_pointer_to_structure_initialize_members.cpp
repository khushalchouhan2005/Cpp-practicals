#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s;
    Student *ptr = &s;

    cout << "Enter roll number: ";
    cin >> ptr->rollNo;
    cin.ignore();

    cout << "Enter name: ";
    getline(cin, ptr->name);

    cout << "Enter marks: ";
    cin >> ptr->marks;

    cout << "\nStudent Information\n";
    cout << "Roll number: " << ptr->rollNo << '\n';
    cout << "Name: " << ptr->name << '\n';
    cout << "Marks: " << ptr->marks << '\n';

    return 0;
}
