#include <iostream>
using namespace std;

class NumberArray {
    int* a;
    int n;

public:
    NumberArray() : a(nullptr), n(0) {}

    NumberArray(int size) : n(size) {
        a = new int[n];
    }

    NumberArray(const NumberArray& other) : n(other.n) {
        a = new int[n];
        for (int i = 0; i < n; ++i)
            a[i] = other.a[i];
    }

    void input() {
        for (int i = 0; i < n; ++i) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> a[i];
        }
    }

    int largest() const {
        int maxValue = a[0];
        for (int i = 1; i < n; ++i)
            if (a[i] > maxValue) maxValue = a[i];
        return maxValue;
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

    NumberArray defaultArray;
    NumberArray arr(n);
    arr.input();
    cout << "Largest element = " << arr.largest() << '\n';
    return 0;
}
