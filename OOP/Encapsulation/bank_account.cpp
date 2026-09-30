#include <iostream>
using namespace std;

class BankAccount {
private:
    // Private data members
    double balance;

public:
    // Setter
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
        } else {
            cout << "Balance cannot be negative." << endl;
        }
    }

    // Getter
    double getBalance() {
        return balance;
    }

    // Public function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }
};

int main() {
    BankAccount account;

    // Accessing the private data through public functions
    account.setBalance(1000);

    cout << "Initial balance: " << account.getBalance() << endl;

    account.deposit(500);

    cout << "Balance after deposit: " << account.getBalance() << endl;

    return 0;
}