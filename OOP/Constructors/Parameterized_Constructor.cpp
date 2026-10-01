#include <iostream>
using namespace std;

// Default constructor → takes no arguments
// Parameterized constructor → takes arguments
// Copy constructor → creates an object by copying another object

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating an object
    Student student1("Simon",22);

    student1.display();

    return 0;
}