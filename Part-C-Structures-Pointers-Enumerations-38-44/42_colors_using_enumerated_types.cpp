#include <iostream>
using namespace std;

enum Color {
    RED = 1,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    PURPLE
};

int main() {
    cout << "Names of Colors\n";
    cout << "1. Red\n";
    cout << "2. Green\n";
    cout << "3. Blue\n";
    cout << "4. Yellow\n";
    cout << "5. Orange\n";
    cout << "6. Purple\n\n";

    Color colors[] = {RED, GREEN, BLUE, YELLOW, ORANGE, PURPLE};
    const char* names[] = {"Red", "Green", "Blue", "Yellow", "Orange", "Purple"};

    for (int i = 0; i < 6; ++i)
        cout << static_cast<int>(colors[i]) << ". " << names[i] << '\n';

    return 0;
}
