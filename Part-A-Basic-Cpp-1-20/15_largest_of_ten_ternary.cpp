#include <iostream>
using namespace std;
int main() {
    int number, largest;
    cout << "Enter 10 numbers:\n";
    cin >> largest;
    for (int i = 1; i < 10; ++i) {
        cin >> number;
        largest = (number > largest) ? number : largest;
    }
    cout << "Largest = " << largest << '\n';
    return 0;
}
