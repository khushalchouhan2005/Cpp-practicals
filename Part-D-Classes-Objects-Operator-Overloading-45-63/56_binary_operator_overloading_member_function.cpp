#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    void input() {
        cin >> real >> imag;
    }

    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() const {
        cout << real << (imag >= 0 ? " + " : " - ")
             << (imag >= 0 ? imag : -imag) << "i\n";
    }
};

int main() {
    Complex a, b;
    cout << "Enter first complex number (real imaginary): ";
    a.input();
    cout << "Enter second complex number (real imaginary): ";
    b.input();

    Complex sum = a + b;
    cout << "Sum = ";
    sum.display();
    return 0;
}
