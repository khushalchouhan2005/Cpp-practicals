#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("modes.txt", ios::out);
    file << "Written using ios::out mode.\n";
    file.close();

    file.open("modes.txt", ios::app);
    file << "Added using ios::app mode.\n";
    file.close();

    ifstream input("modes.txt", ios::in);
    if (!input) {
        cout << "Unable to open file.\n";
        return 1;
    }

    cout << "File contents:\n";
    char ch;
    while (input.get(ch)) {
        cout << ch;
    }
    input.close();

    // Other common modes include ios::binary, ios::ate and ios::trunc.
    return 0;
}
