#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle starts" << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
};

int main() {
    Car car;

    car.start();
    car.drive();

    return 0;
}
