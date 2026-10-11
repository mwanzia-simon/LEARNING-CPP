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
    else if (marks >= 60 and marks <= 69)
    {
        grade = "C";
    }
    else if (marks >= 50 and marks <= 59)
    {
        grade = "D";
    }
    else if (marks >= 40 and marks <= 49)
    {
        grade = "E";
    }

    return 0;
}