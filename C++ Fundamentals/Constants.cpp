#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159f; // Constant for Pi
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = PI * radius * radius; // Area calculation using constant
    cout << "Area of the circle: " << area << endl;
    return 0;
}