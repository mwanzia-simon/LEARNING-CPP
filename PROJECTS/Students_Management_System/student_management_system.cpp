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

        if (mks < 0 or mks > 100)
        {
            cout << "Invalid marks!" << endl;
            marks = 0;
            return;
        }
        else
        {

            marks = mks;
            cout << "Student registred succesifully!" << endl;
        }
    }

    // // Member function to calculate students grade
    string calculateGrade(int marks)
    {
        string grade;

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
        else if (marks >= 0 and marks <= 49)
        {
            grade = "F";
        }
        else
        {
            cout << "Invalid marks!" << endl;
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

            student.registerStudent(name, regNo, mks);

            break;
        case 2:
            student.displayDetails();
            break;
        case 3:
            cout << "Enter the marks: ";
            cin >> mks;
            cout << "GRADE: " << student.calculateGrade(mks) << endl;
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