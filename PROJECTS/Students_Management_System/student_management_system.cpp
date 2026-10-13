#include <iostream>
using namespace std;
#include <limits>
class Student
{
private:
    string studentName;
    int registrationNumber;
    int marks;

public:
    // constructor function
    Student()
    {
        studentName = "";
        registrationNumber = 0;
        marks = 0;
    }
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
    string calculateGrade(int mks)
    {
        string grade;

        if (mks >= 80 and mks <= 100)
        {
            grade = "A";
        }
        else if (mks >= 70 and mks <= 79)
        {
            grade = "B";
        }
        else if (mks >= 60 and mks <= 69)
        {
            grade = "C";
        }
        else if (mks >= 50 and mks <= 59)
        {
            grade = "D";
        }
        else if (mks >= 0 and mks <= 49)
        {
            grade = "F";
        }
        else
        {
            grade = "__";
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
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter student name: ";
            getline(cin, name);

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