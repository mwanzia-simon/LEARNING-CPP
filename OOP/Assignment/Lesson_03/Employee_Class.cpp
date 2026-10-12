#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeNumber;
    string name;
    double salary;

public:
    Employee()
    {
        employeeNumber = 0;
        name = "Unknown";
        salary = 0.0;
    }

    Employee(int empNo, string empName, double empSalary)
        : employeeNumber(empNo), name(empName), salary(empSalary)
    {
    }

    friend void displayEmployee(const Employee &emp);
};

void displayEmployee(const Employee &emp)
{
    cout << "Employee Number: " << emp.employeeNumber << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Salary: " << emp.salary << endl;
    cout << "------------------------" << endl;
}

int main()
{

    Employee emp1;

    Employee emp2(101, "Simon", 50000);

    Employee emp3(102, "John", 65000);

    cout << "EMPLOYEE DETAILS" << endl;
    cout << "========================" << endl;

    displayEmployee(emp1);
    displayEmployee(emp2);
    displayEmployee(emp3);

    return 0;
}