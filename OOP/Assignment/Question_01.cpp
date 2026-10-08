// Question 1: Classes and Objects (10 Marks)
// A university wants to develop a simple system for managing student information.
// Write a C++ program that creates a class named Student with the following attributes:
// - studentID
// - studentName
// - course
// - age
// Tasks:
// a) Define the Student class with appropriate data types. (2 marks)
// b) Create a parameterized constructor to initialize the student attributes. (2 marks)
// c) Create a member function named displayDetails() to display student information. (2 marks)
// d) Create three student objects with different details. (3 marks)
// e) Call the displayDetails() function for each object. (1 mark)

#include <iostream>
using namespace std;

class Student
{
private:
    int studentID;
    string studentName;
    string course;
    int age;

public:
    // Paramitized constructor
    Student(int id, string name, string c, int a)
    {
        studentID = id;
        studentName = name;
        course = course;
        age = a;
    }

    // Member function
    void displayDetails()
    {
        cout << "studentID: " << studentID << endl;
        cout << "studentName: " << studentName << endl;
        cout << "course: " << course << endl;
        cout << "age: " << age << endl;
        cout << "--------------------------------" << endl;
    }
};

int main()
{
    cout << "Hello, World!" << endl;
    return 0;
}
