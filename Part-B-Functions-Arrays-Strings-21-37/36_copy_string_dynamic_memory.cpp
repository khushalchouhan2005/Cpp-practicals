#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char source[500];
    cout << "Enter a string: ";
    cin.getline(source, 500);
    char *copy = new char[strlen(source) + 1];
    strcpy(copy, source);
    cout << "Original: " << source << '\n';
    cout << "Copied: " << copy << '\n';
    delete[] copy;
    return 0;
}
