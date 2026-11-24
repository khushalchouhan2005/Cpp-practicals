#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }
        cout << "Result = " << a / b << '\n';
    }
    catch (const runtime_error& e) {
        cout << "Exception: " << e.what() << '\n';
    }

    return 0;
}
