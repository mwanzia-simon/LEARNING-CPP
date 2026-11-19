#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculatePay() const = 0;
    virtual ~Employee() = default;
};

class SalariedEmployee : public Employee {
private:
    double monthlySalary;

public:
    SalariedEmployee(double salary)
        : monthlySalary(salary) {}

    double calculatePay() const override {
        return monthlySalary;
    }
};

class HourlyEmployee : public Employee {
private:
    double hoursWorked;
    double hourlyRate;

public:
    HourlyEmployee(double hours, double rate)
        : hoursWorked(hours), hourlyRate(rate) {}

    double calculatePay() const override {
        return hoursWorked * hourlyRate;
    }
};

int main() {
    SalariedEmployee e1(60000);
    HourlyEmployee e2(160, 300);

    Employee* employees[] = {&e1, &e2};

    for (const Employee* e : employees) {
        cout << "Pay: KES "
             << e->calculatePay() << endl;
    }

    return 0;
}
