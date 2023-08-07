#include<bits/stdc++.h>
using namespace std;

class Employee {
private:
    int ID;
    double salary;

public:
    Employee(int id, double sal) : ID(id), salary(sal) {}

    int getID() const {
        return ID;
    }

    double getSalary() const {
        return salary;
    }

    friend Employee findHighestSalaryEmployee(const Employee& emp1, const Employee& emp2);
};

Employee findHighestSalaryEmployee(const Employee& emp1, const Employee& emp2) {
    return emp1.salary > emp2.salary ? emp1 : emp2;
}

int main() {
    Employee emp1(101, 45000.0);
    Employee emp2(102, 52000.0);

    Employee highestSalaryEmployee = findHighestSalaryEmployee(emp1, emp2);

    cout << "Employee ID: " << highestSalaryEmployee.getID() << endl;
    cout << "Employee Salary: " << highestSalaryEmployee.getSalary() << endl;

    return 0;
}
