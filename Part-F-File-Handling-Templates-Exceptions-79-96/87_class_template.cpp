#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) : a(x), b(y) { }

    T add() const {
        return a + b;
    }
};

int main() {
    Calculator<int> intCalc(10, 20);
    Calculator<double> doubleCalc(2.5, 3.7);

    cout << "Sum of integers: " << intCalc.add() << '\n';
    cout << "Sum of decimals: " << doubleCalc.add() << '\n';
    return 0;
}
