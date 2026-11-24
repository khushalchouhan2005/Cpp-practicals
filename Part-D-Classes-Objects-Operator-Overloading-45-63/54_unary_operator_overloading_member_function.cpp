#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) : value(v) {}

    void operator-() {
        value = -value;
    }

    void display() const {
        cout << "Value = " << value << '\n';
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Number obj(n);
    -obj;
    cout << "After unary minus: ";
    obj.display();
    return 0;
}
