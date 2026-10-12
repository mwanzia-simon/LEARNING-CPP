#include <iostream>
#include <string>
using namespace std;
// class BankAccount {
// private:
//     double balance;
// public:
//     // Question 19 & 20: Deposit money
//     void deposit(double amount) {
//         if (amount > 0) {
//             balance = balance + amount;
//         } else {
//             cout << "Invalid deposit amount." << endl;
//         }
//     }
//     // Question 19 & 21: Withdraw money
//     void withdraw(double amount) {
//         if (amount > 0 && amount <= balance) {
//             balance = balance - amount;
//         } else {
//             cout << "Invalid withdrawal amount or insufficient balance."
//                  << endl;
//         }
//     }
//     // Question 19: Get balance
//     double getBalance() {
//         return balance;
//     }
// };

// int main() {
//     BankAccount account;
//     account.deposit(5000);
//     account.withdraw(1500);
//     cout << "Current Balance: "
//          << account.getBalance() << endl;
//     return 0;
// }

class BankAccount
{
private:
    double balance;

public:
    // Deposit function
    void deposit(double amount)
    {
        if (amount >= 0)
        {
            balance = amount;
        }
    }

    // Withdraw function
    void withdraw(double amount)
    {
        if (amount > 0 and amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Invalid withdrawal or insuffiecient funds!" << endl;
        }
    }

    // getBalance function
    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account1;
    BankAccount account2;

    account1.deposit(1000);
    account2.deposit(1300);

    account1.withdraw(1500);

    cout << "Account 1: " << account1.getBalance() << endl;
    cout << "Account 2: " << account2.getBalance() << endl;

    return 0;
}
