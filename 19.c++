#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void calculateArea() = 0;
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    void calculateArea() override {
        cout << "Shape: Rectangle" << endl;
        cout << "Area: " << length * width << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    void calculateArea() override {
        cout << "Shape: Circle" << endl;
        cout << "Area: " << 3.14159 * radius * radius << endl;
    }
};

class Triangle : public Shape {
private:
    float base, height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    void calculateArea() override {
        cout << "Shape: Triangle" << endl;
        cout << "Area: " << 0.5 * base * height << endl;
    }
};

int main() {
    int shapeType;
    cout << "Enter Shape Type (1 for Rectangle, 2 for Circle, 3 for Triangle): ";
    cin >> shapeType;

    if (shapeType == 1) {
        float length, width;
        cout << "Enter Length and Width: ";
        cin >> length >> width;
        Shape* shape = new Rectangle(length, width);
        shape->calculateArea();
    }
    else if (shapeType == 2) {
        float radius;
        cout << "Enter Radius: ";
        cin >> radius;
        Shape* shape = new Circle(radius);
        shape->calculateArea();
    }
    else if (shapeType == 3) {
        float base, height;
        cout << "Enter Base and Height: ";
        cin >> base >> height;
        Shape* shape = new Triangle(base, height);
        shape->calculateArea();
    }
    else {
        cout << "Invalid shape type." << endl;
    }

    return 0;
}
