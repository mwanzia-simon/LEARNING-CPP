#include <iostream>
using namespace std;

// Parent class
class Person {
public:
    string name;
    int age;

    void introduce() {
        cout << "My name is " << name << "." << endl;
        cout << "I am " << age << " years old." << endl;
    }
};

// Child class inherits from Person
class Student : public Person {
public:
    string course;

    void displayCourse() {
        cout << "I study " << course << "." << endl;
    }
};

int main() {
    Student student;

    // These members are inherited from Person
    student.name = "Simon";
    student.age = 20;

    // This belongs to Student
    student.course = "Information Technology";

    student.introduce();
    student.displayCourse();

    return 0;
}