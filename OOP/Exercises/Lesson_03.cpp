
// Employee class with private data and friend function.
#include <iostream>
#include <string>
using namespace std;

// Employee class.
class Employee
{
private:
    int employeeNumber;
    string name;
    double salary;

public:
    // Default constructor.
    Employee()
    {
        employeeNumber = 0;
        name = "Unknown";
        salary = 0.0;
    }

    // Parameterized constructor with initializer list.
    Employee(int employeeNumber, string name, double salary)
        : employeeNumber(employeeNumber),
          name(name),
          salary(salary)
    {
    }

    // Friend function can access private members.
    friend void displayEmployee(const Employee &employee);
};

// Display employee details.
void displayEmployee(const Employee &employee)
{
    cout << "Employee Number: " << employee.employeeNumber << endl;
    cout << "Name: " << employee.name << endl;
    cout << "Salary: $" << employee.salary << endl;
    cout << "-----------------------------" << endl;
}

int main()
{
    // Create objects.
    Employee employee1;
    Employee employee2(1001, "Simon", 75000);
    Employee employee3(1002, "John", 65000);

    // Show details.
    cout << "Employee 1:" << endl;
    displayEmployee(employee1);

    cout << "Employee 2:" << endl;
    displayEmployee(employee2);

    cout << "Employee 3:" << endl;
    displayEmployee(employee3);

    return 0;
}

// Develop a C++ program containing an Employee class. Include employeeNumber, name and salary as private data members. Provide a default constructor, a parameterized constructor using an initializer list, and a friend function that displays the employee details. Create at least three Employee objects and demonstrate the program.