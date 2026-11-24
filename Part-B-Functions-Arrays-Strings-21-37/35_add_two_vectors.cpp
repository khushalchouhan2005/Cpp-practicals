#include <iostream>
using namespace std;
int main() {
    int a[100], b[100], sum[100], n;
    cout << "Enter vector size (1-100): "; cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size.\n"; return 0; }
    cout << "Enter first vector: ";
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << "Enter second vector: ";
    for (int i = 0; i < n; ++i) cin >> b[i];
    for (int i = 0; i < n; ++i) sum[i] = a[i] + b[i];
    cout << "Sum vector: ";
    for (int i = 0; i < n; ++i) cout << sum[i] << ' ';
    cout << '\n';
    return 0;
}
