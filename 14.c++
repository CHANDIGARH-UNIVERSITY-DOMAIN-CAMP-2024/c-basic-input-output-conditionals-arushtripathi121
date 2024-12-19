#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;

public:
    Student(int r, string n) : rollNo(r), name(n) {}

    void displayStudentDetails() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

class Result : public Student {
private:
    int marks1, marks2, marks3;
    int total;
    float percentage;

public:
    Result(int r, string n, int m1, int m2, int m3) : Student(r, n), marks1(m1), marks2(m2), marks3(m3) {
        total = marks1 + marks2 + marks3;
        percentage = (float)total / 3;
    }

    void displayResult() {
        displayStudentDetails();
        cout << "Marks: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    int rollNo, m1, m2, m3;
    string name;

    cin >> rollNo;
    cin.ignore();
    getline(cin, name);
    cin >> m1 >> m2 >> m3;

    Result studentResult(rollNo, name, m1, m2, m3);
    studentResult.displayResult();

    return 0;
}
