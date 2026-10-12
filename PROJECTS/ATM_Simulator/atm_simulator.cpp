#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    // Deposit money function
    void deposit(double amount) {}

    // Withdraw money function
    void withdraw(double amount) {}

    // CheckBalance function
    double checkBalance()
    {
    }
};

int main()
{

    int choice;

    while (true)
    {
        cout << "\n ========== ATM SIMULATOR ==========\n";
        cout << "1. Check balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter your option: ";
        cin >> choice;
    }

    return 0;
}