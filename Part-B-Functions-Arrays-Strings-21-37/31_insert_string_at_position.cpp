#include <iostream>
#include <string>
using namespace std;
int main() {
    string text, insertText;
    size_t pos;
    cout << "Enter main text: "; getline(cin, text);
    cout << "Enter string to insert: "; getline(cin, insertText);
    cout << "Enter position (1 to " << text.length() + 1 << "): "; cin >> pos;
    if (pos < 1 || pos > text.length() + 1) {
        cout << "Invalid position.\n"; return 0;
    }
    text.insert(pos - 1, insertText);
    cout << "Updated text: " << text << '\n';
    return 0;
}
