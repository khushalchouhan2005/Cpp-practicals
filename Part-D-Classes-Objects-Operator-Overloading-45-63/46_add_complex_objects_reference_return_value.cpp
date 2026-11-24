#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    void input() {
        cin >> real >> imag;
    }

    Complex add(const Complex& c) const {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    void display() const {
        cout << real;
        if (imag >= 0) cout << " + " << imag << "i\n";
        else cout << " - " << -imag << "i\n";
    }
};

int main() {
    Complex c1, c2, sum;
    cout << "Enter real and imaginary parts of first complex number: ";
    c1.input();
    cout << "Enter real and imaginary parts of second complex number: ";
    c2.input();

    sum = c1.add(c2);
    cout << "Sum = ";
    sum.display();
    return 0;
}
