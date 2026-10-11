#include <iostream>
using namespace std;

int main()
{
    int marks;
    string grade;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80 and marks <= 100)
    {
        grade = "A";
    }
    else if (marks >= 70 and marks <= 79)
    {
        grade = "B";
    }

    return 0;
}