#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("sample.txt", ios::app);

    if (!file) {
        cout << "Unable to open file.\n";
        return 1;
    }

    file << "This line is appended to the file.\n";
    file.close();

    cout << "Data appended successfully.\n";
    return 0;
}
