#include <iostream>
using namespace std;

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