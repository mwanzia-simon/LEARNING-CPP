#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // Setter for name
    void setName(string studentName) {
        name = studentName;
    }

    // Setter for marks with validation 
    void setMarks(int studentMarks) {
        if (studentMarks >= 0 && studentMarks <= 100) {
            marks = studentMarks;
        } else {
            cout << "Marks must be between 0 and 100." << endl;
        }
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Getter for marks
    int getMarks() {
        return marks;
    }
};

int main() {
    Student student;

    student.setName("Simon");
    student.setMarks(85);

    cout << "Student Name: " << student.getName() << endl;
    cout << "Student Marks: " << student.getMarks() << endl;

    return 0;
}