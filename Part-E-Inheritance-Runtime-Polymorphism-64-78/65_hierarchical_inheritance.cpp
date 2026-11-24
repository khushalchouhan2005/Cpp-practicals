#include <iostream>
using namespace std;

class Shape {
protected:
    double value;
public:
    void input() {
        cout << "Enter a measurement: ";
        cin >> value;
    }
};

class Square : public Shape {
public:
    void area() const {
        cout << "Area of square = " << value * value << '\n';
    }
};

class Circle : public Shape {
public:
    void area() const {
        cout << "Area of circle = " << 3.14159 * value * value << '\n';
    }
};

int main() {
    Square s;
    Circle c;

    cout << "Square\n";
    s.input();
    s.area();

    cout << "\nCircle (enter radius)\n";
    c.input();
    c.area();
    return 0;
}
