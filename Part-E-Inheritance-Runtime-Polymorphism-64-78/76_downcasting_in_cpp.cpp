#include <iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void bark() const {
        cout << "Dog barks.\n";
    }
};

int main() {
    Dog dog;
    Animal* basePtr = &dog;  // Upcast first.

    Dog* dogPtr = dynamic_cast<Dog*>(basePtr);  // Safe downcast
    if (dogPtr != nullptr) {
        cout << "Downcasting successful: ";
        dogPtr->bark();
    } else {
        cout << "Downcasting failed.\n";
    }
    return 0;
}
