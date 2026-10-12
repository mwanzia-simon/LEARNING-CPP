#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    // Deposit money function
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance = amount;
        }
    }

    // Withdraw money function
    void withdraw(double amount)
    {
        if (amount > 0 and amount <= balance)
        {
            balance = balance - amount;
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

        // Switch case
        switch (choice)
        {
        case 1:
            cout << "Checking balance ..." << endl;
            break;
        case 2:
            cout << "Depositng money ..." << endl;
            break;
        case 3:
            cout << "Withdrawing money ..." << endl;
            break;
        case 4:
            cout << "Exiting program ..." << endl;
            return 0;

        default:
            cout << "Invalid choice.Please try again!" << endl;
        }
    }

    return 0;
}