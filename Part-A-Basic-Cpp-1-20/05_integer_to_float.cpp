#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: "; cin >> number;
    float converted = static_cast<float>(number);
    cout << "Floating-point value = " << converted << '\n';
    return 0;
}
