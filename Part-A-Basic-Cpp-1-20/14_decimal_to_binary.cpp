#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    unsigned int n;
    cout << "Enter a non-negative integer: "; cin >> n;
    if (n == 0) { cout << "Binary = 0\n"; return 0; }
    string binary;
    while (n > 0) { binary += char('0' + n % 2); n /= 2; }
    reverse(binary.begin(), binary.end());
    cout << "Binary = " << binary << '\n';
    return 0;
}
