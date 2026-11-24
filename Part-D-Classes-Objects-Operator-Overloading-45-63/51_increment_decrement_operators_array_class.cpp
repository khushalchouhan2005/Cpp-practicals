#include <iostream>
using namespace std;

class Array {
    int a[5];

public:
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; ++i) cin >> a[i];
    }

    Array operator++() {
        for (int i = 0; i < 5; ++i) ++a[i];
        return *this;
    }

    Array operator--() {
        for (int i = 0; i < 5; ++i) --a[i];
        return *this;
    }

    void display() const {
        for (int i = 0; i < 5; ++i) cout << a[i] << ' ';
        cout << '\n';
    }
};

int main() {
    Array arr;
    arr.input();

    ++arr;
    cout << "After incrementing every element: ";
    arr.display();

    --arr;
    cout << "After decrementing every element: ";
    arr.display();
    return 0;
}
