#include <iostream>
using namespace std;
double volume(double length, double breadth = 1, double height = 1) {
    return length * breadth * height;
}
int main() {
    double l, b, h;
    cout << "Enter length, breadth and height: "; cin >> l >> b >> h;
    cout << "Volume of cuboid = " << volume(l, b, h) << '\n';
    cout << "Volume using default breadth and height = " << volume(l) << '\n';
    return 0;
}
