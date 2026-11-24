#include <iostream>
using namespace std;

template <class T1, class T2>
void displayValues(T1 a, T2 b) {
    cout << "First value: " << a << '\n';
    cout << "Second value: " << b << '\n';
}

int main() {
    displayValues(10, 5.75);
    displayValues('A', 100);
    return 0;
}
