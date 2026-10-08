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

class Employee{

    private:
        int employeeID;
        string employeeName;
        int salary;
    
    };

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
