#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << number << " Is an even number." << endl;
    }
    else
    {
        cout << number << " is an odd number." << endl;
    }

    return 0;
}