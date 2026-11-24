#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const {
        cout << "Drawing a generic shape.\n";
    }
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a circle.\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a rectangle.\n";
    }
};

int main() {
    Circle c;
    Rectangle r;
    Shape* ptr = nullptr;

    ptr = &c;
    ptr->draw();

    ptr = &r;
    ptr->draw();
    return 0;
}
