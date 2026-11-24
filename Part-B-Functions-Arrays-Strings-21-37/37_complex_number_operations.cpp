#include <iostream>
using namespace std;
class Complex {
    double real, imag;
public:
    void read() { cin >> real >> imag; }
    void display() const {
        cout << real;
        if (imag >= 0) cout << " + " << imag << "i";
        else cout << " - " << -imag << "i";
    }
    Complex add(const Complex& c) const {
        Complex r; r.real = real + c.real; r.imag = imag + c.imag; return r;
    }
    Complex subtract(const Complex& c) const {
        Complex r; r.real = real - c.real; r.imag = imag - c.imag; return r;
    }
};
int main() {
    Complex a, b;
    cout << "Enter real and imaginary parts of first number: "; a.read();
    cout << "Enter real and imaginary parts of second number: "; b.read();
    cout << "First: "; a.display();
    cout << "\nSecond: "; b.display();
    Complex s = a.add(b), d = a.subtract(b);
    cout << "\nSum: "; s.display();
    cout << "\nDifference: "; d.display();
    cout << '\n';
    return 0;
}
