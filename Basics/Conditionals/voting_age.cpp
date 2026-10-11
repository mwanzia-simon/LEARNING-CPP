#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Please Enter your age: ";
    cin >> age;

    if (age < 18)
    {
        cout << "You are not Eligible to vote!" << endl;
    }
    else
    {
        cout << "You are Eligible to vote!" << endl;
    }

    return 0;
}