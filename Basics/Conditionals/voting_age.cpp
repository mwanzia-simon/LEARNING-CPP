#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Please Enter your age: ";
    cin >> age;

    if(age < 18){
        cout << "You are not Eligible!" <<endl;
    }

    return 0;
}