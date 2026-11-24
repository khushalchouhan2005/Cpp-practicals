#include <iostream>
#include <limits>
#include <stdexcept>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    if (!(cin >> age)) {
        cout << "Invalid input: Please enter a whole number.\n";
        return 1;
    }

    try {
        if (age < 0 || age > 120) {
            throw out_of_range("Age must be between 0 and 120.");
        }
        cout << "Valid age: " << age << '\n';
    }
    catch (const out_of_range& e) {
        cout << "Exception: " << e.what() << '\n';
    }

    return 0;
}
