#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 6;

    // Arithmetic Operators
    cout << "Arithmetic Operators\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Relational Operators
    cout << "\nRelational Operators\n";
    cout << "a > b : " << (a > b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;

    // Logical Operators
    cout << "\nLogical Operators\n";
    cout << "(a > 10 && b < 10) : " << (a > 10 && b < 10) << endl;
    cout << "(a > 30 || b < 10) : " << (a > 30 || b < 10) << endl;
    cout << "!(a > b) : " << !(a > b) << endl;

    return 0;
}