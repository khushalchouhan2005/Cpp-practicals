#include <iostream>
#include <stdexcept>
using namespace std;

void checkNumber(int number) {
    if (number < 0) {
        throw runtime_error("Negative number is not allowed.");
    }
    cout << "You entered: " << number << '\n';
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    try {
        checkNumber(number);
    }
    catch (const runtime_error& e) {
        cout << "Exception caught in main: " << e.what() << '\n';
    }

    return 0;
}
