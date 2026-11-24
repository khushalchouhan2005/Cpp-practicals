#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers: "; cin >> a >> b;
    cout << "Addition = " << a + b << '\n';
    cout << "Subtraction = " << a - b << '\n';
    cout << "Multiplication = " << a * b << '\n';
    if (b != 0) cout << "Division = " << static_cast<double>(a) / b << '\n';
    else cout << "Division is undefined (division by zero).\n";
    return 0;
}
