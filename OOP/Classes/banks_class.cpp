#include <iostream>
using namespace std;
class BankAccount {
private:
    double balance;
public:
    // Question 19 & 20: Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    // Question 19 & 21: Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance."
                 << endl;
        }
    }
    // Question 19: Get balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.deposit(5000);
    account.withdraw(1500);
    cout << "Current Balance: "
         << account.getBalance() << endl;
    return 0;
}