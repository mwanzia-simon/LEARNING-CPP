#include <iostream>
using namespace std;

class Student
{
private:
    string studentName;
    int registrationNumber;
    int marks;

public:
    // //  Member function to register a student
    void registerStudent(string name, int regNo, int mks)
    {
        studentName = name;
        registrationNumber = regNo;
        marks = mks;
    }

    // // Member function to calculate students grade
    string calculateGrade(int marks)
    {
        string grade;

        if (marks>10)
        {
        }

        return grade;
    }

    // Member function to display students details
    void displayDetails()
    {
        cout << "\n _________ Student Details __________\n";
        cout << "Student name: " << studentName << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade(marks) << endl;
    }
};

int main()
{

    Student student;
    int choice;
    string name;
    int regNo;
    int mks;

    while (true)
    {
        cout << "\n========= STUDENT MANAGEMENT SYSTEM ==========\n";
        cout << "1. Register Student\n";
        cout << "2. View Student Details\n";
        cout << "3. Calculate Grade\n";
        cout << "4. Exit\n";

        cout << "Enter your option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter student name: ";
            cin >> name;

            cout << "Enter student registration number: ";
            cin >> regNo;

            cout << "Enter students marks: ";
            cin >> mks;

            break;
        case 2:
            cout << "Openning student details ...";
            break;
        case 3:
            cout << "Calculating student  grade...";
            break;
        case 4:
            cout << "Exiting program  ...";
            return 0;

        default:
            cout << "Invalid choice. Please try again!\n";
            break;
        }
    }

    return 0;
}