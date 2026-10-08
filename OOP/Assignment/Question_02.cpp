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
    int salary;

public:
    // Constuctor
    Employee(int id, string name, int s)
    {
        employeeID = id;
        employeeName = name;
        salary = s;
    };

    // Salary setter function
    void setSalary(int s)
    {
        if (s < 0)
        {
            cout << "salary cannot be set to a negative value!" << endl;
        }
        else
        {
            salary = s;
        }
    }

    // Salary getter function
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee employee1(100,"simon",20000);
    return 0;
}
