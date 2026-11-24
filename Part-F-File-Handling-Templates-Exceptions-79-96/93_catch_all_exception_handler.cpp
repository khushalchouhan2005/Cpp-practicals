#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter 1 to throw an integer, any other number to throw a character: ";
    cin >> choice;

    try {
        if (choice == 1) {
            throw 10;
        } else {
            throw 'A';
        }
    }
    catch (...) {
        cout << "An exception was caught by the catch-all handler.\n";
    }

    return 0;
}
