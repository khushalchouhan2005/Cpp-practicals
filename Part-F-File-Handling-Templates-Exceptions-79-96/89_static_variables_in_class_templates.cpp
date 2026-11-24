#include <iostream>
using namespace std;

template <class T>
class Counter {
    static int count;
public:
    Counter() {
        ++count;
    }

    static void showCount() {
        cout << "Objects created: " << count << '\n';
    }
};

template <class T>
int Counter<T>::count = 0;

int main() {
    Counter<int> a, b;
    Counter<double> c;

    cout << "Integer template: ";
    Counter<int>::showCount();

    cout << "Double template: ";
    Counter<double>::showCount();
    return 0;
}
