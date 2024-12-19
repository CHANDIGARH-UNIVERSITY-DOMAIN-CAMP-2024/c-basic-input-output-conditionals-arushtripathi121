#include <iostream>
using namespace std;

class Shape {
public:
    double area(double radius) {
        return 3.14159 * radius * radius;
    }
    
    int area(int length, int breadth) {
        return length * breadth;
    }
    
    double area(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    Shape s;
    cout << s.area(5.0) << endl;
    cout << s.area(4, 6) << endl;
    cout << s.area(3.0, 7.0) << endl;
    return 0;
}
