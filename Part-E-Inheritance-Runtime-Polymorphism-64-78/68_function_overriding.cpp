#include <iostream>
using namespace std;

class Animal {
public:
    void sound() const {
        cout << "Animal makes a sound.\n";
    }
};

class Dog : public Animal {
public:
    void sound() const {
        cout << "Dog barks.\n";
    }
};

int main() {
    Animal a;
    Dog d;

    cout << "Base class function: ";
    a.sound();

    cout << "Derived class overridden function: ";
    d.sound();
    return 0;
}
