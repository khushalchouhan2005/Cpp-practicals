#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculatePay() const {
        cout << "Calculating general employee pay.\n";
    }
    virtual ~Employee() = default;
};

class FullTimeEmployee : public Employee {
public:
    void calculatePay() const override {
        cout << "Calculating fixed monthly salary.\n";
    }
};

class PartTimeEmployee : public Employee {
public:
    void calculatePay() const override {
        cout << "Calculating hourly wages.\n";
    }
};

int main() {
    FullTimeEmployee fullTime;
    PartTimeEmployee partTime;
    Employee* employee = nullptr;

    employee = &fullTime;
    employee->calculatePay();  // Dynamic binding

    employee = &partTime;
    employee->calculatePay();  // Dynamic binding
    return 0;
}
