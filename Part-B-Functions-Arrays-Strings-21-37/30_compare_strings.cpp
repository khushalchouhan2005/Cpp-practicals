#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    cout << "Enter first string: "; getline(cin, a);
    cout << "Enter second string: "; getline(cin, b);
    if (a == b) cout << "Strings are equal.\n";
    else if (a < b) cout << "First string is lexicographically smaller.\n";
    else cout << "First string is lexicographically greater.\n";
    return 0;
}
