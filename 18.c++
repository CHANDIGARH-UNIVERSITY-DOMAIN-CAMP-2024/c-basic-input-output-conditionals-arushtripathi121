#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    double real, imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator * (const Complex& other) {
        return Complex(real * other.real - imaginary * other.imaginary, 
                       real * other.imaginary + imaginary * other.real);
    }

    double magnitude() {
        return sqrt(real * real + imaginary * imaginary);
    }

    void display() {
        if (imaginary >= 0) 
            cout << real << " + " << imaginary << "i" << endl;
        else 
            cout << real << " - " << -imaginary << "i" << endl;
    }
};

int main() {
    int operation;
    cout << "Enter Operation Type (1 for Addition, 2 for Multiplication, 3 for Magnitude): ";
    cin >> operation;

    double real1, imag1, real2, imag2;
    
    if (operation == 1 || operation == 2) {
        cout << "Enter First Complex Number (real imaginary): ";
        cin >> real1 >> imag1;
        cout << "Enter Second Complex Number (real imaginary): ";
        cin >> real2 >> imag2;
    }
    else if (operation == 3) {
        cout << "Enter Complex Number (real imaginary): ";
        cin >> real1 >> imag1;
    }
    else {
        cout << "Invalid operation type." << endl;
        return 0;
    }

    Complex c1(real1, imag1), c2(real2, imag2);

    if (operation == 1) {
        Complex result = c1 + c2;
        cout << "Result: ";
        result.display();
    }
    else if (operation == 2) {
        Complex result = c1 * c2;
        cout << "Result: ";
        result.display();
    }
    else if (operation == 3) {
        double result = c1.magnitude();
        cout << "Magnitude = " << result << endl;
    }

    return 0;
}
