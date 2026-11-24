#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: "; cin >> n;
    if (n <= 0) { cout << "Please enter a positive integer.\n"; return 0; }
    long long sum = 0;
    for (int i = 1; i <= n; ++i) sum += i;
    cout << "Average = " << static_cast<double>(sum) / n << '\n';
    return 0;
}
