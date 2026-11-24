#include <iostream>
using namespace std;
class Adder {
public:
    template <typename T, typename U>
    auto add(T a, U b) -> decltype(a + b) { return a + b; }
};
int main() {
    Adder obj;
    cout << "Integer + floating-point = " << obj.add(10, 2.5) << '\n';
    cout << "Integer + integer = " << obj.add(10, 20) << '\n';
    return 0;
}
