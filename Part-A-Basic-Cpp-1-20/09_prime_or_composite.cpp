#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: "; cin >> n;
    if (n <= 1) { cout << n << " is neither prime nor composite.\n"; return 0; }
    bool prime = true;
    for (int i = 2; i <= n / i; ++i)
        if (n % i == 0) { prime = false; break; }
    cout << n << (prime ? " is prime.\n" : " is composite.\n");
    return 0;
}
