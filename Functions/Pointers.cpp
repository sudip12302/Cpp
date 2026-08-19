#include <iostream>
using namespace std;

int main() {
    int number = 10;
    int* pointer = &number;

    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "Value stored in pointer: " << pointer << endl;
    cout << "Value pointed to: " << *pointer << endl;

    // Change the original variable through the pointer.
    *pointer = 25;
    cout << "New value of number: " << number << endl;

    return 0;
}

