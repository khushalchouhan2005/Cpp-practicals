#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() const {
        cout << "Animal sound.\n";
    }
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void sound() const override {
        cout << "Dog barks.\n";
    }
    void fetch() const {
        cout << "Dog fetches the ball.\n";
    }
};

int main() {
    Dog dog;
    Animal* basePtr = &dog;  // Upcasting: Derived* to Base*

    basePtr->sound();
    return 0;
}
