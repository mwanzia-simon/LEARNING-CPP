#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    // Private attributes are accessed through class functions
    // or a friend function.
    string admissionNumber;
    string name;
    string course;
    double marks;

public:
    /*
    CONSTRUCTOR
    - Has the same name as the class: Student.
    - Has no return type, not even void.
    - Runs automatically when an object is created.
    - Gives the object its initial values.

    DIFFERENCE FROM A SETTER:
    A constructor initializes a new object.
    A setter updates an attribute of an existing object.
    */
    Student(string admission, string studentName,
            string studentCourse, double studentMarks) {
        admissionNumber = admission;
        name = studentName;
        course = studentCourse;

        // Start with a valid default value.
        marks = 0;

        // A constructor can call a setter to reuse validation.
        setMarks(studentMarks);
    }

    /*
    SETTERS
    - Are ordinary member functions, commonly named set...
    - Have a return type, usually void.
    - Run when explicitly called.
    - Update private attributes after an object exists.
    - Can validate a value before accepting it.
    */
    void setName(string studentName) {
        name = studentName;
    }

    void setCourse(string studentCourse) {
        course = studentCourse;
    }

    void setMarks(double studentMarks) {
        if (studentMarks >= 0 && studentMarks <= 100) {
            marks = studentMarks;
        } else {
            // Keep the previous marks if the new value is invalid.
            cout << "Invalid marks. Enter a value from 0 to 100.\n";
        }
    }

    /*
    GETTERS
    - Return the values of private attributes.
    - Read information without changing it.
    - const means these functions do not modify the object.
    */
    string getAdmissionNumber() const {
        return admissionNumber;
    }

    string getName() const {
        return name;
    }

    string getCourse() const {
        return course;
    }

    double getMarks() const {
        return marks;
    }

    /*
    FRIEND FUNCTION
    - Is not a member of the class.
    - Receives permission to access private attributes.
    */
    friend void displayStudentReport(const Student& student);
};

// Defined outside the class.
// const Student& avoids copying and prevents modification.
void displayStudentReport(const Student& student) {
    cout << "\n===== STUDENT REPORT =====\n";
    cout << "Admission number: " << student.admissionNumber << '\n';
    cout << "Name: " << student.name << '\n';
    cout << "Course: " << student.course << '\n';
    cout << "Marks: " << student.marks << '\n';
    cout << "Result: "
         << (student.marks >= 50 ? "Pass" : "Fail") << '\n';
}

int main() {
    // CONSTRUCTOR: automatically initializes this new object.
    Student student1(
        "BIT/001/2026",
        "Mary Wanjiku",
        "Information Technology",
        72
    );

    // GETTERS: read the object's current values.
    cout << "Original student details\n";
    cout << "Name: " << student1.getName() << '\n';
    cout << "Course: " << student1.getCourse() << '\n';
    cout << "Marks: " << student1.getMarks() << '\n';

    // SETTERS: explicitly update the SAME existing object.
    // These calls do not create a new student.
    student1.setName("Mary Wanjiku Kamau");
    student1.setCourse("Computer Science");
    student1.setMarks(85);

    // FRIEND FUNCTION: called without student1. before its name.
    displayStudentReport(student1);

    return 0;
}