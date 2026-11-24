#include <iostream>
using namespace std;

class Base {
public:
    int publicValue = 10;
protected:
    int protectedValue = 20;
private:
    int privateValue = 30;
};

class PublicDerived : public Base {
public:
    void display() const {
        cout << "Public inheritance: public = " << publicValue
             << ", protected = " << protectedValue << '\n';
        // privateValue is not directly accessible in a derived class.
    }
};

class ProtectedDerived : protected Base {
public:
    void display() const {
        cout << "Protected inheritance: public = " << publicValue
             << ", protected = " << protectedValue << '\n';
    }
};

class PrivateDerived : private Base {
public:
    void display() const {
        cout << "Private inheritance: public = " << publicValue
             << ", protected = " << protectedValue << '\n';
    }
};

int main() {
    PublicDerived a;
    ProtectedDerived b;
    PrivateDerived c;

    a.display();
    b.display();
    c.display();

    cout << "Public base member through public inheritance: "
         << a.publicValue << '\n';

    // b.publicValue and c.publicValue cannot be accessed from main().
    return 0;
}
