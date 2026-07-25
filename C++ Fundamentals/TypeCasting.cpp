#include <iostream>
using namespace std;

int main() {
    double number = 9.75;

    // Implicit Type Casting
    int implicitCast = number;

    // Explicit Type Casting
    int explicitCast = (int)number;

    cout << "Original Value: " << number << endl;
    cout << "Implicit Cast: " << implicitCast << endl;
    cout << "Explicit Cast: " << explicitCast << endl;

    return 0;
}