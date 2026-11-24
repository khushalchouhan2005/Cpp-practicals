#include <iostream>
using namespace std;
int main() {
    int a[2][2][2];
    cout << "Enter 8 elements:\n";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            for (int k = 0; k < 2; ++k) cin >> a[i][j][k];
    cout << "The 2x2x2 array is:\n";
    for (int i = 0; i < 2; ++i) {
        cout << "Block " << i + 1 << ":\n";
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) cout << a[i][j][k] << ' ';
            cout << '\n';
        }
    }
    return 0;
}
