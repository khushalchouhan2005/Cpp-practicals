#include <iostream>
using namespace std;

template <class T>
class Number {
    T value;
public:
    Number(T v) : value(v) { }

    template <class U>
    friend void display(const Number<U>& n);
};

template <class U>
void display(const Number<U>& n) {
    cout << "Value: " << n.value << '\n';
}

int main() {
    Number<int> n1(25);
    Number<double> n2(12.5);

    display(n1);
    display(n2);
    return 0;
}
