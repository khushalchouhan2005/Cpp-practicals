#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 0) {
            throw invalid_argument("Age cannot be negative.");
        }
        cout << "Your age is " << age << ".\n";
    }
    catch (const invalid_argument& e) {
        cout << "Exception: " << e.what() << '\n';
    }

    return 0;
}
