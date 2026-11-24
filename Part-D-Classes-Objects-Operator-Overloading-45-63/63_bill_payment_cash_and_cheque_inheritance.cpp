#include <iostream>
#include <string>
using namespace std;

class Bill {
protected:
    int billNumber;
    float amount;

public:
    void inputBill() {
        cout << "Enter bill number: ";
        cin >> billNumber;
        cout << "Enter bill amount: ";
        cin >> amount;
    }

    void displayBill() const {
        cout << "Bill number: " << billNumber << '\n';
        cout << "Bill amount: " << amount << '\n';
    }
};

class CashPayment : public Bill {
public:
    void pay() {
        inputBill();
        cout << "\nCash Payment\n";
        displayBill();
        cout << "Payment mode: Cash\n";
        cout << "Cash paid: " << amount << '\n';
    }
};

class ChequePayment : public Bill {
    string chequeNumber;

public:
    void pay() {
        inputBill();
        cout << "Enter cheque number: ";
        cin >> chequeNumber;

        cout << "\nCheque Payment\n";
        displayBill();
        cout << "Payment mode: Cheque\n";
        cout << "Cheque number: " << chequeNumber << '\n';
        cout << "Cheque amount: " << amount << '\n';
    }
};

int main() {
    int choice;
    cout << "1. Payment by cash\n2. Payment by cheque\nChoose payment mode: ";
    cin >> choice;

    if (choice == 1) {
        CashPayment payment;
        payment.pay();
    } else if (choice == 2) {
        ChequePayment payment;
        payment.pay();
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
