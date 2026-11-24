#include <iostream>
using namespace std;

class NumberArray {
    int* a;
    int n;

public:
    NumberArray(int size) : n(size) {
        a = new int[n];
    }

    void input() {
        for (int i = 0; i < n; ++i) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> a[i];
        }
    }

    void countEvenOdd() const {
        int even = 0, odd = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 0) ++even;
            else ++odd;
        }
        cout << "Even elements: " << even << '\n';
        cout << "Odd elements: " << odd << '\n';
    }

    ~NumberArray() {
        delete[] a;
    }
};

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid size.\n";
        return 0;
    }

    NumberArray arr(n);
    arr.input();
    arr.countEvenOdd();
    return 0;
}
