#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;  // Pure virtual function
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) { }

    double area() const override {
        return length * breadth;
    }
};

int main() {
    double length, breadth;
    cout << "Enter rectangle length and breadth: ";
    cin >> length >> breadth;

    Rectangle r(length, breadth);
    Shape* ptr = &r;
    cout << "Area = " << ptr->area() << '\n';
    return 0;
}
