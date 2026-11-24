#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int a[100], n;
    cout << "How many random numbers (1-100)? ";
    cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size.\n"; return 0; }
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < n; ++i) a[i] = rand() % 100 + 1;
    cout << "Random numbers: ";
    for (int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}
