#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called.\n";
    }
    ~Base() {
        cout << "Base destructor called.\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called.\n";
    }
    ~Derived() {
        cout << "Derived destructor called.\n";
    }
};

int main() {
    cout << "Creating derived object...\n";
    {
        Derived obj;
        cout << "Inside main block.\n";
    }
    cout << "Object destroyed.\n";
    return 0;
}
