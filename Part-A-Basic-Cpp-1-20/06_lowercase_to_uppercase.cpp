#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch;
    cout << "Enter a lowercase character: "; cin >> ch;
    cout << "Uppercase = " << static_cast<char>(toupper(static_cast<unsigned char>(ch))) << '\n';
    return 0;
}
