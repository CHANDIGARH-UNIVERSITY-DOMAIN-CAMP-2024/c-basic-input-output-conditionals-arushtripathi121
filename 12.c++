#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() = 0;
};

class Intern : public Employee {
public:
    void calculateSalary() {
        int stipend;
        cin >> stipend;
        cout << "Intern Salary: " << stipend << endl;
    }
};

class RegularEmployee : public Employee {
public:
    void calculateSalary() {
        int baseSalary, bonuses;
        cin >> baseSalary >> bonuses;
        cout << "Employee Salary: " << baseSalary + bonuses << endl;
    }
};

class Manager : public Employee {
public:
    void calculateSalary() {
        int baseSalary, bonuses, incentives;
        cin >> baseSalary >> bonuses >> incentives;
        cout << "Manager Salary: " << baseSalary + bonuses + incentives << endl;
    }
};

int main() {
    Intern intern;
    RegularEmployee emp;
    Manager manager;
    
    intern.calculateSalary();
    emp.calculateSalary();
    manager.calculateSalary();
    
    return 0;
}
