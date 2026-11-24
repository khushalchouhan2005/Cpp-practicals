#include <iostream>
using namespace std;
double areaOfCircle(double radius) { const double PI = 3.141592653589793; return PI * radius * radius; }
int main() {
    double radius;
    cout << "Enter radius: "; cin >> radius;
    if (radius < 0) { cout << "Radius cannot be negative.\n"; return 0; }
    cout << "Area = " << areaOfCircle(radius) << '\n';
    return 0;
}
