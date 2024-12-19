#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    float empSalary;

public:
    void setEmployeeID(int id) {
        empID = id;
    }

    void setEmployeeName(string name) {
        empName = name;
    }

    void setEmployeeSalary(float salary) {
        empSalary = salary;
    }

    // Getter Methods
    int getEmployeeID() {
        return empID;
    }

    string getEmployeeName() {
        return empName;
    }

    float getEmployeeSalary() {
        return empSalary;
    }

    void displayEmployeeDetails() {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Salary: " << empSalary << endl;
    }
};

int main() {
    Employee emp;
    
    int id;
    string name;
    float salary;
    
    cin >> id;
    cin.ignore();
    getline(cin, name);
    cin >> salary;

    emp.setEmployeeID(id);
    emp.setEmployeeName(name);
    emp.setEmployeeSalary(salary);

    emp.displayEmployeeDetails();

    return 0;
}
