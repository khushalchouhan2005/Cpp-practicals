#include <iostream>
using namespace std;

class Grandparent {
public:
    Grandparent() {
        cout << "Grandparent constructor called.\n";
    }
};

class Parent : public Grandparent {
public:
    Parent() {
        cout << "Parent constructor called.\n";
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child constructor called.\n";
    }
};

int main() {
    cout << "Creating Child object:\n";
    Child obj;
    return 0;
}
