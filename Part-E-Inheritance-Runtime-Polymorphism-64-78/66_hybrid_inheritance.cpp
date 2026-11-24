#include <iostream>
using namespace std;

class Person {
protected:
    int id;
public:
    void inputId() {
        cout << "Enter person ID: ";
        cin >> id;
    }
};

class Student : virtual public Person {
protected:
    float marks;
public:
    void inputMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }
};

class Employee : virtual public Person {
protected:
    float salary;
public:
    void inputSalary() {
        cout << "Enter salary: ";
        cin >> salary;
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    void input() {
        inputId();
        inputMarks();
        inputSalary();
    }

    void display() const {
        cout << "\nTeaching Assistant Details\n";
        cout << "ID: " << id << '\n';
        cout << "Marks: " << marks << '\n';
        cout << "Salary: " << salary << '\n';
    }
};

int main() {
    TeachingAssistant ta;
    ta.input();
    ta.display();
    return 0;
}
