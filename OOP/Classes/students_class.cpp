#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string registrationNumber;
    string name;
    double marks;

public:
    // Question 11: Setter and Getter for registration number
    void setRegistrationNumber(string regNumber) {
        registrationNumber = regNumber;
    }
    string getRegistrationNumber() {
        return registrationNumber;
    }
    // Question 11: Setter and Getter for name
    void setName(string studentName) {
        name = studentName;
    }
    string getName() {
        return name;
    }
    // Question 12: Setter for marks with validation
    void setMarks(double studentMarks) {
        if (studentMarks >= 0 && studentMarks <= 100) {
            marks = studentMarks;
        } else {
            cout << "Invalid marks. Marks must be between 0 and 100."
                 << endl;
        }
    }
    // Question 11: Getter for marks
    double getMarks() {
        return marks;
    }
    // Question 13: Display student details
    void displayDetails() {
        cout << "Registration Number: "
             << registrationNumber << endl;
        cout << "Name: "
             << name << endl;
        cout << "Marks: "
             << marks << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    // Question 13: Create first Student object
    Student student1;
    student1.setRegistrationNumber("STU001");
    student1.setName("John");
    student1.setMarks(85);
    // Question 13: Create second Student object
    Student student2;
    student2.setRegistrationNumber("STU002");
    student2.setName("Mary");
    student2.setMarks(92);
    // Display details of both students
    student1.displayDetails();
    student2.displayDetails();
    return 0;
}