// Question 2: Encapsulation and Information Hiding (10 Marks)
// A company wants to develop a system for managing employee salaries.
// Create a C++ class named Employee containing:
// - employeeID
// - employeeName
// - salary
// Tasks:
// a) Declare all attributes as private. (2 marks)
// b) Create a constructor to initialize the employee attributes. (2 marks)
// c) Implement setSalary() and getSalary() methods. (2 marks)
// d) Ensure that the salary cannot be set to a negative value. (2 marks)
// e) Create an employee object and demonstrate how the salary can be accessed and modified using getters and setters. (2 marks)

#include <iostream>
using namespace std;

class Employee
{

private:
    int employeeID;
    string employeeName;
    double salary;

public:
    // Constuctor
    Employee(int id, string name, double s)
    {
        employeeID = id;
        employeeName = name;

        if (s >= 0)
        {

            salary = s;
        }
        else
        {
            salary = 0;
        }
    };

    // Salary setter function
    void setSalary(int s)
    {
        if (s >= 0)
        {
            salary = s;
        }
        else
        {
            cout << "salary cannot be set to a negative value!" << endl;
        }
    }

    // Salary getter function
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee employee1(100, "simon", 20000);

    // getting the current salary
    cout << "Current salary: " << employee1.getSalary() << endl;

    // Modifying the salary
    employee1.setSalary(100000);

    // Getting the updated salary
    cout << "Updated salary: " << employee1.getSalary() << endl;

    // Se
    return 0;
}
