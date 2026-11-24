#include <iostream>
using namespace std;
int main() {
    int a[100], n, key, pos = -1;
    cout << "Enter array size (1-100): "; cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size.\n"; return 0; }
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << "Enter value to search: "; cin >> key;
    for (int i = 0; i < n; ++i) if (a[i] == key) { pos = i; break; }
    if (pos == -1) cout << "Element not found.\n";
    else cout << "Element found at position " << pos + 1 << ".\n";
    return 0;
}
