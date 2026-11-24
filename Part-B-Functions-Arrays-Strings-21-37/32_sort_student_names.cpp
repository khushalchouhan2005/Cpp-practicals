#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string names[100];
    int n;
    cout << "Enter number of students (1-100): "; cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid number.\n"; return 0; }
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, names[i]);
    }
    sort(names, names + n);
    cout << "Names in alphabetical order:\n";
    for (int i = 0; i < n; ++i) cout << names[i] << '\n';
    return 0;
}
