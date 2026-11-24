#include <iostream>
#include <string>
using namespace std;

class Note {
protected:
    string noteName;
public:
    void setNote(const string& name) {
        noteName = name;
    }
    void showNote() const {
        cout << "Note: " << noteName << '\n';
    }
};

class Server : public Note {
protected:
    string serverName;
public:
    void setServer(const string& name) {
        serverName = name;
    }
    void showServer() const {
        cout << "Server: " << serverName << '\n';
    }
};

class Device : public Server {
    string deviceName;
public:
    void setDevice(const string& note, const string& server, const string& device) {
        setNote(note);
        setServer(server);
        deviceName = device;
    }
    void display() const {
        showNote();
        showServer();
        cout << "Device: " << deviceName << '\n';
    }
};

int main() {
    Device d;
    string note, server, device;

    cout << "Enter note name: ";
    getline(cin, note);
    cout << "Enter server name: ";
    getline(cin, server);
    cout << "Enter device name: ";
    getline(cin, device);

    d.setDevice(note, server, device);
    cout << "\nDevice Details\n";
    d.display();
    return 0;
}
