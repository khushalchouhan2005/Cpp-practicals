#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("sample.txt");

    if (!file) {
        cout << "Unable to create file.\n";
        return 1;
    }

    file << "Welcome to C++ file handling.\n";
    file << "This is Practical 79.\n";
    file.close();

    cout << "Data written to file successfully.\n";
    return 0;
}
