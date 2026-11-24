#include <iostream>
using namespace std;
int main() {
    for (int row = 1; row <= 4; ++row) {
        for (int n = 1; n <= row; ++n) cout << n;
        for (int n = row - 1; n >= 1; --n) cout << n;
        cout << '\n';
    }
    return 0;
}
