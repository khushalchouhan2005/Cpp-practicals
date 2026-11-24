#include <iostream>
using namespace std;
long long power(int x, int y) {
    if (y == 0) return 1;
    return x * power(x, y - 1);
}
int main() {
    int x, y;
    cout << "Enter base and non-negative exponent: ";
    cin >> x >> y;
    if (y < 0) { cout << "Exponent must be non-negative.\n"; return 0; }
    cout << "Result = " << power(x, y) << '\n';
    return 0;
}
