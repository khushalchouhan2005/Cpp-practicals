#include <iostream>
using namespace std;

class First {
public:
    First() {
        cout << "First base constructor called.\n";
    }
};

class Second {
public:
    Second() {
        cout << "Second base constructor called.\n";
    }
};

class Derived : public First, public Second {
public:
    Derived() {
        cout << "Derived constructor called.\n";
    }
};

int main() {
    cout << "Creating Derived object:\n";
    Derived obj;
    return 0;
}
