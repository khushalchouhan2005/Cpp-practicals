#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("pointer_demo.txt", ios::in | ios::out | ios::trunc);

    if (!file) {
        cout << "Unable to open file.\n";
        return 1;
    }

    file << "Hello C++ File";
    cout << "Write position (tellp): " << file.tellp() << '\n';

    file.seekg(0, ios::beg);
    cout << "Read position after seekg: " << file.tellg() << '\n';

    char ch;
    file.get(ch);
    cout << "First character: " << ch << '\n';

    file.seekp(6, ios::beg);
    cout << "Write position after seekp: " << file.tellp() << '\n';
    file << "World";

    file.flush();
    file.seekg(0, ios::beg);

    cout << "Updated file content: ";
    char c;
    while (file.get(c)) {
        cout << c;
    }
    cout << '\n';

    file.close();
    return 0;
}
