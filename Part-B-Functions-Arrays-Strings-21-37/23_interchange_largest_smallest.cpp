#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[100], n;
    cout << "Enter array size (1-100): "; cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size.\n"; return 0; }
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) cin >> a[i];
    int mn = 0, mx = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[mn]) mn = i;
        if (a[i] > a[mx]) mx = i;
    }
    swap(a[mn], a[mx]);
    cout << "After interchange: ";
    for (int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}
