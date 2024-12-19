#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double getArea() const = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double getArea() const override {
        return length * breadth;
    }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double getArea() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape* shape;
    int type;
    
    cin >> type;
    if (type == 1) {
        double length, breadth;
        cin >> length >> breadth;
        shape = new Rectangle(length, breadth);
    } else if (type == 2) {
        double radius;
        cin >> radius;
        shape = new Circle(radius);
    } else if (type == 3) {
        double base, height;
        cin >> base >> height;
        shape = new Triangle(base, height);
    }

    cout << "Area of shape: " << shape->getArea() << endl;

    delete shape;
    return 0;
}
