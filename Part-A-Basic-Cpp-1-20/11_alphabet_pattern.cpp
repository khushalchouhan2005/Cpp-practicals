#include <iostream>
using namespace std;
int main() {
    for (char last = 'A'; last <= 'E'; ++last) {
        for (char ch = 'A'; ch <= last; ++ch) cout << ch;
        cout << '\n';
    }
    return 0;
}
