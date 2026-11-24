#include <iostream>
using namespace std;

class Distance {
    int meters;

public:
    Distance(int m) : meters(m) {}

    void display() const {
        cout << "Distance = " << meters << " meters\n";
    }
};

int main() {
    int value;
    cout << "Enter distance in meters: ";
    cin >> value;

    Distance d = value;   // Conversion constructor
    d.display();
    return 0;
}
