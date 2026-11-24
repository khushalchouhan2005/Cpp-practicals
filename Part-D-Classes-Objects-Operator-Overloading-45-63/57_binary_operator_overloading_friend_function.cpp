#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void input() {
        cin >> real >> imag;
    }

    friend Complex operator+(const Complex&, const Complex&);

    void display() const {
        cout << real << (imag >= 0 ? " + " : " - ")
             << (imag >= 0 ? imag : -imag) << "i\n";
    }
};

Complex operator+(const Complex& a, const Complex& b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

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
