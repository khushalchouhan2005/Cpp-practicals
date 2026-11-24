#include <iostream>
using namespace std;

class Academic {
protected:
    float marks;

public:
    void inputMarks() {
        cout << "Enter academic marks: ";
        cin >> marks;
    }
};

class Sports {
protected:
    float score;

public:
    void inputScore() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};

class Result : public Academic, public Sports {
public:
    void display() const {
        cout << "Academic marks: " << marks << '\n';
        cout << "Sports score: " << score << '\n';
        cout << "Combined score: " << marks + score << '\n';
    }
};

int main() {
    Result r;
    r.inputMarks();
    r.inputScore();
    r.display();
    return 0;
}
