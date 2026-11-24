#include <iostream>
#include <climits>
using namespace std;
int main() {
    int a[100], n;
    cout << "Enter array size (2-100): "; cin >> n;
    if (n < 2 || n > 100) { cout << "Invalid size.\n"; return 0; }
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) cin >> a[i];
    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (a[i] > largest) { second = largest; largest = a[i]; }
        else if (a[i] > second && a[i] != largest) second = a[i];
    }
    if (second == INT_MIN) cout << "Distinct second-largest element does not exist.\n";
    else cout << "Second-largest = " << second << '\n';
    return 0;
}
