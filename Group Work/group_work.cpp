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

int main()
{

    return 0;
}