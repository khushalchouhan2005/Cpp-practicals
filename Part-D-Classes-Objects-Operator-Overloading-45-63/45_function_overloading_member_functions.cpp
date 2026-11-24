#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator c;
    cout << "Sum of two integers: " << c.add(10, 20) << '\n';
    cout << "Sum of two doubles: " << c.add(2.5, 3.7) << '\n';
    cout << "Sum of three integers: " << c.add(10, 20, 30) << '\n';
    return 0;
}
