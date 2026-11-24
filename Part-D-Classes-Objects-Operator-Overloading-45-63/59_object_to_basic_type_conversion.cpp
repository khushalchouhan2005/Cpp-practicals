#include <iostream>
using namespace std;

class Distance {
    float meters;

public:
    Distance(float m) : meters(m) {}

    operator float() const {
        return meters;
    }
};

int main() {
    float value;
    cout << "Enter distance in meters: ";
    cin >> value;

    Distance d(value);
    float converted = d;  // Conversion function
    cout << "Distance as a basic float value = " << converted << '\n';
    return 0;
}
