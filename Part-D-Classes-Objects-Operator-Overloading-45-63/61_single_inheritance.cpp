#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    void inputName() {
        cout << "Enter name: ";
        getline(cin, name);
    }
};

class Student : public Person {
    int rollNo;

public:
    void input() {
        inputName();
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void display() const {
        cout << "Name: " << name << '\n';
        cout << "Roll number: " << rollNo << '\n';
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
