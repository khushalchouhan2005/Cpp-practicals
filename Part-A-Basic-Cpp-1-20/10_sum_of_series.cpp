#include <iostream>
using namespace std;
int main() {
    // The PDF's series is visually unclear: it appears as 1/1 + 22/2 + 33/3 + ...
    // This version assumes the intended terms are 1/1 + 2^2/2 + 3^3/3 + ...
    int n;
    cout << "Enter number of terms: "; cin >> n;
    long double sum = 0;
    for (int i = 1; i <= n; ++i) {
        long double power = 1;
        for (int j = 0; j < i; ++j) power *= i;
        sum += power / i;
    }
    cout << "Sum = " << static_cast<double>(sum) << '\n';
    return 0;
}
