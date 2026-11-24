#include <iostream>
using namespace std;

class Second;

class First {
    float value;

public:
    void input() {
        cout << "Enter first number: ";
        cin >> value;
    }
    friend float mean(const First&, const Second&);
};

class Second {
    float value;

public:
    void input() {
        cout << "Enter second number: ";
        cin >> value;
    }
    friend float mean(const First&, const Second&);
};

float mean(const First& a, const Second& b) {
    return (a.value + b.value) / 2.0f;
}

int main() {
    First a;
    Second b;
    a.input();
    b.input();
    cout << "Mean = " << mean(a, b) << '\n';
    return 0;
}
