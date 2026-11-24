#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int total, m, n;
    vector<string> lines;
    cout << "Enter total number of lines: "; cin >> total;
    if (total < 1) { cout << "Invalid number of lines.\n"; return 0; }
    cin.ignore();
    cout << "Enter text, one line at a time:\n";
    for (int i = 0; i < total; ++i) {
        string line; getline(cin, line); lines.push_back(line);
    }
    cout << "Enter starting line number (m): "; cin >> m;
    cout << "Enter number of lines to display (n): "; cin >> n;
    if (m < 1 || m > total || n < 1) { cout << "Invalid input.\n"; return 0; }
    cout << "Requested lines:\n";
    int end = (m + n - 1 < total) ? m + n - 1 : total;
    for (int i = m - 1; i < end; ++i) cout << lines[i] << '\n';
    return 0;
}
