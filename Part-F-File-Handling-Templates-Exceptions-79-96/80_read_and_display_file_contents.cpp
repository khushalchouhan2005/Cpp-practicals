#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("sample.txt");
    string line;

    if (!file) {
        cout << "Unable to open sample.txt. Run Practical 79 first.\n";
        return 1;
    }

    cout << "File contents:\n";
    while (getline(file, line)) {
        cout << line << '\n';
    }

    file.close();
    return 0;
}
