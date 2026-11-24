#include <iostream>
using namespace std;

class Distance {
    float meters;

public:
    Distance(float m = 0) : meters(m) {}

    operator float() const {
        return meters;
    }

    void display() const {
        cout << meters << " meters\n";
    }
};

int main() {
    float value;
    cout << "Enter distance in meters: ";
    cin >> value;

    Distance d = value;       // Basic type to class type
    cout << "Distance object: ";
    d.display();

    float converted = d;      // Class type to basic type
    cout << "Converted back to float: " << converted << " meters\n";
    return 0;
}
