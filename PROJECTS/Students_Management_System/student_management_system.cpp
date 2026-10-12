#include <iostream>
using namespace std;

class Student
{
private:
    string studentName;
    int registrationNumber;
    int marks;

public:
    //  Member function to register a student
    void registerStudent(string name, int regNo, int mks) {}

    // Member function to calculate students grade
    void calculateGrade(int marks) {}

    // Member function to display students details
    void displayDetails() {}
};

int main()
{

    int choice;

    while (true)
    {
        cout << "========= STUDENT MANAGEMENT SYSTEM ==========\n";
        cout << "1. Register Student\n";
        cout << "2. View Student Details\n";
        cout << "3. Calculate Grade\n";
        cout << "4. Exit\n";

        cout << "Enter your option: ";
        cin >> choice;
    }

    return 0;
}