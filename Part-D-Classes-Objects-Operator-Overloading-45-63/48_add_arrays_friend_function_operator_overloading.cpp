#include <iostream>
using namespace std;

class Array {
    int a[5];

public:
    void input() {
        for (int i = 0; i < 5; ++i)
            cin >> a[i];
    }

    void display() const {
        for (int i = 0; i < 5; ++i)
            cout << a[i] << ' ';
        cout << '\n';
    }

    friend Array operator+(const Array&, const Array&);
};

Array operator+(const Array& x, const Array& y) {
    Array result;
    for (int i = 0; i < 5; ++i)
        result.a[i] = x.a[i] + y.a[i];
    return result;
}

int main() {
    Array a, b, sum;
    cout << "Enter 5 elements of first array: ";
    a.input();
    cout << "Enter 5 elements of second array: ";
    b.input();

    sum = a + b;
    cout << "Sum of arrays: ";
    sum.display();
    return 0;
}
