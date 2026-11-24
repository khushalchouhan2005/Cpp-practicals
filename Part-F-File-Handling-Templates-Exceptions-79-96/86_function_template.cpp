#include <iostream>
using namespace std;

template <class T>
T findMaximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Maximum of integers: " << findMaximum(10, 20) << '\n';
    cout << "Maximum of decimals: " << findMaximum(5.5, 2.3) << '\n';
    return 0;
}
