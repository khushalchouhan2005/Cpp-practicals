#include <iostream>
using namespace std;

class Flyer {
public:
    virtual void fly() const {
        cout << "Flying.\n";
    }
    virtual ~Flyer() = default;
};

class Swimmer {
public:
    virtual void swim() const {
        cout << "Swimming.\n";
    }
    virtual ~Swimmer() = default;
};

class Duck : public Flyer, public Swimmer { };

int main() {
    Duck duck;
    Flyer* flyerPtr = &duck;

    // Cross-cast from one base class pointer to an unrelated base class pointer.
    Swimmer* swimmerPtr = dynamic_cast<Swimmer*>(flyerPtr);

    if (swimmerPtr != nullptr) {
        cout << "Cross-casting successful: ";
        swimmerPtr->swim();
    } else {
        cout << "Cross-casting failed.\n";
    }
    return 0;
}
