#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    cout << "Enter 1 for integer exception, 2 for string exception: ";
    cin >> choice;

    try {
        if (choice == 1) {
            throw 100;
        } else if (choice == 2) {
            throw string("A string exception occurred.");
        } else {
            throw 3.14;
        }
    }
    catch (int value) {
        cout << "Caught integer exception: " << value << '\n';
    }
    catch (const string& message) {
        cout << "Caught string exception: " << message << '\n';
    }
    catch (double value) {
        cout << "Caught double exception: " << value << '\n';
    }

    return 0;
}
