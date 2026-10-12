#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance = 0;

public:
    // Deposit money function
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Deposit succesifull!" << endl;
        }
    }

    // Withdraw money function
    void withdraw(double amount)
    {
        if (amount > 0 and amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdraw succesifull!" << endl;
        }
        else
        {
            cout << "Invalid withdrawal or Insufficient Funds!" << endl;
        }
    }

    // CheckBalance function
    double checkBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account;

    int choice;
    double amount;

    while (true)
    {
        cout << "\n ========== ATM SIMULATOR ==========\n";
        cout << "1. Check balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter your option: ";
        cin >> choice;

        // Switch case
        switch (choice)
        {
        case 1:
            cout << "Balance: " << account.checkBalance() << endl;
            break;
        case 2:
            cout << "Enter the amount you wish to deposit: ";
            cin >> amount;
            account.deposit(amount);
            break;
        case 3:
            cout << "Enter the amount you wish to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 4:
            cout << "Thank you for using our ATM!" << endl;
            return 0;

        default:
            cout << "Invalid choice.Please try again!" << endl;
        }
    }

    return 0;
}