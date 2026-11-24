#include <iostream>
using namespace std;
int main() {
    int a, b;
    int *p = &a, *q = &b;
    cout << "Enter two integers: "; cin >> a >> b;
    cout << "Sum = " << *p + *q << '\n';
    return 0;
}
