#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0; 
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double getArea() override {
        return length * breadth;
    }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double getArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    double radius, length, breadth, base, height;

    cin >> radius;
    Circle circle(radius);
    cout << "Circle Area: " << circle.getArea() << endl;

    cin >> length >> breadth;
    Rectangle rectangle(length, breadth);
    cout << "Rectangle Area: " << rectangle.getArea() << endl;

    cin >> base >> height;
    Triangle triangle(base, height);
    cout << "Triangle Area: " << triangle.getArea() << endl;

    return 0;
}
