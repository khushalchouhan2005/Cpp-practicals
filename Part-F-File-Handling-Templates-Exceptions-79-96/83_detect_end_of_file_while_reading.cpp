#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream out("eof_demo.txt");
    out << "First line\nSecond line\nThird line\n";
    out.close();

    ifstream in("eof_demo.txt");
    if (!in) {
        cout << "Unable to open file.\n";
        return 1;
    }

    string line;
    while (getline(in, line)) {
        cout << line << '\n';
    }

    if (in.eof()) {
        cout << "End of file reached.\n";
    }

    in.close();
    return 0;
}
