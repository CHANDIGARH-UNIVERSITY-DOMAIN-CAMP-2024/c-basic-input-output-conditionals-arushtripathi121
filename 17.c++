#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    string model;
    double mileage;

public:
    Vehicle(string b, string m, double mil) : brand(b), model(m), mileage(mil) {}
    virtual void display() {
        cout << "Vehicle: " << brand << " " << model << endl;
        cout << "Mileage: " << mileage << endl;
    }
};

class Car : public Vehicle {
protected:
    double fuel;
    double distance;

public:
    Car(string b, string m, double mil, double f, double d) : Vehicle(b, m, mil), fuel(f), distance(d) {}

    void fuelEfficiency() {
        cout << "Fuel Efficiency: " << distance / fuel << " miles/gallon" << endl;
    }

    void display() override {
        Vehicle::display();
        fuelEfficiency();
    }
};

class ElectricCar : public Car {
private:
    double batteryCapacity;
    double efficiency;

public:
    ElectricCar(string b, string m, double mil, double cap, double eff)
        : Car(b, m, mil, 0, 0), batteryCapacity(cap), efficiency(eff) {}

    void range() {
        cout << "Range: " << batteryCapacity * efficiency << " miles" << endl;
    }

    void display() override {
        Vehicle::display();
        range();
    }
};

int main() {
    int vehicleType;
    cout << "Enter Vehicle Type (1 for Car, 2 for Electric Car): ";
    cin >> vehicleType;
    
    string brand, model;
    double mileage;
    
    cout << "Enter Brand: ";
    cin >> brand;
    cout << "Enter Model: ";
    cin >> model;
    cout << "Enter Mileage: ";
    cin >> mileage;

    if (vehicleType == 1) {
        double fuel, distance;
        cout << "Enter Fuel (gallons): ";
        cin >> fuel;
        cout << "Enter Distance Covered (miles): ";
        cin >> distance;
        Car car(brand, model, mileage, fuel, distance);
        car.display();
    } 
    else if (vehicleType == 2) {
        double batteryCapacity, efficiency;
        cout << "Enter Battery Capacity (kWh): ";
        cin >> batteryCapacity;
        cout << "Enter Efficiency (miles per kWh): ";
        cin >> efficiency;
        ElectricCar electricCar(brand, model, mileage, batteryCapacity, efficiency);
        electricCar.display();
    } 
    else {
        cout << "Invalid vehicle type." << endl;
    }

    return 0;
}
