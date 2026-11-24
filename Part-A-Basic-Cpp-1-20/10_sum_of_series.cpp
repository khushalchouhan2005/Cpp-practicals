#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double sum = 0;
    cout << "Enter number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum = sum + pow(i, i) / i;   // i^i / i
    cout << "Sum of series = " << sum << endl;
    return 0;
}