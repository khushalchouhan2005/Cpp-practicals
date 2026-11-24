#include <iostream>
using namespace std;

class Person {
protected:
    int id;
public:
    void setId(int value) {
        id = value;
    }
};

class Student : virtual public Person { };
class Employee : virtual public Person { };

class TeachingAssistant : public Student, public Employee {
public:
    void display() const {
        cout << "Person ID: " << id << '\n';
    }
};

int main() {
    TeachingAssistant ta;
    ta.setId(101);  // Only one shared Person base exists.
    ta.display();
    return 0;
}
