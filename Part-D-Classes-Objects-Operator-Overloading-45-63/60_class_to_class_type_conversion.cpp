#include <iostream>
using namespace std;

class Meter {
    float value;

public:
    Meter(float v = 0) : value(v) {}
    float getValue() const { return value; }
};

class Centimeter {
    float value;

public:
    Centimeter(const Meter& m) {
        value = m.getValue() * 100;
    }

    void display() const {
        cout << value << " centimeters\n";
    }
};

int main() {
    float m;
    cout << "Enter distance in meters: ";
    cin >> m;

    Meter meter(m);
    Centimeter cm = meter;  // Class-to-class conversion
    cm.display();
    return 0;
}
