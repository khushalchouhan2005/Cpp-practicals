#include <iostream>
using namespace std;
int main() {
    int a[100], b[100], c[200], n, m;
    cout << "Enter size of first array (1-100): "; cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size.\n"; return 0; }
    cout << "Enter first array: ";
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << "Enter size of second array (1-100): "; cin >> m;
    if (m < 1 || m > 100) { cout << "Invalid size.\n"; return 0; }
    cout << "Enter second array: ";
    for (int i = 0; i < m; ++i) cin >> b[i];
    for (int i = 0; i < n; ++i) c[i] = a[i];
    for (int i = 0; i < m; ++i) c[n + i] = b[i];
    cout << "Merged array: ";
    for (int i = 0; i < n + m; ++i) cout << c[i] << ' ';
    cout << '\n';
    return 0;
}
