
// Develop a C++ program containing an Employee class. Include employeeNumber, name and salary as private data members. Provide a default constructor, a parameterized constructor using an initializer list, and a friend function that displays the employee details. Create at least three Employee objects and demonstrate the program. and explain more inside the code as comments
#include <iostream>
#include <string>
using namespace std;

// ============================================================
// Employee Class
// ============================================================
// This class represents an employee.
// It contains private data members and constructors
// for creating Employee objects.
// ============================================================

class Employee
{
private:
    // Private data members
    // These cannot be accessed directly from outside the class.
    int employeeNumber;
    string name;
    double salary;

public:
    // ========================================================
    // Default Constructor
    // ========================================================
    // A default constructor does not take any arguments.
    // It is automatically called when we create an object
    // without providing any values.
    //
    // Example:
    // Employee employee1;
    //
    // The values below will be assigned to employee1.
    // ========================================================

    Employee()
    {
        employeeNumber = 0;
        name = "Unknown";
        salary = 0.0;
    }

    // ========================================================
    // Parameterized Constructor
    // ========================================================
    // This constructor accepts values when an object is created.
    //
    // The initializer list is used to initialize the data
    // members directly.
    //
    // employeeNumber(employeeNumber)
    // means:
    //     class member employeeNumber = parameter employeeNumber
    //
    // name(name)
    // means:
    //     class member name = parameter name
    //
    // salary(salary)
    // means:
    //     class member salary = parameter salary
    // ========================================================

    Employee(int employeeNumber, string name, double salary)
        : employeeNumber(employeeNumber),
          name(name),
          salary(salary)
    {
    }

    // ========================================================
    // Friend Function Declaration
    // ========================================================
    // displayEmployee() is NOT a member function of Employee.
    //
    // However, by declaring it as a friend, we give it
    // permission to access the private members of Employee.
    // ========================================================

    friend void displayEmployee(const Employee &employee);
};

// ============================================================
// Friend Function Definition
// ============================================================
// This function is defined outside the Employee class.
//
// Normally, this function would NOT be allowed to access
// employeeNumber, name, and salary because they are private.
//
// Because we declared it as a friend inside the class,
// it has permission to access them.
// ============================================================

void displayEmployee(const Employee &employee)
{

    cout << "Employee Number: " << employee.employeeNumber << endl;
    cout << "Name: " << employee.name << endl;
    cout << "Salary: $" << employee.salary << endl;

    cout << "-----------------------------" << endl;
}

// ============================================================
// Main Function
// ============================================================

int main()
{

    // ========================================================
    // Object 1 - Default Constructor
    // ========================================================
    // No values are provided, so the default constructor runs.
    // ========================================================

    Employee employee1;

    // ========================================================
    // Object 2 - Parameterized Constructor
    // ========================================================
    // We provide the employee number, name and salary.
    // Therefore, the parameterized constructor runs.
    // ========================================================

    Employee employee2(1001, "Simon", 75000);

    // ========================================================
    // Object 3 - Parameterized Constructor
    // ========================================================

    Employee employee3(1002, "John", 65000);

    // ========================================================
    // Display Employee Details
    // ========================================================
    // displayEmployee() is a friend function, so it can
    // access the private data members of each Employee object.
    // ========================================================

    cout << "Employee 1:" << endl;
    displayEmployee(employee1);

    cout << "Employee 2:" << endl;
    displayEmployee(employee2);

    cout << "Employee 3:" << endl;
    displayEmployee(employee3);

    return 0;
}