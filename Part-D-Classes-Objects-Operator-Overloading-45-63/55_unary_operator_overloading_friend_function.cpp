#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) : value(v) {}

    friend Number operator-(const Number& n);

    void display() const {
        cout << "Value = " << value << '\n';
    }
};

Number operator-(const Number& n) {
    return Number(-n.value);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Number obj(n);
    Number result = -obj;
    cout << "After unary minus: ";
    result.display();
    return 0;
}
