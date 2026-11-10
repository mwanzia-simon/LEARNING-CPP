#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person
{
private:
    string registrationNumber;

public:
    Student(string n, int a, string reg)
        : Person(n, a)
    {

        registrationNumber = reg;
    }

    void displayStudent()
    {
        displayInfo();
        cout << "Registration Number: "
             << registrationNumber << endl;
    }
};

class Lecturer : public Person
{
private:
    string employeeNumber;

public:
    Lecturer(string n, int a, string emp)
        : Person(n, a)
    {

        employeeNumber = emp;
    }

    void displayLecturer()
    {
        displayInfo();
        cout << "Employee Number: "
             << employeeNumber << endl;
    }
};

class Course
{
private:
    string courseName;
    Lecturer lecturer;

public:
    Course(string cName, Lecturer l)
        : courseName(cName), lecturer(l)
    {
    }

    void displayCourse()
    {
        cout << "\nCourse: " << courseName << endl;

        cout << "Lecturer Information:" << endl;
        lecturer.displayLecturer();
    }
};

int main()
{
    Student student1("simon", 21, "STU002");
    Lecturer lecturer1("John", 35, "LEC002");
    Course course1("Object Oriented programming", lecturer1);

    cout << "--- STUDENT INFORMATION ---" << endl;
    student1.displayStudent();

    cout << "\n --- COURSE INFORMATION ---" << endl;
    course1.displayCourse();

    return 0;
}